#include <stdio.h>

int main (){

int aluno[40]= {1,3,5,6,8,9,7,5,3,6,1,3,5,6,8,9,7,5,3,6,1,3,5,6,8,9,7,5,3,6,1,3,5,6,8,9,7,5,3,6};
//notas -> 1,2,3,4,5,6,7,8,9,10
int freqNotas[10]={0};

for (int i=0; i<40; i++){

	freqNotas[aluno[i]-1]++;
}

  
for (int i=0; i<10; i++){
	int A = i+1;

printf("nota %d contagem: %d votos\n ",A,freqNotas[i]);
//printf("nota %d contagem: %d votos\n%d\n",freqNotas[1]);
}

	return 0;
}