//给定一个长度为n的数列，将这个数列从小到大的顺序排列。1<=n<=200
//输入格式：第一行为一个整数n，第二行包含n个整数，为待排序的数，每个整数的绝对值小于10000.
//输出格式：输出一行，按从小到大的顺序输出排序后的数列.
//样例输入：8 3 6 4 9     样例输出：3 4 6 8 9
#include <stdio.h>
#include <stdlib.h>
void Print(int *data,int n)
{
    int i ;
    for(i=0;i<n;i++)
    {
        printf("%d",data[i]);
        
    }
    printf("\n");
}

int Split(int *data,int pre,int rear)
{
    int value=data[pre];
    while(pre<rear)
    {
        while(data[rear]>=value && pre<rear) rear--;
        data[pre]=data[rear];
        while(data[pre]<value && pre<rear)  pre++;
        data[rear]=data[pre];
    }
    data[pre]=value;
    return pre;
}

//快速排序
void QuickSort(int *data,int pre,int rear)
{
    if(pre<rear)
    {
        int mid=Split(data,pre,rear);
        QuickSort(data, pre, mid-1);
        QuickSort(data, mid+1, rear);
    }
}

int main()
{
    int i;
    int n;
    int *data;
    scanf("%d",&n);
    data=(int *)malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&data[i]);
    }
    QuickSort(data, 0, n-1);
    Print(data,n);
    return 0;
}