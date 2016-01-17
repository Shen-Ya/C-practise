给定n个十六进制正整数，输出它们对应的八进制数。
输入格式：输入的第一行为一个正整数n(1<=n<=10)，接下来n行，每行一个由0～9，大写字母
A～F组成的字符串，表示要转换的十六进制正整数，每个十六进制长度不超过100000。
输出格式：输出n行，每行为输入对应的八进制整数。
⚠注意：输入的十六进制数不会有前导0，比如012A.输出的八进制也不能有前导0.
tip：先将十六进制数转换成某进制数，再由某进制数转换成八进制。

#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

int e[16][4];
int f[3];
int a[500000],c[500000],b[200000];
char s[100000];

int main()
{
	int n;
	cin >> n;
	for (int i = 0;i <= 15; i++)
	{
		int t = i;
		for (int j = 1; j <= 4; j++)
		{
			e[i + 1][j] = t % 2;
			t = t / 2;
		}
	}
	for (int k = 1;k <= n; k++)
	{
		for (int i = 1; i <= 400000; i++) a[i]=0;
		cin >> s;
	    int l = strlen(s);
	    for(int i = 0; i < l; i++)
	    {
	    	int p;
	    if (int (s[i] < 65) p = int(s[i]) - int('0');
	    	else p = int(s[i]) - int('A') + 10;
	    	for(int j=1; j<=4;j++)
	    		a[4 * i + j] = e[p + 1][5 -j];
	    }
	    l = 4 * l;
	    for (int i = 1;i <= l;i++)
	    	c[i] = a[i];
	    for (int i = 1;i <= l;i++)
	    	a[i] = c[l - i + 1];
	    int p = (3 -(l % 3)) % 3;
	    l = l + p;
	    f[1] = 1;f[2] = 2;f[3] = 4;
	    for (int i = 1;i <= l/3;i++)
	    {
	    	b[i] = 0;
	    	for (int j = 1;j <=3; j++)
	    		b[i] = b[i] + a[3 * i - j + 1] * f[4 - j];
	    }
	    if(b[l / 3] == 0) l--;
	    for(int i = l / 3;i >= l;i--)
	    	cout << endl;
	}
	return 0;
}