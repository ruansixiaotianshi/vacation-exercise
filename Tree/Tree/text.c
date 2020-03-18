#define _CRT_SECURE_NO_WARNINGS 1

#include "tree.h"

//递归打印
void RecursiveShowTree(BinaryTree* root)
{
	PreOrder(root);
	printf("\n中序遍历：");
	InOrder(root);
	printf("\n后序遍历：");
	PostOrder(root);
	printf("\n");
}

//非递归打印
void NoRecursiveShowTree(BinaryTree* root, Stack* s)
{
	_PreOrder(root, s);
	printf("\n中序遍历：");
	_InOrder(root, s);
	printf("\n后序遍历：");
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
	printf ("请选择遍历方式：\n 1 递归遍历   2 非递归遍历\n");
	
	scanf("%d",&number);
	
	switch(number)
	{case 1: printf("递归遍历\n先序遍历:"); 
		RecursiveShowTree(root);
		break; 
	
	case 2:
		printf("非递归遍历\n先序遍历:");
		
	NoRecursiveShowTree(root, s);
	break;
	
	default:printf("输入有误，请重新输入：\n"); 
	}

	
	

	_PrintfTree(root, 1);
    
    printf("是否重新构建一棵树(1)\n");
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

