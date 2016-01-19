杨辉三角形又称Pascal三角形，它的第 i+1 行是 (a+b)^i 的展开式系数。
它的一个重要性质是：三角形的每个数字等于它两肩上的数字相加。
下面给出了杨辉三角形的前 4 行：
      1
    1   1
  1   2   1
1   3   3   1 
给出 n，输出它的前 n 行。
输出格式：输出杨辉三角形的前 n 行。每一行从这一行的第一个数开始依次输出，中间使用一个空格分隔。
数据规模与约定：1 <= n <= 34

#include <stdio.h>
#define MAXN 40
int n;
int a[MAXN][MAXN];
int main()
{
	int i,j;
	scanf("%d",&n);
	a[0][0] = 1;
	for (i = 0; i < n; i++)
	{
		a[1][0] = a[i][j] = 1;
		for(j = 1; j < i; ++j)
			a[i][j] = a[i-1][j-1] + a[i-1][j];
	}
	for(i = 0; i < n; ++i)
	{
		for(j = 0;j <=i; ++i)
			printf("%d", a[i][j]);
		printf("\n");
	}
	return 0;
}