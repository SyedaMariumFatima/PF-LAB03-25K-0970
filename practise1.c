#include <stdio.h>

int main() {
   int page, hun=100, fivhun=500;
   printf("enter number of pages you want to buy?");
   scanf("%d", &page);
   while(page>hun)hun+=100;
   while(page>fivhun)fivhun+=500;
   
   float single_price=0.1*page, hun_price=0.055*hun, fivhun_price=0.04*fivhun;
   float min; int pagebought;
   if(fivhun_price<hun_price  && fivhun_price<single_price)
   {
       min=fivhun_price;
       pagebought=fivhun;
   }
   else if (hun_price<single_price)
   {
     min=hun_price;
     pagebought=hun;
   }
   else 
   {
       min=single_price;
       pagebought=page;
   }
   
   
   printf("your total cost is %f\n", min);
   printf("You bought %d pages for minimum price", pagebought);
    return 0;
}
