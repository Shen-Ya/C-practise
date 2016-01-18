十六进制数是在程序设计时经常要使用到的一种整数的表示方式。它有0，1，2，3，4，5，6，7，8，9，A，B,C，D，E，F共
16个符号，分别表示十进制数的0～15。十六进制的计数方法是满16进1，所以十进制数16在十六进制中时10，而十进制的17在
十六进制中是11，以此类推，十进制的30在十六进制中是1E。
给出一个非负整数，将它表示成十六进制的形式。
输入格式：输出包含一个非负整数 a ，表示要转换的数。 0<=a<=2147483647
输出格式：输出这个整数的16进制表示
提示：（1）按除16取余倒数（也可用格式输出）
（2）可以使用递归来处理，递归参数为要转换的数字，如果该数字大于等于16，则将递归处理该数整除16的值，然后再输出最后一位。

#include <stdio.h>
#include <stdlib.h>
char data[] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};

//输出
void Print(char *num,int n)
{
	int i;
	for(i = n - 1;i >= 0;i--)
		printf("%c",num[i]);
	printf("\0");
	printf("\n");
}

//将十六进制数转换为十进制数
int Transform(char *num,long long value)
{
	int n = 0;
	while(value >= 16)
	{
		num[n++] = data[value % 16];
		value/=16;
	}
	num[n++] = data[value % 16];
	return n;
}

int main()
{
	long long value;
	char num[10];
	int n;
	scanf(" %I64d ", & value);
	n = Transform(num,value);
	Printf(num,n);
	return 0;
}