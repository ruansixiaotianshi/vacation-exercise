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
		printf("ͨѶ¼������\n");
	}
	else
	{
		printf("��������������>;");
		scanf("%s", pcon->data[pcon->sz].name);
		printf("���������䡪��>;");
		scanf("%s", &(pcon->data[pcon->sz].age));

		printf("�������Ա𡪡�>;");
		scanf("%s", pcon->data[pcon->sz].sex);

		printf("��������ϵ��ʽ����>;");
		scanf("%s", pcon->data[pcon->sz].tel);

		printf("�������ַ����>;");
		scanf("%s", pcon->data[pcon->sz].addr);
		pcon->sz++;
		printf("��ӳɹ���\n");
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
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
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
			printf("ͨѶ¼Ϊ�գ��޷�����ɾ��������\n");
		}
		else
		{
			printf("������Ҫɾ�����˵���������>:");
			scanf("%s", name);
			ret = FindEntry(pcon, name);
			if (ret == -1)
			{
				printf("���޴��ˣ��޷�����ɾ��������\n");
			}
			else
			{
				int i = 0;
				for (i = 0; i < pcon->sz - 1; i++)
				{
					pcon->data[i] = pcon->data[i + 1];
				}
				pcon->sz--;
				printf("ɾ���ɹ���\n");
			}
		}

	
	
}
void SearchContact(Contact * pcon)
{
	int ret = 0;
	char name[MAX_NAME] = { 0 };
	printf("��������Ҫ���ҵ��˵���������>;");
	scanf("%s", name);
	ret = FindEntry(pcon, name);
	if (ret == -1)
	{
		printf("���޴��ˣ�\n");
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
	printf("��������Ҫ�޸ĵ��˵���������>;");
	scanf("%s", name);
	ret = FindEntry(pcon, name);
	if (ret == -1)
	{
		printf("���޴��ˣ�\n");
	}
	else
	{
		printf("��������Ҫ�޸ĵ����ݡ���>:");
		printf("��������������>;");
		scanf("%s", pcon->data[pcon->sz].name);
		printf("���������䡪��>;");
		scanf("%s", &(pcon->data[pcon->sz].age));

		printf("�������Ա𡪡�>;");
		scanf("%s", pcon->data[pcon->sz].sex);

		printf("��������ϵ��ʽ����>;");
		scanf("%s", pcon->data[pcon->sz].tel);

		printf("�������ַ����>;");
		scanf("%s", pcon->data[pcon->sz].addr);
		pcon->sz++;
		printf("�޸ĳɹ���\n");
	}
}

void EmptyContact(Contact * pcon)
{
	printf("��������û���Ϣ\n");
	printf("��ȷ���Ƿ�ɾ��������Ϣ��y/n��\n");
	char input[] = { 0 };
	scanf("%s", &input);
	if (strcmp(input, "y") != 0)
	{
		printf("��ȡ��ɾ����\n");
		return;
	}
	else
		pcon->sz = 0;
	printf("����ɹ���\n");
}
