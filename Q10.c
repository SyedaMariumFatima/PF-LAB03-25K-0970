#include <stdio.h>

int main()
{
    int x;
    int y;
    printf("enter x:");
    scanf("%i", &x);
    printf("enter y:");
    scanf("%i", &y);
    int z = x;
    x = y;
    y = z;
    printf("x=%i y=%i", x, y);
}