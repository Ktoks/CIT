\ this is my first implementation of forth

\ 3dup
: 3dup dup 2over rot ;
\ 3drop
: 3drop drop drop drop ;
\ pack
: pack swap 10 * + + ;
\ unpack
: unpack 10 /mod 10 /mod 100 * swap rot ;
\ printstate
: printstate rot 100 = if ." [ near " else ." [ far " then swap . . ." ]" ;

variable usedcounter
variable candidatecounter
variable crumbcounter
variable used 32 cells allot
variable candidates 20 cells allot
variable crumbs 32 cells allot
variable statesadded

\ check if a number is a member of the used set
: isused                                ( n -- bool )
                    \ loop through all set elements
        usedcounter                         ( n &usedcounter )
        @                                   ( n usedcounter )
        0                                   ( n usedcounter 0 )
        ?do                                 ( n )
                        \ compare n with elt i
            dup                             ( n n )
            used                            ( n n &used )
            i                               ( n n &used i )
            cells                           ( n n &used i*8 )
            +                               ( n n &used[i] )
            @                               ( n n used[i] )
            \ return true if its a match
            =                               ( n n==used[i] )
            if                              ( n )
                drop                        ( )
                -1                          ( true )
                unloop                      ( true )
                exit                        ( true )
            then                            ( n )
        loop                                ( n )
        \ return false
        drop                                ( )
        0                                   ( false )
;


: addused                               ( n -- )
    used                                    ( n &used )
    usedcounter                             ( n &used 1 )
    @                                       ( n used 1 )
    cells                                   ( n used 1*8 )
    +                                       ( n used[1] )
    !                                       (  ) ( used[1]=[n] )
    usedcounter @ 1 + usedcounter !                     ( usedcounter+1 )
;

: pushcandidate 
    candidates
    candidatecounter
    @
    cells
    +
    !
    candidatecounter @ 1 + candidatecounter !                ( candidatecounter+1 )
;

: pushcrumb
    crumbs
    crumbcounter
    @
    cells
    +
    !
    crumbcounter @ 1 + crumbcounter !                    ( crumbcounter+1 )
;

: popcandidate
    candidatecounter                    ( candidatecounter )
    @                                   ( i )
    0                                   ( i 1 )
    >
    if candidatecounter @
    1-
    cells                               ( i-1*8 )
    candidates                          ( i-1*8 candidates )
    +                                   ( candidates[i-1*8] )
    @                                   ( num )
    candidatecounter                    ( num candidatecounter )
    @                                   ( num i )
    1                                   ( num i 1 )
    -                                   ( num i-1 )
    candidatecounter                    ( num i-1 candidatecounter )
    !
    then
;



: popcrumb
    crumbcounter                        ( crumbcounter )
    @                                   ( i )
    0 >                                   ( i 1 )
    if crumbcounter @
    1-                                   ( i-1 )
    cells                               ( i-1*8 )
    crumbs                              ( i-1*8 crumbs )
    +                                   ( crumbs[i-1*8] )
    @                                   ( num )
    crumbcounter                        ( num crumbcounter )
    @                                   ( num i )
    1                                   ( num i 1 )
    -                                   ( num i-1 )
    crumbcounter                        ( num i-1 crumbcounter )
    !
    then
;

: printused
    ." Used "
    usedcounter                         ( usedcounter )
    @                                   ( i )
    0                                   ( i 0 )
    ?do                                  ( i,i-1,...0 )
        i                               ( loop i )
        cells                           ( loop i*8 )
        used                            ( loop i*8 used )
        +                               ( loop used[i] )
        @                               ( loop usedvalue )
        unpack
        cr ( newline )
        printstate
    loop
;

: printcandidates ." Candidates " candidatecounter @ 0 ?do i cells candidates + @ unpack cr printstate loop ;
: printcrumbs ." Crumbs " crumbcounter @ 0 ?do i cells crumbs + @ unpack cr printstate loop ;

: startstate
    100 3 3
;

: isgoal
    pack
    200
    =
    if
        -1
        cr
        ." GOAL!!!! "                               ( true )
        cr
    exit
    then
    0
;

variable legal

: isvalid                           ( state )
    -1 legal !
    3dup
    3dup                                ( state state state )
    0 < -1 = if ( ." invalid c is negative "        ) 0 legal ! else ." good " then
    0 < -1 = if ( ." invalid m is negative "        ) 0 legal ! else ." good " then drop
    3 > -1 = if ( ." invalid c is greater than 3 "  ) 0 legal ! else then
    3 > -1 = if ( ." invalid m is greater than 3 "  ) 0 legal ! else then drop

    < -1 = if   ( ." cannibles eat " ) 0 legal ! else then drop legal @
;

: addcandidate
    3dup                    ( 1 2 3 1 2 3 )
    isvalid                 ( 1 2 3 bool )
    0 = if                  ( 1 2 3 )
        ." invalid "       ( 1 2 3 )        ( "invalid" )
        printstate
        exit                ( 123 )
    then
    3dup
        pack                ( 123 )            ( 123 123 123 )
        isused              ( 123 123 bool )
        -1 = if             ( 123 123 )
            ." repeat "
            printstate
            exit
        then    
            pack
            dup dup
            addused         ( 123 )
            pushcandidate   ( )
            unpack
            ." Fresh " printstate

        statesadded @ 1 + statesadded !
;

: singlemissionary
3dup rot 100 = if swap 1 - 200 rot rot swap addcandidate else swap 1 + 100 rot rot swap addcandidate then
;

: doublemissionary
3dup rot 100 = if swap 2 - 200 rot rot swap addcandidate else swap 2 + 100 rot rot swap addcandidate then
;

: singlecannible
3dup rot 100 = if 1 - 200 rot rot addcandidate else 1 + 100 rot rot addcandidate then
;

: doublecannible
3dup rot 100 = if 2 - 200 rot rot addcandidate else 2 + 100 rot rot addcandidate then
;

: oneeach
3dup rot 100 = 
if 1 - swap 1 - 200 rot rot swap addcandidate 
else 1 + swap 1 + 100 rot rot swap addcandidate then
;

: successors 0
statesadded !
singlemissionary cr
doublemissionary cr
singlecannible cr 
doublecannible cr 
oneeach cr
statesadded @
;



: search
    printcandidates     ( prints candidates )
    cr                  ( new line )
    popcandidate        ( candidate )
    dup                 ( candidate candidate )
    pushcrumb           ( candidate )
    unpack              ( 100 3 3 )
    3dup                ( 100 3 3 100 3 3 )
    isgoal              ( boolean 100 3 3 )
    if                  ( 100 3 3 )
        printcrumbs     ( print past )
        cr              ( newline )
    else
        successors      ( lots o stuff )
        0               ( 0 )
        ?do
            recurse     ( lose my mind )
        loop            ( again?! )
    then                ( are we there yet? )
    popcrumb            ( crumb )
    ." Backtracking"    ( go back in time )
    cr                  ( newline )
;                       ( cry tears of joy )

: start
    0 crumbcounter !
    0 usedcounter !
    0 candidatecounter !
    0 statesadded !
    
    startstate
    pack
    dup
    pushcandidate
    addused
    cr
    search              ( wubalubadubdub )
    
;


( successors 5 states are what possibly happens next: boat moves, 
1missionary, 2 missionarys, 1 cannible, 2 cannibles
blindly list all of the 5 states
then run addcandidate 5 times to check all of those listed states, 
effectively choosing a state that is legal
figure out where the boat goes
search calls everything main function which ends when we finish
write in both python and forth to run debug statements in the same
spot to see what forth is doing vs python
start is like the header file )