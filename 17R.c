#include<stdio.h>
int main()
{
    int a,b,area,perimeter;

    printf("enter length and width: ");
    scanf("%d%d",&a,&b);
    area = a*b;
    perimeter = 2*(a+b);
    printf("area = %d\nperimeter = %d\n", area, perimeter);
    return 0;

}
