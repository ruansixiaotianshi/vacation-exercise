#define _CRT_SECURE_NO_WARNINGS 

#include<stdio.h>
#include<string.h>

int main()
{
	int i = 0;
	char password[20] = {0};
	for (i = 1; i <= 3; i++)
	{
		printf("���������룺\n");
		scanf("%s", &password);
		if (0 == strcmp(password, "123456"))
		{
			break;
		}
		else
			printf("��������!!!\n");
	}
	if (i > 3)
		printf("�˳�����");
	else
	printf("��¼�ɹ�!");
	
	return 0;
}