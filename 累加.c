//输入n, a, 求sn=a+aa+aaa+……+a…a(n个)
#include <stdio.h>
int main()
{
	int a,n,s=0,t=0;
	scanf("%d,%d",&a,&n);
	for(i=1;i<=n;i++)
	{
		s=s+a;
		a=a*10+a;
	}
	printf("%d\n",s);
	return 0;
}