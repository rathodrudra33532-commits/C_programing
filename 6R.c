#include<stdio.h>
int main()
{
    int k,l;

    printf("enter the time in hour:");

    scanf("%d",&k);

    l = k * 60;

    printf("%d time in min:%d\n",k,l);
    return 0;
}
