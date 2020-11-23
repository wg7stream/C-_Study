/*
	指针的应用场景
	1. 函数的参数
		a. 在函数中需要改变变量的值
		b. 减少内存的开销（如传递结构体指针）
	2. 函数的返回值
*/

#include <stdio.h>

void func(int* b);// 声明函数func，无返回值

int main(){
	int a = 10;

	printf("调用func前a的值：%d. \n", a);

	{
		int *b;
		b = &a;

		printf("赋值后b的值是%d.\n", *b);
		*b = 20;
		printf("赋值后b的值是%d.\n", *b);
	}

	func(&a);
	printf("调用func后a的值：%d. \n", a);

	return 0;
}

void func(int* b){
	printf("赋值前b的值是%d.\n", *b);
	
	*b = 20;
 
	printf("赋值后b的值是%d.\n", *b);
}
