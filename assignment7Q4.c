#include<stdio.h>
int main()
{
    int x,y,i,hcf,lcm;
    printf(" enter two number   ");
    scanf("%d%d",&x,&y);
    for(i=1;i<=x*y;i++)
    {
        if((i%x==0)&&(i%y==0))
        {
            printf(" Lcm of  %d  and %d  is %d  ",x,y,i);
        break;
        hcf=(x*y/lcm);
        printf("hcf is %d",hcf);
    }
    }
    return 0;
}

