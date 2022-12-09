#include<stdio.h>
int main()
{
    int n,i,c;
    printf("enter any numbe");
    scanf("%d",&n);
    for(i=1;i<11;i++)
    {
        c=n*i;
        printf("%d*%d=%d\n",n,i,c);
    }

    }
