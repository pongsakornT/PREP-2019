#include <stdio.h>
int main()
{
    float x,y;
    printf("base: ");
    scanf("%f" , &x);
    printf("height: ");
    scanf("%f" , &y);
    float sum = 0.5*x*y;
    printf("Area is %.2f\n" , sum);
    return 0;
}