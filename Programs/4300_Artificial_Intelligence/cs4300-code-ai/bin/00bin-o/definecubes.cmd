define cube wg ***ww**** *g**g**** ****r**** ****b**** ****o**** ****y****
define cube wr ****w**w* ****g**** *r**r**** ****b**** ****o**** ****y****
define cube wb ****ww*** ****g**** ****r**** *b**b**** ****o**** ****y****
define cube wo *w**w**** ****g**** ****r**** ****b**** *o**o**** ****y****

define cube og ****w**** ***gg**** ****r**** ****b**** ****oo*** ****y****
define cube gr ****w**** ****gg*** ***rr**** ****b**** ****o**** ****y****
define cube rb ****w**** ****g**** ****rr*** ***bb**** ****o**** ****y****
define cube bo ****w**** ****g**** ****r**** ****bb*** ***oo**** ****y****

define cube yg ****w**** ****g**g* ****r**** ****b**** ****o**** ***yy****
define cube yr ****w**** ****g**** ****r**r* ****b**** ****o**** *y**y****
define cube yb ****w**** ****g**** ****r**** ****b**b* ****o**** ****yy***
define cube yo ****w**** ****g**** ****r**** ****b**** ****o**o* ****y**y*


define cube wgo w***w**** g***g**** ****r**** ****b**** **o*o**** ****y****
define cube wob **w*w**** ****g**** ****r**** **b*b**** o***o**** ****y****
define cube wrg ****w*w** **g*g**** r***r**** ****b**** ****o**** ****y****
define cube wbr ****w***w ****g**** **r*r**** b***b**** ****o**** ****y****

define cube ygr ****w**** ****g***g ****r*r** ****b**** ****o**** y***y****
define cube yrb ****w**** ****g**** ****r***r ****b*b** ****o**** **y*y****
define cube yog ****w**** ****g*g** ****g**** ****b**** ****o***o ****y*y**
define cube ybo ****w**** ****g**** ****r**** ****b***b ****o*o** ****y***y


define cube wgo2x2x2 wg wo og wgo
define cube wob2x2x2 wo wb bo wob
define cube ygr2x2x2 yg yr gr ygr
define cube yrb2x2x2 yr yb rb yrb


define cube wrg_1 wg
define cube wrg_2 wrg_1 wr
define cube wrg_3 wrg_2 wrg
define cube wrg_4 wrg_3 gr

#-1
define cube daisy ****w**** ****g**** ****r**** ****b**** ****o**** *w*wyw*w*

#0
#white cubies in place

#0_1
define cube wgwr wg wr
define cube wgwb wg wb
define cube wgwo wg wo
define cube wrwb wr wb
define cube wrwo wr wo
define cube wbwo wb wo

#0_2
define cube wgwrwb wg wr wb
define cube wgwrwo wg wr wo
define cube wgwbwo wg wb wo
define cube wbwrwo wb wr wo

#1
define cube cross *w*www*w* *g**g**** *r**r**** *b**b**** *o**o**** ****y****

#2
define cube wgrcross cross wrg
define cube wbrcross cross wbr
define cube wobcross cross wob
define cube wgocross cross wgo

#3
define cube wgr_wbrcross wgrcross wbrcross
define cube wob_wgrcross wobcross wgrcross
define cube wgo_wgrcross wgocross wgrcross
define cube wob_wgocross wobcross wgocross
define cube wob_wbrcross wobcross wbrcross
define cube wgo_wbrcross wgocross wbrcross

#4
define cube wgr_wbr_wobcross wgr_wbrcross wobcross
define cube wgr_wbr_wgocross wgr_wbrcross wgocross
define cube wgr_wgo_wobcross wgo_wgrcross wobcross
define cube wgr_wgo_wbrcross wgo_wgrcross wbrcross

#5
define cube first wwwwwwwww ggg*g**** rrr*r**** bbb*b**** ooo*o**** ****y****

#5_1
define cube first_og first og
define cube first_gr first gr
define cube first_rb first rb
define cube first_bo first bo

#5_2
define cube first_oggr first og gr
define cube first_ogrb first og rb
define cube first_ogbo first og bo
define cube first_grrb first gr rb
define cube first_grbo first gr bo
define cube first_rbbo first rb bo

#5_3
define cube first_oggrrb first og gr rb
define cube first_grrbbo first gr rb bo
define cube first_rbboog first rb bo og
define cube first_booggr first bo og gr

#6
define cube second first_booggr rb

#6_1
# define cube second_2 second 

#7
define cube ycross wwwwwwwww gggggg*** rrrrrr*** bbbbbb*** oooooo*** *y*yyy*y*

#8 
define cube ycross_2 wwwwwwwww gggggg*g* rrrrrr*r* bbbbbb*b* oooooo*o* *y*yyy*y*

#9
define cube solved_minus_3_1 wwwwwwwww gggggggg* rrrrrr*r* bbbbbb*b* oooooo*oo *y*yyyyy*
define cube solved_minus_3_2 wwwwwwwww gggggg*gg rrrrrrrr* bbbbbb*b* oooooo*o* yy*yyy*y*
define cube solved_minus_3_3 wwwwwwwww gggggg*g* rrrrrr*rr bbbbbbbb* oooooo*o* *yyyyy*y*
define cube solved_minus_3_4 wwwwwwwww gggggg*g* rrrrrr*r* bbbbbb*bb oooooooo* *y*yyy*yy

#10
define cube solved_minus_2_1 solved_minus_3_1 solved_minus_3_2
define cube solved_minus_2_2 solved_minus_3_1 solved_minus_3_3
define cube solved_minus_2_2 solved_minus_3_1 solved_minus_3_4
define cube solved_minus_2_2 solved_minus_3_2 solved_minus_3_3
define cube solved_minus_2_2 solved_minus_3_2 solved_minus_3_4
define cube solved_minus_2_2 solved_minus_3_3 solved_minus_3_4





