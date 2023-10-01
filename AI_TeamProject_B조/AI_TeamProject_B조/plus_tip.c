#include "source.h"


int plus_tip(void)
{
	data();

	//안내
	printf("\n\n\n\n\n*********************************************************************************************************************** \n\n");
	printf("꿀팁 추천을 받고 싶으시면 아래 목록 중 원하는 번호를 눌러주십시오.(번호만 누르십시오.)\n");
	printf("(1.음식점별 특이사항, 2.메뉴별 더 맛있는 꿀팁)\n\n===> ");
	int num = 0;
	scanf("%d", &num);
	while (getchar() != '\n');

	if (num == 1)
	{
		printf("\n\n\n음식점별 특이사항을 알려드리겠습니다.\n\n");
		printf("알고 싶은 음식점의 이름을 띄어쓰기 없이 적어주십시오. : ");
		char store_name[100];
		scanf("%s", &store_name);
		while (getchar() != '\n');

		for (int i = 0; i < place_define_num; i++)
		{
			if (!strcmp(store_name, place_1[i]))
			{
				char str1[150] = "C:/Users/sinka/Desktop/4학기/수업/인공지능을 통한 프로그래밍 실습/AI_teamproject_Food/세부번호_1/세부번호_1_";
				char str2[10];
				_itoa(i, str2, 10);
				char str3[10] = ".txt";

				char* a = str1;
				char* b = str2;
				char* c = str3;

				while (*a)
				{
					a++;
				}
				while (*b)
				{
					*a = *b;
					b++;
					a++;
				}
				while (*c)
				{
					*a = *c;
					c++;
					a++;
				}
				*a = '\0';

				FILE* fp_1 = fopen(str1, "rb");
				char line[1000];

				printf("\n\n\n해당 음식점의 리뷰는 아래와 같습니다.\n\n\n\n");
				while (fgets(line, 1000, fp_1) != NULL) // 파일이 끝날 때까지
				{
					printf("%s", line);
				}

				fclose(fp_1);
			}
		}

	}
	else if (num == 2)
	{
		printf("\n\n\n메뉴별 더 맛있게 먹는 꿀팁을 알려드리겠습니다.\n\n\n");
		printf("알고 싶은 메뉴의 이름을 띄어쓰기 없이 적어주십시오. : ");
		char menu_name[100];
		scanf("%s", &menu_name);
		while (getchar() != '\n');

		printf("\n\n\n그 메뉴를 판매하고 있는 음식점의 이름을 띄어쓰기 없이 적어주십시오. : ");
		char store_name_2[100];
		scanf("%s", &store_name_2);
		while (getchar() != '\n');

		for (int i = 0; i < menu_define_num; i++)
		{
			if ((!strcmp(store_name_2, place_2[i])) && (!strcmp(menu_name, menu[i])))
			{
				char str1_2[150] = "C:/Users/sinka/Desktop/4학기/수업/인공지능을 통한 프로그래밍 실습/AI_teamproject_Food/세부번호_2/세부번호_2_";
				char str2_2[10];
				_itoa(i, str2_2, 10);
				char str3_2[10] = ".txt";

				char* a_1 = str1_2;
				char* b_1 = str2_2;
				char* c_1 = str3_2;

				while (*a_1)
				{
					a_1++;
				}
				while (*b_1)
				{
					*a_1 = *b_1;
					b_1++;
					a_1++;
				}
				while (*c_1)
				{
					*a_1 = *c_1;
					c_1++;
					a_1++;
				}
				*a_1 = '\0';

				FILE* fp_2 = fopen(str1_2, "rb");
				char line_2[1000];

				printf("\n\n\n해당 메뉴의 꿀팁은 아래와 같습니다.\n\n\n\n");
				while (fgets(line_2, 1000, fp_2) != NULL) // 파일이 끝날 때까지
				{
					printf("%s", line_2);
				}

				fclose(fp_2);
			}
		}
	}
	else
	{
	printf("\n\n\n1~2번 중 하나를 입력해야합니다.");
	printf("\n(홈으로 돌아갑니다.)\n");

	int num_1;
	num_1 = home();
	}

	printf("\n\n\n\n음식점별 / 메뉴별 세부사항 안내가 끝났습니다.\n\n\n");

	printf("\n(홈으로 돌아갑니다.)\n");

	int num_1;
	num_1 = home();

	return 0;
}