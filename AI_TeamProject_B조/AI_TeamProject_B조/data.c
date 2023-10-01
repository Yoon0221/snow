#include "source.h"


//전역변수
char place_1[1000][100];
char place_2[1000][100];
char menu[1000][100];

int kind_num[1000];
int walk_time_1[1000];
int walk_time_2[1000];
int price[1000];

float open_1[1000];
float open_2[1000];
float close_1[1000];
float close_2[1000];
float break_start_1[1000];
float break_start_2[1000];
float break_done_1[1000];
float break_done_2[1000];

int place_num_1[1000];
int place_num_2[1000];
int menu_num[1000];


//함수 - 메모장 입력 받기
void data(void)
{
	char one[100], two[100];
	int n1, n2, n3;
	float n4, n5, n6, n7;
	int n8, n9;
	int i;
	int k = 1;
	int x = 1;

	FILE* fp = fopen("C:/Users/sinka/Desktop/4학기/수업/인공지능을 통한 프로그래밍 실습/AI_TeamProject_Food/메모장.txt", "rb");

	for (i = 0; i < menu_define_num; i++)
	{
		fscanf(fp, "%s %s %d %d %d %f %f %f %f %d %d", one, two, &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9);
		
		if (n8 == k)
		{
			strcpy(place_1[k], one);
			walk_time_1[k] = n2;
			open_1[k] = n4;
			close_1[k] = n5;
			break_start_1[k] = n6;
			break_done_1[k] = n7;
			place_num_1[k] = n8;
			k++;
		}

		strcpy(place_2[x], one);
		strcpy(menu[x], two);
		kind_num[x] = n1;
		walk_time_2[x] = n2;
		price[x] = n3;
		open_2[x] = n4;
		close_2[x] = n5;
		break_start_2[x] = n6;
		break_done_2[x] = n7;
		place_num_2[x] = n8;
		menu_num[x] = n9;

		x++;
	}

	fclose(fp);

	return 0;
}