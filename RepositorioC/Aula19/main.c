#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int poltronas[1][10];
	float valor[1][10];
	float maior=0;
	int i, j;
	
	
	for(i=0; i<10; i++){
		printf("\nNumero da Poltrona: ");
		scanf("%i", &poltronas[0][i]);
		fflush(stdin);
		
		while(poltronas[0][i] < 1 || poltronas[0][i] > 30){
			printf("\nValor incorreto.");
			printf("\nDigite a Poltrona novamente: ");
			scanf("%i", &poltronas[0][i]);
			fflush(stdin);
		}
		
		printf("\nPreco da Poltrona: ");
		scanf("%f", &valor[0][i]);
		fflush(stdin);
		
		if(valor[0][i] > maior){
			maior = valor[0][i];
		}
		
		while(valor[0][i] < 1 || valor[0][i] > 1000){
			printf("\nValor incorreto.");
			printf("\nDigite o preço novamente: ");
			scanf("%f", &valor[0][i]);
			fflush(stdin);
		}
	}
	
	printf("-----Poltronas-----");
	for(i=0; i<10; i++){
		printf("\nPoltrona %i --> ", poltronas[0][i]);
		printf("Preco: %.2f", valor[0][i]);
	}
	printf("\nMaior valor: %.2f", maior);
	
	return 0;
}
