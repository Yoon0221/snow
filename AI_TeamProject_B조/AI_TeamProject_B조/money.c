#include "source.h"


//��������
int money = 0;


int check_money(void)
{
	int num = -1;

	printf("\n\n\n\n");
	printf("���ϴ� ���α׷� ��ȣ�� �Է��ϼ���. \n");
	printf("(1.���� �ܾ� ���� / 2.�ܾ� �߰� / 3.�ܾ� ���� / 4.�ܾ� �ʱ�ȭ) : ");
	scanf_s("%d", &num);
	while (getchar() != '\n');

	if ((num < 1) || (num > 4))
	{
		printf("\n\n\n");
		printf("1~4�� ���� ���ڸ� �Է����ּ���. \n");
		printf("�ٽ� ������������ ���ư��ϴ�.");

		int num_1;
		num_1 = my_page();
	}
	else
	{
		printf("\n\n==> %d������ �̵��մϴ�. \n", num);

		//1������ �̵�
		if (num == 1)
		{
			printf("\n\n\n���� �ܾ��� %d�� �Դϴ�.\n\n", money);
		}
		//2������ �̵�
		else if (num == 2)
		{
			printf("\n\n\n�߰��� �ܾ��� �Է����ּ��� : ");
			int number = 0;
			scanf(" %d", &number);
			while (getchar() != '\n');
			money = money + number;
			printf("\n\n\n���������� %d���� �߰��Ǿ����ϴ�.\n\n", number);
		}
		//3������ �̵�
		else if (num == 3)
		{
			printf("\n\n\n���ҽ�ų �ܾ��� �Է����ּ��� : ");
			int number = 0;
			scanf(" %d", &number);
			while (getchar() != '\n');
			money = money - number;
			printf("\n\n\n���������� %d���� ���ҵǾ����ϴ�.\n\n", number);
		}
		//4������ �̵�
		else if (num == 4)
		{
			printf("\n\n\n���� �ܾ��� �ʱ�ȭ��ų���? (Y / N) : ");
			char ans;
			scanf(" %c", &ans);
			while (getchar() != '\n');
			if (ans == 'Y')
			{
				money = 0;
				printf("\n\n\n���������� �ܾ��� �ʱ�ȭ�Ǿ����ϴ�.\n\n");
			}
			else
				printf("\n\n\n�ٽ� ������������ ���ư��ϴ�.\n\n");

			int num_1;
			num_1 = my_page();
		}
		
	}

	printf("\n\n\n�ٽ� ������������ ���ư��ϴ�.\n\n\n");

	int num_1;
	num_1 = my_page();

	return 0;
}