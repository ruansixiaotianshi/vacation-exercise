#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<windows.h>
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		printf("%d ", i);
//		i++;//��Ҫ����дi++
//	}
//	return 0;
//}
//break
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			break;
//		printf("%d ", i);
//		i++;//��Ҫ����дi++
//	}
//	return 0;
//}

//continue(���Ǹ��������)

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i++;//��Ҫ����дi++
//	}
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	ch = getchar();
//	putchar(ch);
//
//	return 0;
//}

//int main()
//{
//	int ch = 0;//��ʼ��
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}//Ctrl+Z������ֹ

//forѭ����ӡ1����10
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}
//forѭ����break���

//�޷���.exe����д��
//ԭ���г���ռ�ã����´򿪹��̻���  ��win+r�н�������  ����ȥDEBUG�����.exeǿɾ��
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			break;
//		printf("%d ", i);
//	}
//	return 0;
//}

//continue���

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		Sleep(1000);//��Ϊ����ѭ����д��һ����ʱ���巽��۲�
//		printf("%d ", i);
//		i = 0;
//	}
//	return 0;
//}
//��ѭ��
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i <= 13; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//	return 0;
//}

//int main()
//{
//	int x = 0;
//	int y = 0;
//	for (x = 0, y = 0; x < 2, y < 5; ++x, y++)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}//5��

int main()
{
	int x = 0;
	int y = 0;
	for (x = 0, y = 0; y < 5, x < 2; ++x, y++)
	{
		printf("hehe\n");
	}
	return 0;
}//2��
//ȡ���ں����Ǹ����Ǽ�
