#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>
#include <malloc.h>
#define MAX 20
int Is_Palindrome(char* arr,unsigned int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left < right)
	{
		if (arr[left] != arr[right])

		
			return 0;
		
		
			++left;
			--right;
		
	}
	return 1;
}

int main()
{
	int ret = 0;
	//char arr[] = { 'a','b','c','b','a' };
	//char arr[] = { 'a','b','c','d','e' };
	char arr[20] ;
	printf("������һ���ַ����ж��Ƿ�Ϊ���ġ�\n");
	scanf("%s", &arr);
	int sz = (sizeof(arr) / sizeof(arr[0]));

	 ret=Is_Palindrome(arr,sz);
	if (1 == ret)
	{
		printf("������ǻ��ġ�");
	}
	else
		printf("����Ĳ��ǻ��ġ�");
	return 0;
}