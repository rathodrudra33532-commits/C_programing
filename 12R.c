#include<stdio.h>
int main()
{
    float i,k;
    printf("weight in kilograms:");
    scanf("%f",&i);
    k = i * 1000;
    printf("weight in grams:%.2f\n",k);
    return 0;


}
