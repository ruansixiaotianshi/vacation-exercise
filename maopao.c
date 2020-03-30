#include<stdio.h>
#include<stdlib.h>
#include<string.h>


struct Stu
{
	char name[20];
	int age;
};


int cmp_int(const void* e1, const void* e2)
{
	return *(int *)e1 - *(int*)e2;
}


int cmp_by_age(const void* e1, const void* e2)
{
	return ((struct Stu*) e1)->age - ((struct Stu*) e2)->age;
}


int cmp_by_name(const void* e1, const void* e2)
{
	return strcmp(((struct Stu*) e1)->name, ((struct Stu*) e2)->name);
}


void test1()
{
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	int i = 0;
	for (i = 0; i < sz; i++)
	{

		printf("%d ", arr[i]);
	}

}


void test2()
{
	struct Stu s[3] = { {"zhangsan",20},{"lisi",18},{"wangwu",15} };
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), cmp_by_age);

}


void test3()
{
	struct Stu s[3] = { {"zhangsan",20},{"lisi",10},{"wangwu",15} };
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), cmp_by_name);

}

int main()
{
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	struct Stu s[3] = { {"zhangsan",20},{"lisi",10},{"wangwu",15} };

	//test1();
	test2();
	//test3();

	return 0;
}
