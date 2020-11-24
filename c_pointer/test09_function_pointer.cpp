/*
	函数指针
	C程序的每一个函数都有一个入口地址，函数指针是指向函数入口地址的指针变量
	有了指向函数的指针变量后，可以利用函数指针变量调用函数，就像用指针变量操作其他类型变量一样
	函数指针有两个用途：
		1. 调用函数
		2. 做函数的参数		
*/


/*
	指针函数
	返回值为地址的函数就是指针函数
*/

#include <stdio.h>
#include <string.h>

int max(int x, int y){
	if (x > y) return x;

	return y;
}

int main(){
	int a, b, c;
	scanf("%d %d", &a, &b);

	int (*ptr)(int, int);// 定义一个函数指针，ptr为该指针的名字
	int (*ptr2)(int x, int y);// 这种写法也可以

	// 两种写法均可以
	ptr = max;
	ptr2 = &max;

	c = (*ptr)(a, b);

	printf("a = %d, b = %d, max = %d\n", a, b, c);

	return 0;
}
