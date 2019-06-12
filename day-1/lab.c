#include <stdio.h>
int main()
{
    float x,y;
    printf("price: ");
    scanf("%f", &x);
    printf("discount(0-100): ");
    scanf("%f", &y);
    float sum = x-x*y/100;
    printf("you need to pay %.2f\n" , sum);
    return 0;
}