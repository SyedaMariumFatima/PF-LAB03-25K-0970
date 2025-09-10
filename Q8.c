#include <stdio.h>
    int main() 
    {
        printf("enter Biology marks:"); 
        int bio;
        scanf("%d", &bio);
        printf("enter Chemistry marks:");
        int chem;
        scanf("%d", &chem);
        printf("enter Physics marks:");
        int phy;
        scanf("%d", &phy);
        int total= bio+chem+phy;
        float percentage= (total/300.0)*100;
        printf("your percentage is: %f", percentage);
    }