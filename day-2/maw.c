#include <stdio.h>
int main()
{
        float x,y,z;
    printf("number: ");
    scanf("%f %f %f", &x , &y, &z);
   if(x==y)
    {
       if(y==z)
       {
           printf("all same");
       }
       else
       {
            printf("neither");
       } 
    }
    else if(y==z)
    {
        printf("neither");
    }
    else
    {
        printf("all different");
    }
    return 0;
}