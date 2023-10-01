#include "source.h"


int random_recommand_menu(void)
{
	//랜덤 뽑기

	int random_number = 0;
	char ans1;
	char ans2;
	char* kind[8] = { "한식", "분식", "양식", "일식", "중식", "아시안", "컵밥", "카페" };

	srand((unsigned)time(NULL));
	random_number = rand() % (7 - 0 + 1) + 0;

	data();

	printf("\n\n\n\n\n*********************************************************************************************************************** \n\n");

	printf("랜덤으로 음식 종류를 추천드릴까요? (Y / N) : ");
	scanf(" %c", &ans1);
	while (getchar() != '\n');

	if (ans1 == 'Y')
	{
		printf("\n\n\n추천된 음식 종류 : %s\n\n\n", kind[random_number]);

		printf("위 음식을 판매하고 있는 음식점을 추천해드릴까요? (Y / N) : ");
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
				printf("\n\n죄송합니다. 해당 종류의 음식을 판매하는 음식점이 근처에 없네요.\n\n");
		}
	}

	printf("\n\n(홈으로 돌아갑니다.)\n\n");

	int num_1;
	num_1 = home();

	return 0;
}
