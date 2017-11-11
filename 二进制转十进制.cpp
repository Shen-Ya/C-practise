// 输入一个 8 位二进制数，将其转换为十进制数输出。
#include <stdio.h>
using namespace std;

// 计算x的n次方
double power(double x,int n);

int main(){
	int value = 0;
	cout<<"Enter an 8 bit binary number:";
	for(int i = 7; i>= 0; i--){
		char ch;
		cin>>ch;
		if(ch == '1')
			value += static cast<int>(power(2,i));
	}
	cout<<"Decimal value is"<<value<<endl;
	return 0;
}

double power(double x, int n){
	double val = 1.0;
	while(n--)
		val *= x;
	return val;
}
