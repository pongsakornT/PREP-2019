#include <stdio.h>
int main()
{
    int x,y;
    printf("number: ");
    scanf("%d %d", &x ,&y);
    if(x>y)
    printf("%d is greater\n", x);
    else
    printf("%d is greater\n", y);   
    return 0;
}