#include <stdio.h>

int main(){
	int c;

	printf("Coloque a temperatura em graus celsius \n");
	    scanf("%d",&c);

	 
	   printf("Sua temperatura em fahrenheit: %f\n",(c * 1.8)+ 32);


	return 0;
}