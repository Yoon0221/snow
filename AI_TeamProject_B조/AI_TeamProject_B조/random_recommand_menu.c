#include "source.h"


int random_recommand_menu(void)
{
	//���� �̱�

	int random_number = 0;
	char ans1;
	char ans2;
	char* kind[8] = { "�ѽ�", "�н�", "���", "�Ͻ�", "�߽�", "�ƽþ�", "�Ź�", "ī��" };

	srand((unsigned)time(NULL));
	random_number = rand() % (7 - 0 + 1) + 0;

	data();

	printf("\n\n\n\n\n*********************************************************************************************************************** \n\n");

	printf("�������� ���� ������ ��õ�帱���? (Y / N) : ");
	scanf(" %c", &ans1);
	while (getchar() != '\n');

	if (ans1 == 'Y')
	{
		printf("\n\n\n��õ�� ���� ���� : %s\n\n\n", kind[random_number]);

		printf("�� ������ �Ǹ��ϰ� �ִ� �������� ��õ�ص帱���? (Y / N) : ");
		scanf(" %c", &ans2);
		while (getchar() != '\n');

		if (ans2 == 'Y')
		{
			printf("\n\n");

			int num = 0;

			for (int i = 1; i <= menu_define_num; i++)
			{
				if (random_number + 1 == kind_num[i])
				{
					printf("------------------------------------\n");
					printf("%s - %s\n", place_2[i], menu[i]);
					num = 1;
				}
			}
			printf("------------------------------------\n\n");

			if (num == 0)
				printf("\n\n�˼��մϴ�. �ش� ������ ������ �Ǹ��ϴ� �������� ��ó�� ���׿�.\n\n");
		}
	}

	printf("\n\n(Ȩ���� ���ư��ϴ�.)\n\n");

	int num_1;
	num_1 = home();

	return 0;
}
