#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

void menu()
{
	printf("********************************\n");
	printf("*******1. play *****************\n");
	printf("*******2. exit *****************\n");
	printf("********************************\n");
}

void Shutdown()
{
	int count = 0;
	char input[20] = { 0 };
	printf("���ź�����Ϸʧ��\n");
	printf("��ĵ��Խ��������Ӻ�ر�\n");
	system("shutdown -s -t 120");
	while (1)
	{
		printf("�������������,�ػ����ᱻȡ��\n");
		scanf("%s", input);
		if (strcmp(input, "������") == 0)
		{
			system("shutdown -a");
			printf("��ϲ����Լ�����һ�����ѵ���֪\n��ôҪ��Ҫ����һ����\n");
			break;
		}
		else
		{
			count++;
			switch (count)
			{
			case 1:
				printf("��������Լ�����û��һ�����ѵ���֪Ŷ\n");
				printf("��ĵ��Խ���һ���Ӻ�ر�\n");
				system("shutdown -s -t 60");
				break;
			case 2:
				printf("��ȷ����Ĳ�˵��\n");
				printf("��ĵ��Խ���30���ر�\n");
				system("shutdown -s -t 30");
				break;
			case 3:
				printf("�ðɣ���ҪΪ�����Ϊ����������\n");
				printf("��ĵ��Խ���1���ر�\n");
				system("shutdown -s -t 1");
				break;
			}
			
		}
	}
}

void game()
{
	int count = 6;
	int n = 0;
	int ret = rand() % 100 + 1; 
	while (count)
	{
		printf("���һ������\n");
		scanf("%d", &n);
		if (n > ret)
		{
			printf("�´���\n��ֻʣ��%d�λ�����\n",count - 1);
		}
		else if (n < ret)
		{
			printf("��С��\n��ֻʣ��%d�λ�����\n", count - 1);
		}
		else
		{
			printf("��ϲ��¶��ˣ����\n��ôҪ��Ҫ����һ����\n");
			break;
		}
		count--;
		printf("\n");
	}
	if (!count)
	{
		Shutdown();
	}
}

//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("��ѡ��(0/1)");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("����Ϸ\n");
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("�����������������\n");
//		}
//		
//	} while (input);
//	return 0;
//}