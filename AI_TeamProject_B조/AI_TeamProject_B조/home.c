#include "source.h"


int home(void)
{
	int home_number = -1;

	printf("\n\n\n\n\n*********************************************************************************************************************** \n\n");
	printf("���ϴ� ���α׷� ��ȣ�� �Է��ϼ���. \n");
	printf("(1.�Ұ� / 2.��ü ������ ���� / 3.��ü �޴� ���� / 4.���� ���� ��õ /\n");
	printf(" 5.������ �´� ���� ��õ / 6. �������� or �޴��� ���λ��� ���� / 7. ����������)");
	printf("\n\n===> ");
	scanf_s("%d", &home_number);

	if ((home_number < 1) || (home_number > 7))
	{
		while (getchar() != '\n');
		printf("\n\n\n1~7�� ���� ���ڸ� �Է����ּ���. \n");
		printf("�ٽ� Ȩ���� ���ư��ϴ�.");

		int num_1;
		num_1 = home();
	}
	else
	{
		printf("\n\n\n\n===> %d������ �̵��մϴ�. \n", home_number);

		//1������ �̵�
		if (home_number == 1)
			instruction();

		//2������ �̵�
		if (home_number == 2)
			all_place();

		//3������ �̵�
		if (home_number == 3)
			all_menu();
		
		//4������ �̵�
		if (home_number == 4)
			random_recommand_menu();

		//5������ �̵�
		if (home_number == 5)
			recommand_my_menu();

		//6������ �̵�
		if (home_number == 6)
			plus_tip();

		//7������ �̵�
		if (home_number == 7)
			my_page();
	}

	return 0;
}