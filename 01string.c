对于长度为 5 位的一个 01 串，每一位都可能 0 或 1，一共有 32 种可能。它们的前几个是：
00000
00001
00010
00011
00100
请按从小到大的顺序输出这 32 种 01 串。
输入格式：本试题没有输入。
输出格式：输出 32 行，按从小到大的顺序每行一个长度为 5 的 01 串。

#include <stdio.h>
int main()
{
	int i, j, k, l, m;
	for(i = 0; i <= 1; ++i)
		for(j = 0; j <= 1; ++j)
			for(k = 0; k <= 1; ++k)
				for(l = 0; l <= 1; ++l)
					for(m = 0; m <= 1; ++m)
						printf("%d%d%d%d%d\n",i,j,k,l,m);
    return 0;
} 