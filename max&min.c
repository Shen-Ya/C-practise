给出 n 个数，找出这 n 个数的最大值，最小值，和。
输入格式：第一行为整数 n，表示数的个数。第二行有 n 个数，为给定的 n 个数，每个数的绝对值都小于 10000。
输出格式：输出三行，每行一个整数。第一行表示这些数中的最大值，第二行表示这些数中的最小值，第三行表示这些数的和。
数据规模与约定：1 <= n <= 10000

#include <stdio.h>
#include <stblib.h>
#define MAXSIZE 10000

int main()
{
	int i;
	int n;
	int value;
	int max = -MAXSIZE;
	int min = MAXSIZE;
	int sum = 0;
	scanf("%d",&n);
	for(i = 0;i < n;i++)
	{
		scanf("%d",&value);
		if(value > max) max = value;
		if(value < min) min = value;
		sum += value;
	}
	printf("%d\n",max);
	printf("%d\n",min);
	printf("%d\n",sum);
	return 0;
}