#include "source.h"


int home(void)
{
	int home_number = -1;

	printf("\n\n\n\n\n*********************************************************************************************************************** \n\n");
	printf("원하는 프로그램 번호를 입력하세요. \n");
	printf("(1.소개 / 2.전체 음식점 보기 / 3.전체 메뉴 보기 / 4.랜덤 점심 추천 /\n");
	printf(" 5.나에게 맞는 점심 추천 / 6. 음식점별 or 메뉴별 세부사항 보기 / 7. 마이페이지)");
	printf("\n\n===> ");
	scanf_s("%d", &home_number);

	if ((home_number < 1) || (home_number > 7))
	{
		while (getchar() != '\n');
		printf("\n\n\n1~7번 중의 숫자를 입력해주세요. \n");
		printf("다시 홈으로 돌아갑니다.");

		int num_1;
		num_1 = home();
	}
	else
	{
		printf("\n\n\n\n===> %d번으로 이동합니다. \n", home_number);

		//1번으로 이동
		if (home_number == 1)
			instruction();

		//2번으로 이동
		if (home_number == 2)
			all_place();

		//3번으로 이동
		if (home_number == 3)
			all_menu();
		
		//4번으로 이동
		if (home_number == 4)
			random_recommand_menu();

		//5번으로 이동
		if (home_number == 5)
			recommand_my_menu();

		//6번으로 이동
		if (home_number == 6)
			plus_tip();

		//7번으로 이동
		if (home_number == 7)
			my_page();
	}

	return 0;
}