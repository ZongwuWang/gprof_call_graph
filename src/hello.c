/*
 * @Author: Wang Zongwu
 * @Date: 2022-01-09 17:25:48
 * @LastEditTime: 2022-01-09 17:50:19
 * @LastEditors: Wang Zongwu
 * @Description: 
 * @FilePath: /_posts/root/Documents/CPP_Proj/gprofDemo/src/hello.c
 * @Mail: wangzongwu@sjtu.edu.cn
 * Please ask for permission before quote the code.
 */

#include <stdio.h>

static void my_print(char *);
static void my_print2(const char *);

int main()
{
	char my_string[] = "hello world";
	my_print(my_string);
	my_print2(my_string);
	my_print(my_string);
}

void count_sum()
{
	int sum = 0;
	int count = 10000000;
	for (int i = 0; i < count; i++)
	{
		sum += i;
	}
}

void my_print(char *string)
{
	count_sum();
	printf("The string is %s\n", string);
}

void my_print2(const char *string)
{
	char *string2 = NULL;
	int size;
	int sum = 0;
	int count = 50000000;
	count_sum();
	size = strlen(string);
	string2 = (char *)malloc(size + 1);
	for (int i = 0; i < size; i++)
	{
		string2[size - 1 - i] = *(string+i);
	}
	string2[size] = '\0';
	for (int i = 0; i < count; i++)
	{
		sum += 1;
	}
	printf("The string printed backward is %s\n", string2);
	free(string2);
	string2 = NULL;
}