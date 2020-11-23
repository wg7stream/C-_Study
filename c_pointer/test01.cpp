#include <iostream>

// 地址是地址
// 指针是指针
// 不能混为一谈

using namespace std;

struct st_girl{
	int no;
	char name[21];
};

int main(){
	int ii = 0;
	char cc = 'A';
	double dd = 100.56;

	int *pii = 0;// 定义整数型指针并初始化

	struct st_girl stgirl;

	printf("变量ii的地址：%p\n", &ii);// %p表示按照十六进制输出数据，若输出数据不够8位数，则用0补齐
	printf("变量cc的地址：%p\n", &cc);
	printf("变量dd的地址：%p\n", &dd);

	printf("变量st_girl的地址是：%p\n", &stgirl);

	return 0;
}

