#include<stdio.h>
#include<locale.h>

void idade(int i); //Port�tipo da fun��o

int main(){
	setlocale(LC_ALL, "Portuguese");
	int n;
	
	printf("Qual a sua idade? ");
	scanf("%i", &n);
	
	idade(n); //Chamada da fun��o, passando n como argumento
	
	return(0);
}

void idade(int i){ //Fun��o para verificar se a pessoa � maior de idade ou n�o
	if(i >= 18){
		printf("Parab�ns! Voc� j� pode ser preso!");
	}
	else{
		printf("Parab�ns! Voc� ainda � feliz!");
	}
}
