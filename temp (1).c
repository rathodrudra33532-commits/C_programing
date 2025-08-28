#include<stdio.h>
int main()
{
    float s,d;
    printf("enter the temperature in fehrenheit:");
    scanf("%f",&s);
    d=(s-32)*5/9;
    printf("the temperature in celsius is:%.2f",d);
    return 0;
}
