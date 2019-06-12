#include<stdio.h>
int main()
{
    char x;
    printf("word: ");
    scanf("%c", &x);
    char y =x+32;
    printf("change to %c", y);
    return 0;
}