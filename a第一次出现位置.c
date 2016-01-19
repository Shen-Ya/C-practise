给出一个包含 n 个整数的数列，问整数 a 在数列中的第一次出现是第几个。
输出格式：第一行包含一个整数 n；第二行包含 n 个非负整数，为给定的数列，数列中的每个数都不大于10000；
第三行包含一个整数 a，为待查找的数。
输出格式：如果 a 在数列中出现了，输出她第一次出现的位置（位置从 1 开始编码），否则输出 －1。
数据规模与约定：1 <= n <= 1000

#include <stdio.h>
#define MAXN 10001
int n, a, ans;
int s[MAXN];
int main()
{
	int i;
	scanf("%d",&n);
	for (i = 0;i < n; ++i)
		scanf("%d",&s[i]);
	scanf("%d",&a);
	ans = -1;
	for (i = 0;i < n; ++i)
	{
		if(s[i] == a)
		{
			ans = i + 1;
			break;
		}
	}
	printf("%d",ans);
	return 0;
}