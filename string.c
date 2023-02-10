#include <stdio.h>
#include <string.h>
int main(){

char name[7]="Meghan";
char name1[10]="Tom";
char name2[10];
strcpy(name2, name);

printf("%s\n",name2);
printf("%s\n",strcat(name,name1));
printf("%d\n",strcmp(name,name1));
printf("%d\n",strncmp(name,name1,2));
printf("%s\n", name);
printf("%lu\n",strlen(name));

return 0;
}