利用字母可以组成一些美丽的图案，下面给出了一个例子：
ABCDEFG
BABCDEF
CBABCDE
DCBABCD
EDCBABC
这是一个 5 行 7 列的图形，请找出这个图形的规律，并输出一个 n 行 m 列的图形。
输入格式：输出一行，包含两个整数 n 和 m，分别表示你要输出图形的行和列数。
输出格式：输出 n 行，每个 m 个字符，为你的图形。
数据规模与约定：1 <= n,m <=26

#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 26

//输出
void Print(char matrix[MAXSIZE][MAXSIZE],int n,int m)
{
	int i,j;
	for(i = 0;i < n;i++)
	{
		for(j = 0;j < m;j++)
		{
			printf("%c",matrix[i][j]);
		}
		printf("\n");
	}
}

// 实现字母图形
void Drawing(int n,int m)
{
	int i,j;
	int point = 0;
	char str;
	char matrix[MAXSIZE][MAXSIZE];
	for(i = 0;i < n;i++)
	{
		str = 'A';
		for(j = i; j < m; j++)
		{
			matrix[i][j] = str++;
		}
		str = 'A';
		for(j = i - 1; j >= 0; j--)
		{
			matrix[i][j] = ++str;
		}
	}
	Print(matrix, n, m);
}
int main()
{
	int n,m;
	scanf(" %d %d ", &n, &m);
	Drawing(n,m);
	return 0;
}