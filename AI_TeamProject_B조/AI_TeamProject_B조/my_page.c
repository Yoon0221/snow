#include "source.h"


int my_page(void)
{
	int mypage_number = -1;

	printf("\n\n");
	printf("���ϴ� ���α׷� ��ȣ�� �Է��ϼ���. \n");
	printf("(1.�α��� ���� / 2.�ܾ� ���� / 3.���� ����Ʈ ���� (�� ��� ����) / 4.Ȩ���� ���ư���) : ");

	scanf_s("%d", &mypage_number);

	if ((mypage_number < 1) || (mypage_number > 5))
	{
		printf("\n\n\n");
		printf("1~4�� ���� ���ڸ� �Է����ּ���. \n");
		printf("�ٽ� Ȩ���� ���ư��ϴ�.");

		int num_1;
		num_1 = home();
	}
	else
	{
		printf("\n\n==> %d������ �̵��մϴ�. \n", mypage_number);

		//1������ �̵�
		if (mypage_number == 1)
			log_in();

		//2������ �̵�
		if (mypage_number == 2)
			if (membership == 1)
				check_money();
			else
			{
				printf("\n\n\n�α��� �Ŀ� �ٽ� �õ����ֽʽÿ�.\n");
				printf("�ٽ� Ȩ���� ���ư��ϴ�.\n\n\n");

				int num_1;
				num_1 = home();
			}

		//3������ �̵�
		if (mypage_number == 3)
			if (membership == 1)
				like_list();
			else
			{
				printf("\n\n\n�α��� �Ŀ� �ٽ� �õ����ֽʽÿ�.\n");
				printf("�ٽ� Ȩ���� ���ư��ϴ�.\n\n\n");

				int num_1;
				num_1 = home();
			}


		//4������ �̵�
		if (mypage_number == 4)
			if (membership == 1)
				home();
			else
			{
				printf("\n\n\n�α��� �Ŀ� �ٽ� �õ����ֽʽÿ�.\n");
				printf("�ٽ� Ȩ���� ���ư��ϴ�.\n\n\n");

				int num_1;
				num_1 = home();
			}

	}

	return 0;
}