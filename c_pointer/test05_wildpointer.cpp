/*
	野指针
	指针指向的内存已释放，但指针的值不会被清零，对野指针操作的结果不可预知
*/

#include <iostream>

int main(){
/*
	int *pi = (int *)malloc(4);

	printf("pi的值是 %p\n", pi);

	free(pi);// 释放

	*pi = 10;// 试图对空指针进行赋值操作，可能引起程序的崩溃
	// 虽然被释放了，但仍然能被赋值
	printf("*pi的值是 %d\n", *pi); 
*/
	FILE *fp = fopen("./aaa.txt", "w");

	printf("fp的值时候 %p\n", fp);

	fclose(fp);

	printf("fp的值是 %p\n", fp);

	fclose(fp);

	return 0;
}
