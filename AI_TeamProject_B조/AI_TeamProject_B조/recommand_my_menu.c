#include "source.h"


int recommand_my_menu(void)
{
	data();
	printf("\n\n\n\n\n*********************************************************************************************************************** \n\n");

	//질문 시작

	printf("\n이 프로그램은 사용자의 현재 상황에 가장 부합하는 메뉴를 추천해주는 프로그램입니다. \n");
	printf("아래 제시되는 시간, 비용, 취향(음식종류) 등의 항목에 답하시면 그에 맞는 메뉴와 식당을 추천해드리겠습니다.\n\n\n");

	printf("시작하시겠습니까? (Y/N) : ");
	char ans_1;
	scanf(" %c", &ans_1);
	while (getchar() != '\n');

	if (ans_1 == 'Y')
	{
		//시간
		printf("\n\n------------------------------------------------------------------------------------------------");
		printf("\n\n\n1. 시간 질문입니다.\n\n\n");
		printf("출발 시간은 몇 시 입니까? \n(출발은 학교 정문을 기준으로 숫자만 적어주십시오.) \n---> ex : 오후 3시 45분 -> 15 (enter) 45 \n\n\n '시' 입력 >>> ");
		int now_time_h, now_time_m;
		scanf("%d", &now_time_h);
		while (getchar() != '\n');
		printf(" '분' 입력 >>> ");
		scanf("%d",& now_time_m);
		while (getchar() != '\n');

		printf("\n\n학교에 다시 도착할 시간은 몇 시 입니까? \n(도착은 학교 정문을 기준으로 숫자만 적어주십시오.) \n---> ex : 오후 5시 5분 -> 17 (enter) 05 \n\n\n '시' 입력 >>> ");
		int end_time_h, end_time_m;
		scanf("%d", &end_time_h);
		while (getchar() != '\n');
		printf(" '분' 입력 >>> ");
		scanf("%d", &end_time_m);
		while (getchar() != '\n');

		printf("\n\n식사에 필요한 시간은 몇 분 입니까? \n(분 단위로 숫자만 적어주십시오.) \n---> ex : 1시간 30분 -> 90 \n\n\n >>> ");
		int eating_time;
		scanf("%d", &eating_time);
		while (getchar() != '\n');

		int total_time, go_time;
		total_time = (end_time_h - now_time_h - 1) * 60 + (60 - now_time_m) + end_time_m;
		go_time = total_time - eating_time;

		printf("\n\n\n===> 조건 1 : 왕복시간이 %d분 이내인 식당을 추천드리겠습니다.\n", go_time);


		//비용
		printf("\n\n------------------------------------------------------------------------------------------------");
		printf("\n\n\n다음은 비용 질문입니다. \n");
		printf("지출 가능한 최대 금액은 얼마입니까? (원단위로 숫자만 입력해주십시오.) \n\n\n >>> ");
		int pay;
		scanf("%d", &pay);
		while (getchar() != '\n');

		printf("\n\n\n===> 조건 2 : 비용이 %d원 이내인 메뉴를 추천드리겠습니다.", pay);


		//취향
		printf("\n\n------------------------------------------------------------------------------------------------ ");
		printf("\n\n\n마지막으로 취향 질문입니다. \n");
		printf("아래 목록중에서 원하는 음식 종류를 적어주십시오. (번호만 적어주십시오.) \n\n");
		printf("*** 1.한식, 2.분식, 3.양식, 4.일식, 5.중식, 6.아시안, 7.컵밥, 8.카페 ***\n\n\n >>> ");
		int kind;
		scanf("%d", &kind);
		while (getchar() != '\n');

		char* menu_arr[8] = { "한식", "분식", "양식", "일식", "중식", "아시안", "컵밥", "카페" };
		printf("\n\n\n===> 조건 3 : 음식 종류가 '%s'인 메뉴를 추천드리겠습니다.\n\n", menu_arr[kind - 1]);


		//추천 시작
		printf("\n\n------------------------------------------------------------------------------------------------ \n\n");
		printf("\n\n입력하신 정보에 맞는 음식점과 메뉴는 아래와 같습니다.\n\n");

		FILE* file = fopen("C:/Users/sinka/Desktop/4학기/수업/인공지능을 통한 프로그래밍 실습/AI_teamproject_Food/my_file.txt", "w");

		int i;
		for (i = 0; i < menu_define_num; i++)
		{
			if ((go_time >= walk_time_2[i]) && (pay >= price[i]) && (kind == kind_num[i]))
			{
				fprintf(file, "%s %s %d %d %d %f %f %f %f", place_2[i], menu[i], kind_num[i], walk_time_2[i], price[i], open_2[i], close_2[i], break_start_2[i], break_done_2[i]);
				fprintf(file,"\n");
				printf("\n------------------------------------\n%s %s %s", place_2[i], "-", menu[i]);
			}
		}
		printf("\n------------------------------------\n\n");

		fclose(file);

		printf("\n\n위의 정보들은 사용자의 입력만 받은 값입니다.\n\n");
		printf("보다 정확한 정보를 위해 음식점의 오픈시간, 마감시간, 브레이크 타임을 고려하여 다시 출력하시겠습니까? (Y/N) : ");

		char answer = " ";
		scanf(" %c", &answer);
		while (getchar() != '\n');

		printf("\n");

		if (answer == 'Y')
		{
			char one[100], two[100];
			int n1, n2, n3;
			float n4, n5, n6, n7;
			int i;
			int k = 1;

			FILE* file2 = fopen("C:/Users/sinka/Desktop/4학기/수업/인공지능을 통한 프로그래밍 실습/AI_teamproject_Food/my_file.txt", "rb");

			for (i = 1; i < 100; i++)
			{
				fscanf(file2, "%s %s %d %d %d %f %f %f %f", one, two, &n1, &n2, &n3, &n4, &n5, &n6, &n7);
				if (feof(file2))
					break;

				//음식점 도착시간 : (now_time_h + (now_time_m + walk_time_2[i]) / 60) 
				//음식을 다 먹은 시간 : ((now_time_h + (now_time_m + walk_time_2[i]) / 60) + eating_time)

				float A = ((float)now_time_h + ((float)now_time_m + (float)n2) / 60);
				float B = (((float)now_time_h + ((float)now_time_m + (float)n2) / 60) + (float)eating_time/60);

				if ((n4 <= A) && (B <= n6))
					printf("\n----------------------------------------------\n최종 : %s %s %s ", one, "-", two);
				else if ((n7 <= A) && (B <= n5))
					printf("\n----------------------------------------------\n최종 : %s %s %s ", one, "-", two);
			}

			printf("\n----------------------------------------------\n\n\n");

			fclose(file2);
		}
	}

	printf("\n\n사용자 맞춤 메뉴 추천이 끝났습니다.\n\n");

	printf("\n(홈으로 돌아갑니다.)\n");

	int num_1;
	num_1 = home();

	return 0;
}