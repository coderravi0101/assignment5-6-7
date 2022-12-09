//WAP TO CALCULATE SUM OF FIRST N EVEN NATURAL NUMBER
#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("enter any number");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        sum=sum+2*i;
    }
        printf("sum=%d",sum);

}
