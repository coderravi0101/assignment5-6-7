#include<stdio.h>
int main()
{
    int i,n,fib1=1,fib2=1,fib3,count,num,x;
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
    if(x==fib3)
        printf("yes it is fibonacci ");
        fib1=fib2;
        fib2=fib3;
        }
    printf("not fibonacci");
}
