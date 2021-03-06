#define _CRT_SECURE_NO_WARNINGS 1

#include "tree.h"

int numer = 0;

//��ʼ��ջ
void InitStack(Stack* s)
{
	assert(s);
	s->_top = 0;
}
//Ԫ�ؽ�ջ ����ջ 
void PushStack(Stack* s, BinaryTree* P)
{
	assert(s);
	s->_stackdata[s->_top++] = P;
}

BinaryTree* PopStack(Stack* s)
{
	assert(s);
	BinaryTree* n = s->_stackdata[--s->_top];
	return n;
}
//ȡջ��Ԫ�� 
BinaryTree* GetStack(Stack* s)
{
	assert(s);
	BinaryTree* n = s->_stackdata[s->_top - 1];
	return n;
}

//��ʼ���� 
void InitTree(BinaryTree* root)
{
	assert(root);
	root->data = '\0';
	root->leftchild = root->rightchild = NULL;
}

//����Ԫ��(������������)
void InputTree(BinaryTree* root)
{ 
	assert(root);
	char letter;
	scanf("%c", &letter);
	if (letter == ' ')
	{
		numer--;
	}
	root->key = numer++;
	root->data = letter;
	if (letter == ' ')
	{
		return;
	}
	root->leftchild = (BinaryTree*)malloc(sizeof(BinaryTree));
	InitTree(root->leftchild);
	InputTree(root->leftchild);
	root->rightchild = (BinaryTree*)malloc(sizeof(BinaryTree));
	InitTree(root->rightchild);
	InputTree(root->rightchild);
}

//�ݹ��������
void PreOrder(BinaryTree* root)
{
	assert(root);

	if (root->data == ' ')
	{
		return;
	}
	printf("(%d)%c ",root->key, root->data);
	PreOrder(root->leftchild);

	PreOrder(root->rightchild);
}

//�ݹ��������
void InOrder(BinaryTree* root)
{
	assert(root);

	if (root->data == ' ')
	{
		return;
	}
	
	InOrder(root->leftchild);
	printf("(%d)%c ", root->key, root->data);
	InOrder(root->rightchild);
}

//�ݹ�������
void PostOrder(BinaryTree* root)
{
	assert(root);

	if (root->data == ' ')
	{
		return;
	}
	
	PostOrder(root->leftchild);
	PostOrder(root->rightchild);
	printf("(%d)%c ", root->key, root->data);
}

//�ǵݹ��������
void _PreOrder(BinaryTree* root, Stack* s)
{
	assert(s&&root);
	InitStack(s);
	BinaryTree* p = root;
	while (p != NULL || s->_top != 0)
	{
		if (p != NULL)
		{
			PushStack(s, p);
			if (p->data != ' ')
			{
				printf("(%d)%c ", p->key, p->data);
			}
			p = p->leftchild;
		}
		else
		{
			p = PopStack(s);
			p = p->rightchild;
		}
	}
}

//�ǵݹ��������
void _InOrder(BinaryTree* root, Stack* s)
{
	assert(s&&root);
	InitStack(s);
	BinaryTree* p = root;
	while (p != NULL || s->_top != 0)
	{
		if (p != NULL)
		{
			PushStack(s, p);
			p = p->leftchild;
		}
		else
		{
			p = PopStack(s);
			if (p->data != ' ')
			{
				printf("(%d)%c ", p->key, p->data);
			}
			p = p->rightchild;
		}
	}
}

//�ǵݹ�������
void _PostOrder(BinaryTree* root, Stack* s)
{
	assert(s&&root);
	InitStack(s);
	BinaryTree* p = root;
	BinaryTree* q = NULL;
	while (p != NULL || s->_top != 0)
	{
		if (p != NULL)
		{
			PushStack(s, p);
			p = p->leftchild;
		}
		else
		{
			p = GetStack(s);
			if ((p->rightchild == NULL) || (p->rightchild == q))
			{
				if (p->data != ' ')
				{
					printf("(%d)%c ", p->key,p->data);
				}
				q = p;
				p = PopStack(s);
				p = NULL;
			}
			else
			{
				p = p->rightchild;
			}
		}
	}
}

//��״��ӡ������������
void _PrintfTree(BinaryTree* root, int nLayer)
{
	if (root->data==' ')
	{
		return;
	}

	_PrintfTree(root->rightchild, nLayer + 1);

	int i = 0;
	for (i = 0; i < nLayer; i++)
	{
		printf("   ");
	}
	printf("|(%d)%c\n", root->key, root->data);

	_PrintfTree(root->leftchild, nLayer + 1);
}


