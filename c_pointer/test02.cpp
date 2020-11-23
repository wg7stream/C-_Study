#include <stdio.h>

int main(){
	int ii = 10;
	
	int *pii = &ii;
	
	*pii = 20;

	printf("pii的值：%p\n", pii);
	printf("*pii的值：%d\n", *pii);
	printf("ii的值：%d\n", ii);

	*&ii = 30;
	printf("ii的值：%d\n", ii);

	return 0;
}
