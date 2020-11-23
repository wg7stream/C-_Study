/*
	在C语言中，数组占用的内存空间是连续的，数组名是数组元素的首地址，也是数组的地址
	是C语言提供的一种方便
*/

#include <stdio.h>
#include <string.h>

int main(){
	char name[51];
	strcpy(name, "visual object tracking");

	printf("%p\n", name);
	printf("%p\n", &name);
	printf("%p\n", &name[0]);

	printf("%s\n", name);
	printf("%s\n", &name);
	printf("%s\n", &name[0]);
}
