#include<stdio.h>
int main()
{
    int r,b;
    printf("enter the gross sales:");
    scanf("%d",&r);
    b = r - (r*0.1);
    printf("the net sales is :%d",b);
    return 0;
}
