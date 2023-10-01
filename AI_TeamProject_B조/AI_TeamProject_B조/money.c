#include "source.h"


//전역변수
int money = 0;


int check_money(void)
{
	int num = -1;

	printf("\n\n\n\n");
	printf("원하는 프로그램 번호를 입력하세요. \n");
	printf("(1.현재 잔액 보기 / 2.잔액 추가 / 3.잔액 감소 / 4.잔액 초기화) : ");
	scanf_s("%d", &num);
	while (getchar() != '\n');

	if ((num < 1) || (num > 4))
	{
		printf("\n\n\n");
		printf("1~4번 중의 숫자를 입력해주세요. \n");
		printf("다시 마이페이지로 돌아갑니다.");

		int num_1;
		num_1 = my_page();
	}
	else
	{
		printf("\n\n==> %d번으로 이동합니다. \n", num);

		//1번으로 이동
		if (num == 1)
		{
			printf("\n\n\n현재 잔액은 %d원 입니다.\n\n", money);
		}
		//2번으로 이동
		else if (num == 2)
		{
			printf("\n\n\n추가할 잔액을 입력해주세요 : ");
			int number = 0;
			scanf(" %d", &number);
			while (getchar() != '\n');
			money = money + number;
			printf("\n\n\n성공적으로 %d원이 추가되었습니다.\n\n", number);
		}
		//3번으로 이동
		else if (num == 3)
		{
			printf("\n\n\n감소시킬 잔액을 입력해주세요 : ");
			int number = 0;
			scanf(" %d", &number);
			while (getchar() != '\n');
			money = money - number;
			printf("\n\n\n성공적으로 %d원이 감소되었습니다.\n\n", number);
		}
		//4번으로 이동
		else if (num == 4)
		{
			printf("\n\n\n정말 잔액을 초기화시킬까요? (Y / N) : ");
			char ans;
			scanf(" %c", &ans);
			while (getchar() != '\n');
			if (ans == 'Y')
			{
				money = 0;
				printf("\n\n\n성공적으로 잔액이 초기화되었습니다.\n\n");
			}
			else
				printf("\n\n\n다시 마이페이지로 돌아갑니다.\n\n");

			int num_1;
			num_1 = my_page();
		}
		
	}

	printf("\n\n\n다시 마이페이지로 돌아갑니다.\n\n\n");

	int num_1;
	num_1 = my_page();

	return 0;
}