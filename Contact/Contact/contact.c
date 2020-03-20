#define _CRT_SECURE_NO_WARNINGS 
#include "contact.h"
void InitContact(Contact * pcon)
{
	assert(pcon != NULL);
	pcon->sz = 0;
	memset(pcon->data, 0, sizeof(pcon->data));
}

void AddContact(Contact * pcon)
{
	assert(pcon != NULL);

	if (pcon->sz==MAX)
	{
		printf("通讯录已满！\n");
	}
	else
	{
		printf("请输入姓名——>;");
		scanf("%s", pcon->data[pcon->sz].name);
		printf("请输入年龄——>;");
		scanf("%s", &(pcon->data[pcon->sz].age));

		printf("请输入性别——>;");
		scanf("%s", pcon->data[pcon->sz].sex);

		printf("请输入联系方式——>;");
		scanf("%s", pcon->data[pcon->sz].tel);

		printf("请输入地址——>;");
		scanf("%s", pcon->data[pcon->sz].addr);
		pcon->sz++;
		printf("添加成功！\n");
	}

}
int FindEntry(Contact* pcon, char name[])
{
	assert(pcon != NULL);
	int i = 0;
	for (i = 0; i < pcon->sz; i++)
	{
		if(strcmp(pcon->data[i].name,name)==0)
			return i;
	}
	return -1;
}
void ShowContact(const Contact * pcon)
{
	assert(pcon != NULL);

	int i = 0;
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-20s\n", "姓名", "年龄", "性别", "电话", "地址");
	for (i = 0; i < pcon->sz; i++)
	{
		printf("%-20s\t%-5d\t%-5s\t%-12s\t%-20s\n",
			pcon->data[i].name,
			pcon->data[i].age,
			pcon->data[i].sex,
			pcon->data[i].tel,
			pcon->data[i].addr);
	}
}

void DelContact(Contact * pcon)
{
	assert(pcon != NULL);
	int ret = 0;
	char name[MAX_NAME] = { 0 };
		if (pcon->sz == 0)
		{
			printf("通讯录为空，无法进行删除操作！\n");
		}
		else
		{
			printf("请输入要删除的人的姓名——>:");
			scanf("%s", name);
			ret = FindEntry(pcon, name);
			if (ret == -1)
			{
				printf("查无此人，无法进行删除操作！\n");
			}
			else
			{
				int i = 0;
				for (i = 0; i < pcon->sz - 1; i++)
				{
					pcon->data[i] = pcon->data[i + 1];
				}
				pcon->sz--;
				printf("删除成功！\n");
			}
		}

	
	
}
void SearchContact(Contact * pcon)
{
	int ret = 0;
	char name[MAX_NAME] = { 0 };
	printf("请输入您要查找的人的姓名——>;");
	scanf("%s", name);
	ret = FindEntry(pcon, name);
	if (ret == -1)
	{
		printf("查无此人！\n");
	}
	else
	{
		int i = 0;
		for (i = 0; i < pcon->sz; i++)
		{
			printf("%-20s\t%-5d\t%-5s\t%-12s\t%-20s\n",
				pcon->data[i].name,
				pcon->data[i].age,
				pcon->data[i].sex,
				pcon->data[i].tel,
				pcon->data[i].addr);
		}
	}
}

void ModifyContact(Contact * pcon)
{
	int ret = 0;
	//char index[] = { 0 };
	char name[MAX_NAME] = { 0 };
	printf("请输入您要修改的人的姓名——>;");
	scanf("%s", name);
	ret = FindEntry(pcon, name);
	if (ret == -1)
	{
		printf("查无此人！\n");
	}
	else
	{
		printf("请输入您要修改的内容——>:");
		printf("请输入姓名——>;");
		scanf("%s", pcon->data[pcon->sz].name);
		printf("请输入年龄——>;");
		scanf("%s", &(pcon->data[pcon->sz].age));

		printf("请输入性别——>;");
		scanf("%s", pcon->data[pcon->sz].sex);

		printf("请输入联系方式——>;");
		scanf("%s", pcon->data[pcon->sz].tel);

		printf("请输入地址——>;");
		scanf("%s", pcon->data[pcon->sz].addr);
		pcon->sz++;
		printf("修改成功！\n");
	}
}

void EmptyContact(Contact * pcon)
{
	printf("清除所有用户信息\n");
	printf("请确认是否删除所有信息（y/n）\n");
	char input[] = { 0 };
	scanf("%s", &input);
	if (strcmp(input, "y") != 0)
	{
		printf("已取消删除！\n");
		return;
	}
	else
		pcon->sz = 0;
	printf("清除成功！\n");
}
