#include<stdio.h>
int main()
{
    int i,n,fib1=1,fib2=1,fib3,count,num,x;//flag=0;
    printf("   @. enter the number\n  ");
    scanf("%d",&num);//ab value ko scan kr ke aage loop ko chaliye
      printf("%d\n",fib1);
      printf("%d\n",fib2);
       count=2;
        while(count<num)
        {
        fib3=fib1+fib2;
        count++;
        if(x==fib3)
           // flag=1;
            printf("yes fibonacci is present............");
        fib1=fib2;
        fib2=fib3;
        }
       // printf("fibonacci is not present...........");
}


