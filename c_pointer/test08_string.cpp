/*
	字符串常量的地址
	字符串实际上就是以‘\0’结束的char类型的一维数组
	字符串常量和数组名一样，被编译器当成地址来对待，它的值就是字符串的首地址
*/

#include <stdio.h>
#include <string.h>

int main(){
	char *p = "www.baidu.com";// 字符串常量
	

	printf("%s\n", p);
	printf("%s\n", p + 4);
	printf("%s\n", "www.baidu.com");

	return 0;
}
