#include "source.h"


//전역변수
int like_num = 0;


int like_list(void)
{
	data();

	int num = -1;

	printf("\n\n\n\n\n");
	printf("원하는 프로그램 번호를 입력하세요. \n");
	printf("(1.음식점 찜 목록 추가 / 2.음식점 찜 목록 초기화 / 3.메뉴 찜 목록 추가 / 4.메뉴 찜 목록 초기화) : ");
	scanf_s(" %d", &num);
	while (getchar() != '\n');

	if ((num < 1) || (num > 4))
	{
		printf("\n\n\n\n");
		printf("1~2번 중의 숫자를 입력해주세요. \n");
		printf("다시 마이페이지로 돌아갑니다.");

		int num_1;
		num_1 = my_page();
	}
	else
	{
		printf("\n\n==> %d번으로 이동합니다. \n\n\n\n", num);

		// 1번으로 이동
		if (num == 1)
		{
			char like_store[100] = { 0 };

			printf("음식점 찜 목록을 추가하는 기능입니다.\n");
			printf("추가하고 싶은 음식점의 이름을 띄어쓰기 없이 작성하여 주십시오. : ");
			scanf(" %s", like_store);
			while (getchar() != '\n');

			for (int i = 0; i < place_define_num; i++)
			{
				if (!strcmp(like_store, place_1[i]))
				{
					FILE* fp1 = fopen("C:/Users/sinka/Desktop/4학기/수업/인공지능을 통한 프로그래밍 실습/AI_TeamProject_Food/like_store.txt", "ab");

					fprintf(fp1, "\n\n");
					fprintf(fp1, "음식점 이름 : %s\n", place_1[i]);
					fprintf(fp1, "걷는 시간 : 총 %d 분\n", walk_time_1[i]);
					fprintf(fp1, "오픈 시간 : %.1f 시\n", open_1[i]);
					fprintf(fp1, "마감 시간 : %.1f 시\n", close_1[i]);
					if (break_start_1[i] != 24)
					{
						fprintf(fp1, "브레이크 시작 시간 : %.1f 시\n", break_start_1[i]);
						fprintf(fp1, "브레이크 마감 시간 : %.1f 시\n", break_done_1[i]);
					}
					else
						fprintf(fp1, "브레이크 시간 : 없음");					
					fprintf(fp1, "\n\n");

					fclose(fp1);

					printf("\n\n파일 작성 완료\n\n");
				}
			}
		}
		// 2번으로 이동
		else if (num == 2)
		{
			char like_s_out;
			printf("\n\n\n정말 음식점 찜 목록을 초기화하시겠습니까?? (Y/N) : ");
			scanf(" %c", &like_s_out);
			while (getchar() != '\n');

			if (like_s_out == 'Y')
			{
				FILE* fp1 = fopen("C:/Users/sinka/Desktop/4학기/수업/인공지능을 통한 프로그래밍 실습/AI_TeamProject_Food/like_store.txt", "wb");
				fprintf(fp1, "\n\n<나의 음식점 리스트>\n\n");
				fclose(fp1);

				printf("\n파일을 초기화시켰습니다.");
			}
			else
				printf("\n초기화를 취소했습니다.");
		}
		// 3번으로 이동
		else if (num == 3)
		{
			char like_menu[100] = { 0 };
			char like_menu_store[100];
			char* kind[8] = { "한식", "분식", "양식", "일식", "중식", "아시안", "컵밥", "카페" };

			printf("\n\n\n메뉴 찜 목록을 추가하는 기능입니다.\n");
			printf("추가하고 싶은 메뉴의 이름을 띄어쓰기 없이 작성하여 주십시오. : ");
			scanf(" %s", like_menu);
			while (getchar() != '\n');

			printf("\n\n그 메뉴를 판매하고 있는 음식점의 이름을 띄어쓰기 없이 적어주십시오. : ");
			scanf("%s", &like_menu_store);
			while (getchar() != '\n');

			for (int i = 0; i < menu_define_num; i++)
			{
				if ((!strcmp(like_menu_store, place_2[i])) && (!strcmp(like_menu, menu[i])))
				{
					FILE* fp2 = fopen("C:/Users/sinka/Desktop/4학기/수업/인공지능을 통한 프로그래밍 실습/AI_TeamProject_Food/like_menu.txt", "ab");

					fprintf(fp2, "\n\n");
					fprintf(fp2, "음식점 이름 : %s\n", place_2[i]);
					fprintf(fp2, "메뉴 이름 : %s\n", menu[i]);
					fprintf(fp2, "메뉴 종류 : %s\n", kind[kind_num[i]-1]);
					fprintf(fp2, "걷는 시간 : 총 %d 분\n", walk_time_2[i]);
					fprintf(fp2, "메뉴 가격 : %d 원\n", price[i]);
					fprintf(fp2 ,"오픈 시간 : %.1f 시\n", open_2[i]);
					fprintf(fp2, "마감 시간 : %.1f 시\n", close_2[i]);

					if (break_start_2[i] != 24)
					{
						fprintf(fp2, "브레이크 시작 시간 : %.1f 시\n", break_start_2[i]);
						fprintf(fp2, "브레이크 마감 시간 : %.1f 시\n", break_done_2[i]);
					}
					else
						fprintf(fp2, "브레이크 시간 : 없음");
					fprintf(fp2, "\n\n");

					fclose(fp2);

					printf("\n\n\n\n파일 작성 완료\n\n");
				}
			}
		}
		// 4번으로 이동
		else 
		{
			char like_m_out;
			printf("\n\n\n\n정말 메뉴 찜 목록을 초기화하시겠습니까?? (Y/N) : ");
			scanf(" %c", &like_m_out);
			while (getchar() != '\n');

			if (like_m_out == 'Y')
			{
				FILE* fp2 = fopen("C:/Users/sinka/Desktop/4학기/수업/인공지능을 통한 프로그래밍 실습/AI_TeamProject_Food/like_menu.txt", "wb");
				fprintf(fp2, "\n\n<나의 메뉴 리스트>\n\n");
				fclose(fp2);

				printf("\n\n파일을 초기화시켰습니다.");
			}
			else
				printf("\n\n초기화를 취소했습니다.");
		}
	}

	printf("\n\n\n\n\n(마이페이지로 돌아갑니다.)\n\n\n");

	int num_1;
	num_1 = my_page();
}



