#define _CRT_SECURE_NO_WARNINGS 

#include<stdio.h>
#include<string.h>

int main()
{
	int i = 0;
	char password[20] = {0};
	for (i = 1; i <= 3; i++)
	{
		printf("ÇëÊäÈëÃÜÂë£º\n");
		scanf("%s", &password);
		if (0 == strcmp(password, "123456"))
		{
			break;
		}
		else
			printf("ÃÜÂëÓÐÎó!!!\n");
	}
	if (i > 3)
		printf("ÍË³ö³ÌÐò");
	else
	printf("µÇÂ¼³É¹¦!");
	
	return 0;
}