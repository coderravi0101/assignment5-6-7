//WAP TO CALCULATE THE FACTORIAL OF THE NUMBER
#include<stdio.h>
int main()
{
    int i,n,fact,sum;
    peintf("inter any number");
    scanf("%d",n);
    for(i=1;i<n;i++)
    {
        sum=sum+fact*i;
    }
    printf("sum=%d",sum);
}

