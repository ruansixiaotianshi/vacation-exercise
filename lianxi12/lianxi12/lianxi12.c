#define _CRT_SECURE_NO_WARNINGS 

#include<stdio.h>
#include<string.h>
#include<windows.h>

int main()
{
	//char arr[] = "abc";
	////a b c \0  4个字符
	////0 1 2 3   所占空间为3
	char arr1[] = "welcome to shijiazhuang";
	char arr2[] = "#######################";
	int left = 0;
	int right = strlen(arr1)-1;//记得写-1
	while (left<=right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(500);//先延时，再清零
		system("cls");
		left++;
		right--;
	}
	return 0;
}