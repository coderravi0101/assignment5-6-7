//WAP to calculate the first natural number
#include<stdio.h>
int main()
{

int i,n,sum=0;
printf("enter any number");
scanf("%d",&n);
for(i=1;i<n;i++)
{
    sum=sum+i;

}
printf("sum=%d",sum);
return 0;
}
