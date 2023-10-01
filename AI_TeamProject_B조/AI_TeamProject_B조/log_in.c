#include "source.h"


//전역변수 - 고객 관리
char ID[member][100] = { "지윤"};
char PassWord[member][100] = { "지윤02"};
int membership = 0;


int log_in(void)
{
	printf("\n\n\n\n\n*********************************************************************************************************************** \n\n");

	if (membership == 0)
	{
		printf("로그인 기능이 필요한 유료서비스입니다.\n");
		printf("로그인하시겠습니까? (Y /N) : ");
		char ans;
		scanf(" %c", &ans);
		while (getchar() != '\n');
		if (ans == 'Y')
		{
			printf("\n기존 회원은 0번, 신규 회원가입은 1번을 눌러주세요. : ");
			int num = -1;
			scanf("%d", &num);

			if (num == 0)
			{
				char My_ID[100];
				char My_PassWord[100];
				printf("ID 입력 : ");
				scanf(" %s", &My_ID);
				while (getchar() != '\n');
				printf("PassWord 입력 : ");
				scanf(" %s", &My_PassWord);
				while (getchar() != '\n');

				for (int i = 0; i < member; i++)
				{
					if (!strcmp(My_ID, ID[i]) && !strcmp(My_PassWord, PassWord[i]))
					{
						printf("\n\n\n**%s**님, 성공적으로 로그인되었습니다~!\n\n", ID[i]);
						membership = 1;
					}
				}
			}
			else if (num == 1)
			{
				printf("\n\n\n유료 서비스이므로 관리자에게 문의부탁드립니다. (010-1111-1111)\n\n");
			}
		}
		else
		{
			printf("\n\n\n(홈으로 돌아갑니다.)\n\n");

			int num_1;
			num_1 = home();
		}
	}
	else if (membership == 1)
	{
		printf("\n\n\n로그인 된 상태입니다.\n");
		printf("로그 아웃 하시겠습니까? (Y/N) : ");
		char ans;
		scanf(" %c", &ans);
		if (ans == 'Y')
		{
			membership = 0;
			printf("\n\n\n성공적으로 로그아웃 되셨습니다.\n\n\n");
		}
		else
		{
			printf("\n(홈으로 돌아갑니다.)\n");

			int num_1;
			num_1 = home();
		}
	}

	printf("\n\n\n(홈으로 돌아갑니다.)\n\n\n");

	int num_1;
	num_1 = home();

	return 0;
}