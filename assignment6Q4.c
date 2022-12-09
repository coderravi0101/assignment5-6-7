//WAP TO CALCULATE THE SUM OF SQUARE OFFIRST N NATURAL NUMBER
#include<stdio.h>
int main()
{
    int i,n,sum=0,;
    printf("enter any number");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        sum=sum+i*i;
    }
    printf("sum=%d",sum);
}
