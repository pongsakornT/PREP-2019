#include <stdio.h>
int main()
{
    float x,y,z;
    printf("number: ");
    scanf("%f %f %f", &x , &y, &z);
   if(x>y)
    {
       if(y>z)
       {
       printf("MAX %fMIN %f\n" , x,z);
       }
       else if(x>z)
       {
       printf("MAX %fMIN %f\n" , x,y);
       }
       else
       {
       printf("MAX %fMIN %f\n" , z,y);
       }
    }
    else if(y>z)
    {
        if(x>z)
        {
        printf("MAX %fMIN %f\n", y,z);
        }    
        else
        {
        printf("MAX %fMIN %f\n", y,x);
        }
    }
    else
        {
        printf("MAX %fMIN %f\n", z,x);
        }

    return 0;
}