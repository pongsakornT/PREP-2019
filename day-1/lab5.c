#include<stdio.h>
int main()
{
    float x,y,z;
    printf("assignment: ");
    scanf("%f" ,&x);
    printf("midterm: ");
    scanf("%f" ,&y);
    printf("final: ");
    scanf("%f" ,&z);
    float sum = x*0.1+y*0.4+z*0.5;
    printf("overall score:%.2f\n", sum);
    return 0;
}