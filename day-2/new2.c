#include <stdio.h>
int main()
{
    int x,y;
    char h;
    printf("number: ");
    scanf("%d %d", &x ,&y);
    printf("operator: ");
    scanf(" %c" ,&h);
    if(h=='+')
    {
        printf("%d\n",x+y);
    }
    else if (h=='-')
    {
        printf("%d\n",x-y);
    }
    else if (h=='*')
    {
        printf("%d\n",x*y);
    }
    else if (h=='/')
    {
        printf("%d\n",x/y);
    }    
    return 0;
}