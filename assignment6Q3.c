//wap to print the sum of odd natural number
#include<stdio.h>
int main()
{
    int i,n,sum=1;
    printf("enter any number");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        sum=sum+i;
    }
    printf("sum=%d",sum);
}
