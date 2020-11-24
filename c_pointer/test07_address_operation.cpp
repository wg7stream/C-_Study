/*
	地址可以用（+）和减法（-）来运算，加1表示下一个存储单元的地址，减一表示上一个存储单元的地址，
	对于不同的类型，一个存储单元的大小也不一样，char是一个字节，int是4个字节
	一般情况下地址的运算适用于数组（字符串），对单个变量的地址运算没有意义
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void func(int *p){
	printf("array[0] = %d\n", *p);// *优先级高于+
	printf("array[1] = %d\n", *(p + 1));
	printf("array[2] = %d\n", *(p + 2));
	printf("array[3] = %d\n", *(p + 3));
}

int main(){
	int array[4] = {4, 3, 2, 1};
	func(array);

	char cc[4];// 字符数组
	int ii[4];// 整数数组
	double dd[4];// 浮点数组

	// 用地址相加的方式显示数组全部元素的地址
	printf("%p %p %p %p\n", cc, cc + 1, cc + 2, cc + 3);	
	printf("%p %p %p %p\n", ii, ii + 1, ii + 2, ii + 3);	
	printf("%p %p %p %p\n", dd, dd + 1, dd + 2, dd + 3);	

	// 地址运算的应用
	// 字符串截取
	char str[51];
	memset(str, 0, sizeof(str));
	strcpy(str, "www.baidu.com");

	char str1[51];
	memset(str1, 0, sizeof(str1));
	strncpy(str1, str + 4, 5);
	printf("str1 = %s\n", str1);// 打印出 “baidu”

	return 0;
}
