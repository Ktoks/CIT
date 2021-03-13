\ ================================================================
\ =================== Missionaries VS Canibals ===================
\ ================================================================


: 3dup              ( x y z -- x y z x y z )
    dup             ( x y z -- x y z z)
    2over           ( .x y. z z -- x y z z .x y.)
    rot             ( x y z z x y -- x y z x y z)
;

: 3drop             ( x y z -- )
    drop            ( x y z -- x y)
    drop            ( x y -- x)
    drop            ( x -- )
;

: pack              ( near m c -- packstate )
    rot             ( near m c -- m c near )
    0 = if swap     ( m c near -- c m )
    10 * + 200 +    ( c + m*10 + 200 -- far packstate)
    ELSE swap
    10 * + 100 +    ( c + m*10 + 100 -- near packstate)
    then
;

: unpack            ( packstate -- near m c)
    dup             ( packstate -- packstate packstate)
    200 < IF        ( must be near side -- packstate)
    100 -           ( sub 100 to get just the m & c)
    10 /MOD swap    ( n -- m c)
    -1 rot rot      ( m c near -- nearT m c )
    ELSE            ( must be far side -- packstate)
    200 -           ( sub 100 to get just the m & c)
    10 /MOD swap    ( n -- m c)
    0 rot rot       ( m c near -- nearF m c )
    THEN
;

: printstate                    ( side m c --)
    rot                         ( side m c -- ??? do we need to dup them?)
    0 =
    IF swap                     ( compare is far -- state m c)
        ." [ far  " . . ." ]"    ( print the far state out)
    ELSE swap                   ( assign the stack v's to can and mis)
        ." [ near " . . ." ]"   ( print the near state out)
    THEN
;

\ ================================================================
\ ======================== Used Stack ============================
\ ================================================================
\ .... Used stack
variable usedcounter        ( Cearte a variable for used list offset )
0 usedcounter !             ( start the used counter at 0)

create used 100 cells       ( grab some memory 100 * 8)
allot                       ( push the hear pointer to the end od used )

                            \ stack
: isused                    ( n -- bool )
                            ( loop )
    usedcounter             ( n &usedcounter )
    @                       ( n usedcounter )
    0                       ( n usedcounter 0 )
    ?do                     ( n )
        \ compare n with elt i
        dup                 ( n n )
        used                ( n n &used )
        i cells             ( n n &used i*8 )
        +                   ( n n &used[i] )
        @                   ( n n used[i] )
        \ if match return true
        = IF                ( n == used[i] )
            drop            ( )
            -1              ( true )
            unloop          ( true )
            exit            ( true )
        then                ( n )
    loop                    ( n )
    \ must be false
    drop                    ( )
    0                       ( false )
;

: addused                   ( n -- )
    \ goal > n memory !
    used                    ( n &used )
    usedcounter @           ( n &used offset )
    cells                   ( n &used offset*8 )
    +                       ( n &used[offset] )
    !                       ( &used[offset] = n )
                            ( )
    \ add 1 to the usedcounter offset
    usedcounter             ( &usedcounter )
    @                       ( usedcounter )
    1+                      ( usedcounter + 1)
    usedcounter             ( usedcounter+1 &usedcounter )
    !                       ( )
;

: used.size()
    usedcounter @ .         ( get the value at &usedcounter )
;

\ ================================================================
\ ==================   Candidate Stack   =========================
\ ================================================================

variable candcounter                ( )
0 candcounter !                     ( start candcounter at 0 )

create candidate 100 cells allot    ( create the candidate list )

: pushcandidate             ( n -- )
    candidate               ( n &candidate)
    candcounter @ cells +   ( n &candidate+offset)
    !                       ( &candidate[offset] = n)
    candcounter @ 1+        ( add 1 to offset)
    candcounter !           ( store the offset number )
;

: popcandidate                  ( -- n)
    candcounter @ 0 >
    IF
        candidate               ( &candidate )
        candcounter             ( &candidate &candcounter )
        @                       ( &candidate candcounter)
        1-                      ( &candidate candcounter-1)
        candcounter !           ( &candidate New-candcounter )
        candcounter @           ( &candidate candcounter )
        cells                   ( &candidate offset)
        + @                     ( candidate[offset] )
    ELSE
        ." Empty Array, Can't pop."
    THEN
;

: candidate.size()
    candcounter @ .
;
\ ================================================================
\ ==================   Bread Crumb Stack   =======================
\ ================================================================

variable crumbcounter                ( )
0 crumbcounter !                     ( start crumbcounter at 0 )

create breadtrail 100 cells allot    ( create the breadtrail list )

: pushbreadtrail                ( n -- )
    breadtrail                  ( n &breadtrail)
    crumbcounter @ cells +      ( n &breadtrail+offset)
    !                           ( &breadtrail[offset] = n)
    crumbcounter @ 1+           ( add 1 to offset)
    crumbcounter !              ( store the offset number )
;

: popbreadtrail                 ( -- n)
    crumbcounter @ 0 >          ( chech is the crumbcounter > 0)
    IF
        breadtrail              ( &breadtrail )
        crumbcounter            ( &breadtrail &crumbcounter )
        @                       ( &breadtrail crumbcounter)
        1-                      ( &breadtrail crumbcounter-1)
        crumbcounter !          ( &breadtrail New-crumbcounter )
        crumbcounter @          ( &breadtrail crumbcounter )
        cells                   ( &breadtrail offset)
        + @                     ( breadtrail[offset] )
    ELSE
        ." Empty Array, Can't pop."
    THEN
;

: breadtrail.size()
    crumbcounter @ .
;
\ =================================================================
\ =================================================================
\ =================================================================

\ print the contents of the used set in order
: printused                 ( -- )
    usedcounter             ( &usedcounter )
    @                       ( usedcounter )
    0                       ( usedcounter 0 )
    ?do                     ( )
        \ get the used[i] on stack
        used                ( &used )
        i cells             ( &used i*8 )
        +                   ( &used[i] )
        @                   ( used[i] )
        \ print stack
        unpack              ( near m c )
        cr
        printstate          ( -- )
    loop
;

\ print the contents of the candidate stack in order
: printcandidates           ( -- )
    ." Candidates: "
    candcounter             ( &candcounter )
    @                       ( cancounter )
    0                       ( candcounter 0 )
    ?do                     ( )
        \ get the candidate[i] on stack
        candidate           ( &candidate )
        i cells             ( &candidate i*8 )
        +                   ( &candidate[i] )
        @                   ( candidate[i] )
        \ print stack
        unpack              ( near m c )
        cr                  ( new line )
        printstate          ( near m c )
    loop
;

\ print the contents of the bread crumb trail in order
: printcrumbs               ( -- )
    cr ." Bread-Crumb Trail"
    crumbcounter            ( &crumbcounter )
    @                       ( crumbcounter )
    0                       ( crumbcounter 0 )
    ?do                     ( )
        \ get the breadtrail[i] on stack
        breadtrail          ( &breadtrail )
        i cells             ( &breadtrail i*8 )
        +                   ( &breadtrail[i] )
        @                   ( breadtrail[i] )
        \ print stack
        unpack              ( near m c )
        cr                  ( new line )
        printstate          ( near m c )
    loop
;

\ push the starting state onto the stack
: startstate                ( -- near m c )
    -1 3 3
;

\ test if the state on the stack is the goal state
: isgoal                    ( near m c -- bool )
    pack                    ( nearmc )
    200                     ( packedstate 233)
    =                       ( bool )
    IF                      ( if consumes bool)
        -1                  ( TRUE )
        cr
        ." Solution Found "
        exit
    THEN
    0
;

: inrange               ( n -- bool )
    dup                 ( n n )
    \ greater than 0
    -1 >                ( n bool)
    swap                ( bool n)
    4 <                 ( bool bool )
    =                   ( bool )
;

: safe                  ( m c -- bool)
    2dup                ( m c m c)
    =                   ( m c bool)
    if                  ( m c )
        drop drop       ( -- )
        -1 exit         ( true exit )

    THEN                ( m c)
    drop dup            ( m m )
    0 =                 ( m bool)
    IF                  ( m )
        drop            ( -- )
        -1 exit         ( exit true )

    THEN                ( m )
    3 =                 ( bool )
    IF                  ( -- )
        -1 exit         ( exit true )

    THEN                ( -- )
    0                   ( exit false)
;

\ test if the state on the stack is valid and legal
: isvalid                           ( near m c -- bool )
    \ is c in range?
    rot drop                        ( m c )
    2dup                            ( m c m c )
    inrange                         ( m c m bool)
    0=
    if                              ( m c m )
        3drop                       ( --- )
        0 exit                      ( exit false)

    then                            ( m c m )
    -1                              ( m c m true)
    swap                            ( m c true m)
    \ is m in range
    inrange                         ( m c true bool)
    0=
    if                              ( m c true )
        3drop                       ( --- )
        0 exit                      ( exit false)

    then                            ( m c true )
    \ must be valid move
    drop                            ( m c )
    safe                            ( bool )
;

variable successorcount
0 successorcount !

\ add a state to the candidate stack if it is valid and new
\ report on the outcome: invalid, repeat, or fresh
: addcandidate                      ( near m c -- )
    \ valid?
    3dup                            ( near m c near m c )
    isvalid                         ( near m c bool)
    0=                              ( is bool false? )
    IF                              ( near m c )
        \ invalid
        ." Invalid " printstate     ( -- )
        exit                        ( -- )

    THEN                            ( near m c )
    \ is a repeat?
    3dup pack                       ( near m c n )
    isused                          ( near m c bool )
    -1 =
    IF                              ( near m c )
        \ already used
        ." Repeat  " printstate     ( -- )
        exit                        ( exit )
    THEN                            ( near m c )
    \ Fresh state
    pack                            ( n )
    dup dup                         ( n n n )
    addused                         ( n n )
    pushcandidate                   ( n )
    unpack                          ( near m c )
    ." Fresh   " printstate         ( -- )

    successorcount @ 1 + successorcount ! ( add 1 to the count )
;

\ find all successor candidates for the given state, push them on stack
\ leaves the number of states added on the stack

\ addcandidate is a helper for successors,
\ which generates all (5) possible successors for a given state,
\ handing each one to addcandidate, which filters some of them out and
\ adds the rest to the candidate stack.

: successors ( near m c -- n )
    ." successors: "
    cr
    \ set the successorcount back to 0
    0 successorcount !  ( near m c )

    \ generate all possible successors
    \ Check is on near side
    \ if near is true we have 5 possible moves and side changes
    rot                 ( m c near)
    0=                  ( m c bool. far side?)
    IF                  ( m c )
        \ --- +: far ==> near    ---
        \ move far to near 1 Canibals
        2dup            ( m c m c)
        -1 -rot         ( m c near m c )
        1 +             ( m c near m c+1 )
        addcandidate    ( m c )
        cr
        \ move far to near 2 Canibals
        2dup            ( m c m c)
        -1 -rot         ( m c near m c )
        2 +             ( m c near m c+2 )
        addcandidate    ( m c )
        cr
        \ move far to near 1m and 1c
        2dup            ( m c m c)
        1 + swap        ( m c c+1 m)
        1 + swap        ( m c m+1 c+1)
        -1 -rot         ( m c near m+1 c+1)
        addcandidate    ( m c )
        cr
        \ move far to near 1 Missionaries
        2dup            ( m c m c)
        swap 1 +        ( m c c m+1)
        -1 -rot swap    ( m c near m+1 c )
        addcandidate    ( m c )
        cr
        \ move far to near 2 Missionaries
        2dup            ( m c m c)
        swap 2 +        ( m c c m+2)
        -1 -rot swap    ( m c near m+2 c )
        addcandidate    ( m c )
        cr
    ELSE ( boat must be on near side)
        \ --- -: near ==> far    ---
        \ move near to far 1 Canibals
        2dup            ( m c m c)
        0 -rot          ( m c far m c )
        1 -             ( m c far m c-1 )
        addcandidate    ( m c )
        cr
        \ move near to far 2 Canibals
        2dup            ( m c m c)
        0 -rot          ( m c far m c )
        2 -             ( m c far m c-2 )
        addcandidate    ( m c )
        cr
        \ move near to far 1m and 1c
        2dup            ( m c m c)
        1 - swap        ( m c c-1 m)
        1 - swap        ( m c m-1 c-1)
        0 -rot          ( m c far m-1 c-1)
        addcandidate    ( m c )
        cr
        \ move near to far 1 Missionaries
        2dup            ( m c m c)
        swap 1 -        ( m c c m-1)
        0 -rot swap     ( m c far m-1 c )
        addcandidate    ( m c )
        cr
        \ move near to far 2 Missionaries
        2dup            ( m c m c)
        swap 2 -        ( m c c m-2)
        0 -rot swap     ( m c far m-2 c )
        addcandidate    ( m c )
        cr
    THEN
    drop drop           ( -- )
    successorcount @    ( n )
;

\ find the solution from position at top of stack
: search                ( -- )
    printcandidates
    cr
    \ pop a candidate state off the candidate stack
    popcandidate        ( n )
    dup                 ( n n )
    pushbreadtrail      ( n )
    unpack              ( near m c)
    3dup                ( near m c near m c)
    isgoal              ( near m c bool )
    IF                  ( near m c )
        printcrumbs
        cr
    ELSE                ( near m c)
        successors      ( n )
        \ loop through the candidates
        \ for i in range of n
        0 ?do
            recurse
        loop
    THEN
    popbreadtrail
    ." Backtracking"
    cr
;

: start
    0 crumbcounter !
    0 usedcounter !
    0 candcounter !
    0 successorcount !

    startstate          ( -1 3 3)
    pack  dup           ( n n )
    pushcandidate       ( n )
    addused             ( -- )
    cr
    search              ( -- )
;
