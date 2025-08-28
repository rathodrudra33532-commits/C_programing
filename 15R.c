#include<stdio.h>
int main()
{
    float f,g;
    printf("enter the temperature in fehrenheit:");
    scanf("%f",&f);
    g=(f-32)*5/9;
    printf("the temperature in celsius is:%.2f",g);
    return 0;
}
