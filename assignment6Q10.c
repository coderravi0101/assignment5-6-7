#include<stdio.h>
int main()
{

    int n,rem=0,rev=0;
    printf("enter the number \n");
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%10;//logic
        rev=rev*10+rem;//logic
        n=n/10;//logic
    }
    printf("reverse number is %d ",rev);
}
