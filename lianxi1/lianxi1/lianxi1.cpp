#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//int main()
//	{
//		printf("wzylihai \n");
//return 0;
//}
//int main()
//{
//	int num = 10;
//scanf("%d", &num);
//printf("num = %d\n", num);
//return 0;
//}
//int main()
//{
//	printf("%d\n",sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//
//	return 0;
//}
//int main()
//{
//	float weight = 45.5f;
//	printf("%f \n", weight);//ע���ӡ����
//	return 0;
//}
//int age = 20;
//int main()
//{
//	//int age = 10;
//	printf("%d\n", age);
//	return 0;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d%d", &num1, &num2);//����Ҫ��\n
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//	return 0;
//}
//#define MAX  1000//��Ҫ��=�ţ�Ҳ��Ҫ�ӱ�����
//int main()
//{
//	//int MAX = 10;
//	printf("%d\n", MAX);
//	return 0;
//
//}
//enum sex
//{
//	MALE,
//FEMALE,
//SECREAT
//};//����ӷֺ�
//int main()
//{
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECREAT);
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = { 'a','b','c','d','e','f' ,'\0'};
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//
//	printf("%s\n","abcdef" );
//
//	return 0;
//}
//int main()
//{
//	//c:\code\test1\test.c
//	printf("%s\n", "c:\\code\\test1\\test.c");
//	return 0;
//}
//int main()
//{
//	printf("%c\n", '\'');//��ӡ'(ע������%c)%c���ַ�
//	return 0;
//}
//int main()
//{
//	printf("%s\n", "\"");//��ӡ"(ע������%s)%s���ַ���
//	return 0;
//}
//int main()
//{
//	//\32��������ת���ַ�
//
//	printf("%d\n", strlen("c:\test\32\test.c"));
//	return 0;
//}//C3861:"strlen":�Ҳ�����ʶ����ԭ��û�м���string.hͷ�ļ���
//int main()
//{
//	printf("%c\n", '\117');//ASCII������117Ϊ�ַ�o
//	return 0;
//}
int main()
{
	printf("%c\n", '\x040');//ASCII������64Ϊ�ַ�@
	return 0;
}