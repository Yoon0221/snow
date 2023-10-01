#include "source.h"


int my_page(void)
{
	int mypage_number = -1;

	printf("\n\n");
	printf("원하는 프로그램 번호를 입력하세요. \n");
	printf("(1.로그인 관리 / 2.잔액 관리 / 3.나의 리스트 관리 (찜 목록 관리) / 4.홈으로 돌아가기) : ");

	scanf_s("%d", &mypage_number);

	if ((mypage_number < 1) || (mypage_number > 5))
	{
		printf("\n\n\n");
		printf("1~4번 중의 숫자를 입력해주세요. \n");
		printf("다시 홈으로 돌아갑니다.");

		int num_1;
		num_1 = home();
	}
	else
	{
		printf("\n\n==> %d번으로 이동합니다. \n", mypage_number);

		//1번으로 이동
		if (mypage_number == 1)
			log_in();

		//2번으로 이동
		if (mypage_number == 2)
			if (membership == 1)
				check_money();
			else
			{
				printf("\n\n\n로그인 후에 다시 시도해주십시오.\n");
				printf("다시 홈으로 돌아갑니다.\n\n\n");

				int num_1;
				num_1 = home();
			}

		//3번으로 이동
		if (mypage_number == 3)
			if (membership == 1)
				like_list();
			else
			{
				printf("\n\n\n로그인 후에 다시 시도해주십시오.\n");
				printf("다시 홈으로 돌아갑니다.\n\n\n");

				int num_1;
				num_1 = home();
			}


		//4번으로 이동
		if (mypage_number == 4)
			if (membership == 1)
				home();
			else
			{
				printf("\n\n\n로그인 후에 다시 시도해주십시오.\n");
				printf("다시 홈으로 돌아갑니다.\n\n\n");

				int num_1;
				num_1 = home();
			}

	}

	return 0;
}