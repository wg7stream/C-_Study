// 指针比下标有时更有效率

#define SIZE 50;
int x[SIZE];
int y[SIZE];
int i;
int *p1, *p2;

/*实现数组的复制*/

// 下标版本
{
	for (i = 0; i < SIZE; i ++){
		x[i] = y[i];
	}
}

// 指针方案
{
	for (p1 = x, p2 = y; p1 - x < SIZE;){
		*p1 ++ = *p2 ++;
	}
}

// 重新使用计数器
{
	for (i = 0, p1 = x, p2 = y; i < SIZE; i ++){
		*p1 ++ = *p2 ++;
	}
}

// 寄存器指针变量
{
	register int *p1, *p2;
	register int i;

	for (i = 0, p1 = x, p2 = y; i < SIZE, i ++){
		*p1 ++ = *p2 ++;
	} 
}

// 消除计数器 效率高
{
	register int *p1, *p2;

	for (p1 = x, p2 = y; p1 < &x[SIZE];){
		*p1 ++ = *p2 ++;
	}
}












