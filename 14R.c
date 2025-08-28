#include<stdio.h>
int main()
{
    float e,g;
    printf("enter the temperature in celsius:");
    scanf("%f",&e);
    g = (e*9/5)+32;
    printf("temperature in fahrenheit is :%.2f\n",g);
    return 0;

}
