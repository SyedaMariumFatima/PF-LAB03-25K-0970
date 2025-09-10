#include <stdio.h>

int main () 
{
     char name[100];
     int age;
   printf("enter username:");
   scanf("%s", &name);
   printf("enter age:");
   scanf("%d", &age);
   printf("your name is \"%s\".\n", name);
   printf("Your are \"%d\" years old.", age);
}