#include <stdio.h>

int main(){
	int numero1, numero2 ;

	printf("Coloque o primeiro nuemro \n" );

      scanf("%d",&numero1);

      printf("Coloque o segundo nuemro \n" );

      scanf("%d",&numero2);


 
      if (numero1>numero2)
      {
      	printf("e maior \n");
      }
      if (numero1<numero2){
      
      printf("E menor \n ");
          
      }
      else{
      	printf("E igual \n");
      }




	return 0;
}