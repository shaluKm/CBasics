#include <stdio.h>
int max(int a, int b);
int c =30; //global variable 
int main(){
	int a =2,b=3;
	int c= max(a,b);

	printf("%d\n", c);
	return 0;
}
int max(int a, int b)
{
	printf("%d\n", c); //function accessing global variable
	if (a>b)
		return a;
	else return b;
}