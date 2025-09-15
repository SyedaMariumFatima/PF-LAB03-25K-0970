
#include <stdio.h>

 int main() 
 {
    int len;
    int width;
    printf("enter length:");
    scanf("%i", &len);
    printf("enter width:");
    scanf("%d", &width);
    int area= len*width;
    int perimeter= 2*(len+width);
    printf("perimeter is: %i\n", perimeter); 
    printf("area is: %i", area);

 }
