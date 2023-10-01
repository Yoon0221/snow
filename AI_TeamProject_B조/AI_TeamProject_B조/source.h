//define
#define _CRT_SECURE_NO_WARNINGS
#define place_define_num 89
#define menu_define_num 548
#define member 10


//include
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>


//extern 변수 - data.c
extern char place_1[1000][100];
extern char place_2[1000][100];
extern char menu[1000][100];
extern int kind_num[1000];
extern int walk_time_1[1000];
extern int walk_time_2[1000];
extern int price[1000];
extern float open_1[1000];
extern float open_2[1000];
extern float close_1[1000];
extern float close_2[1000];
extern float break_start_1[1000];
extern float break_start_2[1000];
extern float break_done_1[1000];
extern float break_done_2[1000];
extern int place_num_1[1000];
extern int place_num_2[1000];
extern int menu_num[1000];

//extern 함수 - data.c
extern void data();

//extern 함수 - extra_functions.c
extern int instruction();  
extern int all_place();
extern int all_menu();             

//extern 함수 - random_recommand_menu.c
extern int random_recommand_menu();  

//extern 함수 - recommand_my_menu.c
extern int recommand_my_menu();       

//extern 함수 - plus_tip.c
extern int plus_tip();
         
//extern 함수 - home.c
extern int home();

//extern 함수 - log_in.c
extern int log_in();

//extern 변수 - log_in.c
extern char ID[member][100];
extern char PassWord[member][100];
extern int membership;

//extern 변수 - money.c
extern int money;

//extern 함수 - money.c
extern int check_money();

//extern 함수 - like.c
extern int like_list();

//extern 변수 - like.c
extern int like_num;

//extern 함수 - my_page.c
extern int my_page();