#include "source.h"


//��������
int like_num = 0;


int like_list(void)
{
	data();

	int num = -1;

	printf("\n\n\n\n\n");
	printf("���ϴ� ���α׷� ��ȣ�� �Է��ϼ���. \n");
	printf("(1.������ �� ��� �߰� / 2.������ �� ��� �ʱ�ȭ / 3.�޴� �� ��� �߰� / 4.�޴� �� ��� �ʱ�ȭ) : ");
	scanf_s(" %d", &num);
	while (getchar() != '\n');

	if ((num < 1) || (num > 4))
	{
		printf("\n\n\n\n");
		printf("1~2�� ���� ���ڸ� �Է����ּ���. \n");
		printf("�ٽ� ������������ ���ư��ϴ�.");

		int num_1;
		num_1 = my_page();
	}
	else
	{
		printf("\n\n==> %d������ �̵��մϴ�. \n\n\n\n", num);

		// 1������ �̵�
		if (num == 1)
		{
			char like_store[100] = { 0 };

			printf("������ �� ����� �߰��ϴ� ����Դϴ�.\n");
			printf("�߰��ϰ� ���� �������� �̸��� ���� ���� �ۼ��Ͽ� �ֽʽÿ�. : ");
			scanf(" %s", like_store);
			while (getchar() != '\n');

			for (int i = 0; i < place_define_num; i++)
			{
				if (!strcmp(like_store, place_1[i]))
				{
					FILE* fp1 = fopen("C:/Users/sinka/Desktop/4�б�/����/�ΰ������� ���� ���α׷��� �ǽ�/AI_TeamProject_Food/like_store.txt", "ab");

					fprintf(fp1, "\n\n");
					fprintf(fp1, "������ �̸� : %s\n", place_1[i]);
					fprintf(fp1, "�ȴ� �ð� : �� %d ��\n", walk_time_1[i]);
					fprintf(fp1, "���� �ð� : %.1f ��\n", open_1[i]);
					fprintf(fp1, "���� �ð� : %.1f ��\n", close_1[i]);
					if (break_start_1[i] != 24)
					{
						fprintf(fp1, "�극��ũ ���� �ð� : %.1f ��\n", break_start_1[i]);
						fprintf(fp1, "�극��ũ ���� �ð� : %.1f ��\n", break_done_1[i]);
					}
					else
						fprintf(fp1, "�극��ũ �ð� : ����");					
					fprintf(fp1, "\n\n");

					fclose(fp1);

					printf("\n\n���� �ۼ� �Ϸ�\n\n");
				}
			}
		}
		// 2������ �̵�
		else if (num == 2)
		{
			char like_s_out;
			printf("\n\n\n���� ������ �� ����� �ʱ�ȭ�Ͻðڽ��ϱ�?? (Y/N) : ");
			scanf(" %c", &like_s_out);
			while (getchar() != '\n');

			if (like_s_out == 'Y')
			{
				FILE* fp1 = fopen("C:/Users/sinka/Desktop/4�б�/����/�ΰ������� ���� ���α׷��� �ǽ�/AI_TeamProject_Food/like_store.txt", "wb");
				fprintf(fp1, "\n\n<���� ������ ����Ʈ>\n\n");
				fclose(fp1);

				printf("\n������ �ʱ�ȭ���׽��ϴ�.");
			}
			else
				printf("\n�ʱ�ȭ�� ����߽��ϴ�.");
		}
		// 3������ �̵�
		else if (num == 3)
		{
			char like_menu[100] = { 0 };
			char like_menu_store[100];
			char* kind[8] = { "�ѽ�", "�н�", "���", "�Ͻ�", "�߽�", "�ƽþ�", "�Ź�", "ī��" };

			printf("\n\n\n�޴� �� ����� �߰��ϴ� ����Դϴ�.\n");
			printf("�߰��ϰ� ���� �޴��� �̸��� ���� ���� �ۼ��Ͽ� �ֽʽÿ�. : ");
			scanf(" %s", like_menu);
			while (getchar() != '\n');

			printf("\n\n�� �޴��� �Ǹ��ϰ� �ִ� �������� �̸��� ���� ���� �����ֽʽÿ�. : ");
			scanf("%s", &like_menu_store);
			while (getchar() != '\n');

			for (int i = 0; i < menu_define_num; i++)
			{
				if ((!strcmp(like_menu_store, place_2[i])) && (!strcmp(like_menu, menu[i])))
				{
					FILE* fp2 = fopen("C:/Users/sinka/Desktop/4�б�/����/�ΰ������� ���� ���α׷��� �ǽ�/AI_TeamProject_Food/like_menu.txt", "ab");

					fprintf(fp2, "\n\n");
					fprintf(fp2, "������ �̸� : %s\n", place_2[i]);
					fprintf(fp2, "�޴� �̸� : %s\n", menu[i]);
					fprintf(fp2, "�޴� ���� : %s\n", kind[kind_num[i]-1]);
					fprintf(fp2, "�ȴ� �ð� : �� %d ��\n", walk_time_2[i]);
					fprintf(fp2, "�޴� ���� : %d ��\n", price[i]);
					fprintf(fp2 ,"���� �ð� : %.1f ��\n", open_2[i]);
					fprintf(fp2, "���� �ð� : %.1f ��\n", close_2[i]);

					if (break_start_2[i] != 24)
					{
						fprintf(fp2, "�극��ũ ���� �ð� : %.1f ��\n", break_start_2[i]);
						fprintf(fp2, "�극��ũ ���� �ð� : %.1f ��\n", break_done_2[i]);
					}
					else
						fprintf(fp2, "�극��ũ �ð� : ����");
					fprintf(fp2, "\n\n");

					fclose(fp2);

					printf("\n\n\n\n���� �ۼ� �Ϸ�\n\n");
				}
			}
		}
		// 4������ �̵�
		else 
		{
			char like_m_out;
			printf("\n\n\n\n���� �޴� �� ����� �ʱ�ȭ�Ͻðڽ��ϱ�?? (Y/N) : ");
			scanf(" %c", &like_m_out);
			while (getchar() != '\n');

			if (like_m_out == 'Y')
			{
				FILE* fp2 = fopen("C:/Users/sinka/Desktop/4�б�/����/�ΰ������� ���� ���α׷��� �ǽ�/AI_TeamProject_Food/like_menu.txt", "wb");
				fprintf(fp2, "\n\n<���� �޴� ����Ʈ>\n\n");
				fclose(fp2);

				printf("\n\n������ �ʱ�ȭ���׽��ϴ�.");
			}
			else
				printf("\n\n�ʱ�ȭ�� ����߽��ϴ�.");
		}
	}

	printf("\n\n\n\n\n(������������ ���ư��ϴ�.)\n\n\n");

	int num_1;
	num_1 = my_page();
}



