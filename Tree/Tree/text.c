#define _CRT_SECURE_NO_WARNINGS 1

#include "tree.h"

//�ݹ��ӡ
void RecursiveShowTree(BinaryTree* root)
{
	PreOrder(root);
	printf("\n���������");
	InOrder(root);
	printf("\n���������");
	PostOrder(root);
	printf("\n");
}

//�ǵݹ��ӡ
void NoRecursiveShowTree(BinaryTree* root, Stack* s)
{
	_PreOrder(root, s);
	printf("\n���������");
	_InOrder(root, s);
	printf("\n���������");
	_PostOrder(root, s);
	printf("\n");
}

int main()
{  int number;
   
	Stack* s;
	s = (Stack*)malloc(sizeof(Stack));

    while(1)
    {
        BinaryTree* root;
        root=(BinaryTree*)malloc(sizeof(BinaryTree));
	InitTree(root);
	InputTree(root);
	printf ("��ѡ�������ʽ��\n 1 �ݹ����   2 �ǵݹ����\n");
	
	scanf("%d",&number);
	
	switch(number)
	{case 1: printf("�ݹ����\n�������:"); 
		RecursiveShowTree(root);
		break; 
	
	case 2:
		printf("�ǵݹ����\n�������:");
		
	NoRecursiveShowTree(root, s);
	break;
	
	default:printf("�����������������룺\n"); 
	}

	
	

	_PrintfTree(root, 1);
    
    printf("�Ƿ����¹���һ����(1)\n");
    int i=0;
    scanf("%d",&i);
    if(i!=1)
    {
        return 0;
    }
    free(root);
    }
	return 0;
}

