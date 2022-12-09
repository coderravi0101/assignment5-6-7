#include<stdio.h>
int main()
{
    int i,n,fib1=1,fib2=1,fib3,count,num;
    printf("   @. enter the number\n  ");
    scanf("%d",&num);//ab value ko scan kr ke aage loop ko chaliyega
       printf("first %d fibonacci series are ....\n",num);
       printf("%d\n",fib1);
       printf("%d\n",fib2);
       count=2;
        while(count<num)
        {
        fib3=fib1+fib2;
        count++;
        printf("%d\n",fib3);
        fib1=fib2;
        fib2=fib3;
        }
}
