#include<stdio.h>
int main()
{
    int i,n,a=1,b=1,c;
    printf("  enter the number  ");
   scanf("%d",&n);

for(i=2;i<n;i++)
{
    c=a+b;
    a=b;
    b=c;
    printf("%d\n",c);
}
return 0;
}
