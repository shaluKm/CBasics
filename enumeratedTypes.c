#include <stdio.h>


int main(){

	typedef enum{
		win ,  //indexed as 0
		loose  //indexed as 1 

	} RESULT ; //new data type in uppercase by convention
	RESULT Gameresult = win;

	if(Gameresult==1)
	
		printf("you win\n");
		else printf("you loose\n");
	

	return 0;
}