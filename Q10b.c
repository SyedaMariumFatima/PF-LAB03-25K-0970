#include <stdio.h>
int main()
{
    int x;
    int y;
    printf("enter x:");
    scanf("%i", &x);
    printf("enter y:");
    scanf("%i", &y);
    x = x + y;
    y = x - y;
    x = x - y;
    printf("x=%i y=%i", x, y);
}