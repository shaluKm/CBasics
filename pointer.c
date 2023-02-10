#include <stdio.h>
#include <string.h>
int main(){


int age;
int *address = &age;

char name[7]="Meghan";

*address = 37;


printf("%c\n", *name);

printf("%p\n", address);
printf("%p\n", address+1);
printf("%u\n", *address);
printf("%d\n", age);






return 0;
}