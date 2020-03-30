#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

#define MAX 50


typedef struct BinaryTree
{
	char data;
	int key;
	struct BinaryTree* leftchild;
	struct BinaryTree* rightchild;
}BinaryTree;

typedef struct Stack
{
	int _top;
	BinaryTree* _stackdata[MAX];
}Stack;

//初始化栈
void InitStack(Stack* s);

//压栈
void PushStack(Stack* s, BinaryTree* P);

//弹栈
BinaryTree* PopStack(Stack* s);

//得到栈顶元素
BinaryTree* GetStack(Stack* s);

//初始化树
void InitTree(BinaryTree* root);

//输入元素，构造二叉树
void InputTree(BinaryTree* root);

//递归先序遍历
void PreOrder(BinaryTree* root);

//递归中序遍历
void InOrder(BinaryTree* root);

//递归后序遍历
void PostOrder(BinaryTree* root);

//非递归先序遍历
void _PreOrder(BinaryTree* root, Stack* s);

//非递归中序遍历
void _InOrder(BinaryTree* root, Stack* s);

//非递归后序遍历
void _PostOrder(BinaryTree* root, Stack* s);

//树状打印二叉树（竖向）
void _PrintfTree(BinaryTree* root, int nLayer);

