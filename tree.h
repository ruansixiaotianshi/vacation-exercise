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

//��ʼ��ջ
void InitStack(Stack* s);

//ѹջ
void PushStack(Stack* s, BinaryTree* P);

//��ջ
BinaryTree* PopStack(Stack* s);

//�õ�ջ��Ԫ��
BinaryTree* GetStack(Stack* s);

//��ʼ����
void InitTree(BinaryTree* root);

//����Ԫ�أ����������
void InputTree(BinaryTree* root);

//�ݹ��������
void PreOrder(BinaryTree* root);

//�ݹ��������
void InOrder(BinaryTree* root);

//�ݹ�������
void PostOrder(BinaryTree* root);

//�ǵݹ��������
void _PreOrder(BinaryTree* root, Stack* s);

//�ǵݹ��������
void _InOrder(BinaryTree* root, Stack* s);

//�ǵݹ�������
void _PostOrder(BinaryTree* root, Stack* s);

//��״��ӡ������������
void _PrintfTree(BinaryTree* root, int nLayer);

