#include <stdio.h>

// dest: 目标字符串， 不需要初始化，在STRCPY函数中有初始化代码。
// dest：目标字符串dest占用内存的大小。
// src：原字符串
// 返回值：目标字符串dest的地址

//                       size_t在不同平台下的取值不同 无符号整型  在32位架构上是4字节 64位架构是8字节
//                       size_t用作sizeof操作符的返回类型，同时也是很多函数的参数类型，包括malloc、strlen等
char *STRCPY(char* dest, const size_t destlen, const char* src){
	if (dest == 0) return 0;
	memset(dest, 0, destlen);// 初始化dest
	if (src == 0) return dest;

	if (strlen(src) > destlen - 1) strncpy(dest, src, destlen - 1);
	else strcpy(dest, src);

	return dest; 
}
