#include<stdio.h>
int main()
{
    char x,y;
    printf("single(s) or married(m): ");
    scanf("%c", &x);
    switch(x)
    {
        case's':
        printf("Do you have aboyfriend/girlfriend(y/n).");
        scanf("%c", &y);
            if(y=='y'){
                printf("you are not alone");
                break;
            }
            else
            {
                printf("let me hug you");
                break;
            }
     
        case'm':
        printf("how many kids does he/she has.");
        scanf("%c", &y);
        if(y=='n')
        {
            printf("You can ask me for advices");
            
        }
        else
        {
            printf("gg");
          
        }
        break;
    default:
    printf("Thank you for your information");
    }
    return 0;
}