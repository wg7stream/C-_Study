/*
	空指针
	没有赋值的指针变量（没有指向内存变量的地址）
	对空指针操作会造成程序的Core dump（段错误）
*/



#include <iostream>

int main(){
	int *pi = 0;

	printf("pi的值是 %p\n", pi);

	*pi = 10;// 试图对空指针进行赋值操作，必将引起程序的崩溃

	return 0;
}
