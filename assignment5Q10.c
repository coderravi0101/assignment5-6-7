#include<stdio.h>
int main()
{
    int i,n,k;
    printf("enter any number");
    scanf("%d",&n);
    for(i=1;i<11;i++)
    {
        k=n*i;
        printf("%d*%d=%d\n",n,i,k);
    }
}

