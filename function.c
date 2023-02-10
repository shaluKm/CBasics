#include <stdio.h>
int max(int a, int b);
int main(){
	int a =2,b=3;
	int c= max(a,b);

	printf("%d\n", c);
	return 0;
}
int max(int a, int b)
{
	if (a>b)
		return a;
	else return b;
}
