#define _CRT_SECURE_NO_WARNINGS 

#include "arr.h"

int main()
{
	struct Arr arr;
	int val;
	init_arr(&arr,6);
	show_arr(&arr);
	append_arr(&arr,1);
	append_arr(&arr, 2);
	append_arr(&arr, 3);
	append_arr(&arr, 4);
	append_arr(&arr, 5);
	//insert_arr(&arr, 1, 99);
	//append_arr(&arr, 6);
	//append_arr(&arr, 7);
	//append_arr(&arr, 8);

	if (delete_arr(&arr, 1, &val))
	{
		printf("删除成功！\n");
		printf("您删除的元素是：%d\n", val);
	}
	else
	{
		printf("删除失败！\n");
	}
	if (append_arr(&arr, 8))
	{
		printf("追加成功！\n");

	}
	else
		printf("追加失败！\n");
	show_arr(&arr);
	printf("\n");
	inversion_arr(&arr);
	printf("\n");

	printf("倒置之后的结果：\n");
	show_arr(&arr);
	printf("\n");

	sort_arr(&arr);
	printf("\n");

	show_arr(&arr);
	//delete_arr(&arr, 1, &val);

	
	return 0;
}
