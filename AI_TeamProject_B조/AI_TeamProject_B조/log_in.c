#include "source.h"


//�������� - �� ����
char ID[member][100] = { "����"};
char PassWord[member][100] = { "����02"};
int membership = 0;


int log_in(void)
{
	printf("\n\n\n\n\n*********************************************************************************************************************** \n\n");

	if (membership == 0)
	{
		printf("�α��� ����� �ʿ��� ���Ἥ���Դϴ�.\n");
		printf("�α����Ͻðڽ��ϱ�? (Y /N) : ");
		char ans;
		scanf(" %c", &ans);
		while (getchar() != '\n');
		if (ans == 'Y')
		{
			printf("\n���� ȸ���� 0��, �ű� ȸ�������� 1���� �����ּ���. : ");
			int num = -1;
			scanf("%d", &num);

			if (num == 0)
			{
				char My_ID[100];
				char My_PassWord[100];
				printf("ID �Է� : ");
				scanf(" %s", &My_ID);
				while (getchar() != '\n');
				printf("PassWord �Է� : ");
				scanf(" %s", &My_PassWord);
				while (getchar() != '\n');

				for (int i = 0; i < member; i++)
				{
					if (!strcmp(My_ID, ID[i]) && !strcmp(My_PassWord, PassWord[i]))
					{
						printf("\n\n\n**%s**��, ���������� �α��εǾ����ϴ�~!\n\n", ID[i]);
						membership = 1;
					}
				}
			}
			else if (num == 1)
			{
				printf("\n\n\n���� �����̹Ƿ� �����ڿ��� ���Ǻ�Ź�帳�ϴ�. (010-1111-1111)\n\n");
			}
		}
		else
		{
			printf("\n\n\n(Ȩ���� ���ư��ϴ�.)\n\n");

			int num_1;
			num_1 = home();
		}
	}
	else if (membership == 1)
	{
		printf("\n\n\n�α��� �� �����Դϴ�.\n");
		printf("�α� �ƿ� �Ͻðڽ��ϱ�? (Y/N) : ");
		char ans;
		scanf(" %c", &ans);
		if (ans == 'Y')
		{
			membership = 0;
			printf("\n\n\n���������� �α׾ƿ� �Ǽ̽��ϴ�.\n\n\n");
		}
		else
		{
			printf("\n(Ȩ���� ���ư��ϴ�.)\n");

			int num_1;
			num_1 = home();
		}
	}

	printf("\n\n\n(Ȩ���� ���ư��ϴ�.)\n\n\n");

	int num_1;
	num_1 = home();

	return 0;
}