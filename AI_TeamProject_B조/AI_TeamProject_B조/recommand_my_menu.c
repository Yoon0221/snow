#include "source.h"


int recommand_my_menu(void)
{
	data();
	printf("\n\n\n\n\n*********************************************************************************************************************** \n\n");

	//���� ����

	printf("\n�� ���α׷��� ������� ���� ��Ȳ�� ���� �����ϴ� �޴��� ��õ���ִ� ���α׷��Դϴ�. \n");
	printf("�Ʒ� ���õǴ� �ð�, ���, ����(��������) ���� �׸� ���Ͻø� �׿� �´� �޴��� �Ĵ��� ��õ�ص帮�ڽ��ϴ�.\n\n\n");

	printf("�����Ͻðڽ��ϱ�? (Y/N) : ");
	char ans_1;
	scanf(" %c", &ans_1);
	while (getchar() != '\n');

	if (ans_1 == 'Y')
	{
		//�ð�
		printf("\n\n------------------------------------------------------------------------------------------------");
		printf("\n\n\n1. �ð� �����Դϴ�.\n\n\n");
		printf("��� �ð��� �� �� �Դϱ�? \n(����� �б� ������ �������� ���ڸ� �����ֽʽÿ�.) \n---> ex : ���� 3�� 45�� -> 15 (enter) 45 \n\n\n '��' �Է� >>> ");
		int now_time_h, now_time_m;
		scanf("%d", &now_time_h);
		while (getchar() != '\n');
		printf(" '��' �Է� >>> ");
		scanf("%d",& now_time_m);
		while (getchar() != '\n');

		printf("\n\n�б��� �ٽ� ������ �ð��� �� �� �Դϱ�? \n(������ �б� ������ �������� ���ڸ� �����ֽʽÿ�.) \n---> ex : ���� 5�� 5�� -> 17 (enter) 05 \n\n\n '��' �Է� >>> ");
		int end_time_h, end_time_m;
		scanf("%d", &end_time_h);
		while (getchar() != '\n');
		printf(" '��' �Է� >>> ");
		scanf("%d", &end_time_m);
		while (getchar() != '\n');

		printf("\n\n�Ļ翡 �ʿ��� �ð��� �� �� �Դϱ�? \n(�� ������ ���ڸ� �����ֽʽÿ�.) \n---> ex : 1�ð� 30�� -> 90 \n\n\n >>> ");
		int eating_time;
		scanf("%d", &eating_time);
		while (getchar() != '\n');

		int total_time, go_time;
		total_time = (end_time_h - now_time_h - 1) * 60 + (60 - now_time_m) + end_time_m;
		go_time = total_time - eating_time;

		printf("\n\n\n===> ���� 1 : �պ��ð��� %d�� �̳��� �Ĵ��� ��õ�帮�ڽ��ϴ�.\n", go_time);


		//���
		printf("\n\n------------------------------------------------------------------------------------------------");
		printf("\n\n\n������ ��� �����Դϴ�. \n");
		printf("���� ������ �ִ� �ݾ��� ���Դϱ�? (�������� ���ڸ� �Է����ֽʽÿ�.) \n\n\n >>> ");
		int pay;
		scanf("%d", &pay);
		while (getchar() != '\n');

		printf("\n\n\n===> ���� 2 : ����� %d�� �̳��� �޴��� ��õ�帮�ڽ��ϴ�.", pay);


		//����
		printf("\n\n------------------------------------------------------------------------------------------------ ");
		printf("\n\n\n���������� ���� �����Դϴ�. \n");
		printf("�Ʒ� ����߿��� ���ϴ� ���� ������ �����ֽʽÿ�. (��ȣ�� �����ֽʽÿ�.) \n\n");
		printf("*** 1.�ѽ�, 2.�н�, 3.���, 4.�Ͻ�, 5.�߽�, 6.�ƽþ�, 7.�Ź�, 8.ī�� ***\n\n\n >>> ");
		int kind;
		scanf("%d", &kind);
		while (getchar() != '\n');

		char* menu_arr[8] = { "�ѽ�", "�н�", "���", "�Ͻ�", "�߽�", "�ƽþ�", "�Ź�", "ī��" };
		printf("\n\n\n===> ���� 3 : ���� ������ '%s'�� �޴��� ��õ�帮�ڽ��ϴ�.\n\n", menu_arr[kind - 1]);


		//��õ ����
		printf("\n\n------------------------------------------------------------------------------------------------ \n\n");
		printf("\n\n�Է��Ͻ� ������ �´� �������� �޴��� �Ʒ��� �����ϴ�.\n\n");

		FILE* file = fopen("C:/Users/sinka/Desktop/4�б�/����/�ΰ������� ���� ���α׷��� �ǽ�/AI_teamproject_Food/my_file.txt", "w");

		int i;
		for (i = 0; i < menu_define_num; i++)
		{
			if ((go_time >= walk_time_2[i]) && (pay >= price[i]) && (kind == kind_num[i]))
			{
				fprintf(file, "%s %s %d %d %d %f %f %f %f", place_2[i], menu[i], kind_num[i], walk_time_2[i], price[i], open_2[i], close_2[i], break_start_2[i], break_done_2[i]);
				fprintf(file,"\n");
				printf("\n------------------------------------\n%s %s %s", place_2[i], "-", menu[i]);
			}
		}
		printf("\n------------------------------------\n\n");

		fclose(file);

		printf("\n\n���� �������� ������� �Է¸� ���� ���Դϴ�.\n\n");
		printf("���� ��Ȯ�� ������ ���� �������� ���½ð�, �����ð�, �극��ũ Ÿ���� ����Ͽ� �ٽ� ����Ͻðڽ��ϱ�? (Y/N) : ");

		char answer = " ";
		scanf(" %c", &answer);
		while (getchar() != '\n');

		printf("\n");

		if (answer == 'Y')
		{
			char one[100], two[100];
			int n1, n2, n3;
			float n4, n5, n6, n7;
			int i;
			int k = 1;

			FILE* file2 = fopen("C:/Users/sinka/Desktop/4�б�/����/�ΰ������� ���� ���α׷��� �ǽ�/AI_teamproject_Food/my_file.txt", "rb");

			for (i = 1; i < 100; i++)
			{
				fscanf(file2, "%s %s %d %d %d %f %f %f %f", one, two, &n1, &n2, &n3, &n4, &n5, &n6, &n7);
				if (feof(file2))
					break;

				//������ �����ð� : (now_time_h + (now_time_m + walk_time_2[i]) / 60) 
				//������ �� ���� �ð� : ((now_time_h + (now_time_m + walk_time_2[i]) / 60) + eating_time)

				float A = ((float)now_time_h + ((float)now_time_m + (float)n2) / 60);
				float B = (((float)now_time_h + ((float)now_time_m + (float)n2) / 60) + (float)eating_time/60);

				if ((n4 <= A) && (B <= n6))
					printf("\n----------------------------------------------\n���� : %s %s %s ", one, "-", two);
				else if ((n7 <= A) && (B <= n5))
					printf("\n----------------------------------------------\n���� : %s %s %s ", one, "-", two);
			}

			printf("\n----------------------------------------------\n\n\n");

			fclose(file2);
		}
	}

	printf("\n\n����� ���� �޴� ��õ�� �������ϴ�.\n\n");

	printf("\n(Ȩ���� ���ư��ϴ�.)\n");

	int num_1;
	num_1 = home();

	return 0;
}