#include "source.h"


int plus_tip(void)
{
	data();

	//�ȳ�
	printf("\n\n\n\n\n*********************************************************************************************************************** \n\n");
	printf("���� ��õ�� �ް� �����ø� �Ʒ� ��� �� ���ϴ� ��ȣ�� �����ֽʽÿ�.(��ȣ�� �����ʽÿ�.)\n");
	printf("(1.�������� Ư�̻���, 2.�޴��� �� ���ִ� ����)\n\n===> ");
	int num = 0;
	scanf("%d", &num);
	while (getchar() != '\n');

	if (num == 1)
	{
		printf("\n\n\n�������� Ư�̻����� �˷��帮�ڽ��ϴ�.\n\n");
		printf("�˰� ���� �������� �̸��� ���� ���� �����ֽʽÿ�. : ");
		char store_name[100];
		scanf("%s", &store_name);
		while (getchar() != '\n');

		for (int i = 0; i < place_define_num; i++)
		{
			if (!strcmp(store_name, place_1[i]))
			{
				char str1[150] = "C:/Users/sinka/Desktop/4�б�/����/�ΰ������� ���� ���α׷��� �ǽ�/AI_teamproject_Food/���ι�ȣ_1/���ι�ȣ_1_";
				char str2[10];
				_itoa(i, str2, 10);
				char str3[10] = ".txt";

				char* a = str1;
				char* b = str2;
				char* c = str3;

				while (*a)
				{
					a++;
				}
				while (*b)
				{
					*a = *b;
					b++;
					a++;
				}
				while (*c)
				{
					*a = *c;
					c++;
					a++;
				}
				*a = '\0';

				FILE* fp_1 = fopen(str1, "rb");
				char line[1000];

				printf("\n\n\n�ش� �������� ����� �Ʒ��� �����ϴ�.\n\n\n\n");
				while (fgets(line, 1000, fp_1) != NULL) // ������ ���� ������
				{
					printf("%s", line);
				}

				fclose(fp_1);
			}
		}

	}
	else if (num == 2)
	{
		printf("\n\n\n�޴��� �� ���ְ� �Դ� ������ �˷��帮�ڽ��ϴ�.\n\n\n");
		printf("�˰� ���� �޴��� �̸��� ���� ���� �����ֽʽÿ�. : ");
		char menu_name[100];
		scanf("%s", &menu_name);
		while (getchar() != '\n');

		printf("\n\n\n�� �޴��� �Ǹ��ϰ� �ִ� �������� �̸��� ���� ���� �����ֽʽÿ�. : ");
		char store_name_2[100];
		scanf("%s", &store_name_2);
		while (getchar() != '\n');

		for (int i = 0; i < menu_define_num; i++)
		{
			if ((!strcmp(store_name_2, place_2[i])) && (!strcmp(menu_name, menu[i])))
			{
				char str1_2[150] = "C:/Users/sinka/Desktop/4�б�/����/�ΰ������� ���� ���α׷��� �ǽ�/AI_teamproject_Food/���ι�ȣ_2/���ι�ȣ_2_";
				char str2_2[10];
				_itoa(i, str2_2, 10);
				char str3_2[10] = ".txt";

				char* a_1 = str1_2;
				char* b_1 = str2_2;
				char* c_1 = str3_2;

				while (*a_1)
				{
					a_1++;
				}
				while (*b_1)
				{
					*a_1 = *b_1;
					b_1++;
					a_1++;
				}
				while (*c_1)
				{
					*a_1 = *c_1;
					c_1++;
					a_1++;
				}
				*a_1 = '\0';

				FILE* fp_2 = fopen(str1_2, "rb");
				char line_2[1000];

				printf("\n\n\n�ش� �޴��� ������ �Ʒ��� �����ϴ�.\n\n\n\n");
				while (fgets(line_2, 1000, fp_2) != NULL) // ������ ���� ������
				{
					printf("%s", line_2);
				}

				fclose(fp_2);
			}
		}
	}
	else
	{
	printf("\n\n\n1~2�� �� �ϳ��� �Է��ؾ��մϴ�.");
	printf("\n(Ȩ���� ���ư��ϴ�.)\n");

	int num_1;
	num_1 = home();
	}

	printf("\n\n\n\n�������� / �޴��� ���λ��� �ȳ��� �������ϴ�.\n\n\n");

	printf("\n(Ȩ���� ���ư��ϴ�.)\n");

	int num_1;
	num_1 = home();

	return 0;
}