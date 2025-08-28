#include<stdio.h>
int main()
{
    float a,j,k;
    printf("Enter the bytes:");
    scanf("%f",&a);
    j = a / 1024;
    k = j / 1024;
    printf("kb:%f\n",j);
    printf("mb:%f\n",k);
    return 0;
}
