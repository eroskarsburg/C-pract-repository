#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL,"");
	
	//EX1
	
//	int vetor_idade[10];
//	int i=0
//	
//	for(i=0; i<10; i++){
//		printf("Digite o nome do índice %i:", i);
//		scanf("%i",&vetor_idade[i]);
//	}
//	
//	for(i=0; i<10; i++){
//		printf("Valor da idade do índice %i = %i", i, vetor_idade[i]);
//	}
	
	
	//EX1
	
//	int numeros_inteiros[5];
//	int i=0;
//	
//	for(i=0; i<5; i++){
//		printf("\nDigite um número no índice %i: ", (i+1));
//		scanf("%i", &numeros_inteiros[i]);
//	}
//	
//	for(i=0; i<5; i++){
//		printf("\nIdade do índice %i: %i", (i+1), numeros_inteiros[i]);
//	}
	
	
	
	//EX2
	
//	int numeros_positivos[10];
//	int i=0;
//	float somaValores=0;
//	float mediaValores;
//	
//	for(i=0; i<10; i++){
//		printf("Digite um número no índice %i: ", (i+1));
//		scanf("%i", &numeros_positivos[i]);
//		//
//		somaValores = somaValores + numeros_positivos[i];
//		mediaValores = somaValores / (i+1);
//	}
//	
//	printf("Média dos valores somados: %.2f", mediaValores);
	
	
	
	//EX3
	
//	int valores[100];
//	int i=0;
//	int tamanhoMaximo=100;
//	float somaValoresVetor=0;
//	
//	printf("\nDigite um valor negativo para realizar a soma dos valores digitados;\n");
//	
//	for(i=0; i<tamanhoMaximo; i++){
//		printf("\nDigite um número no índice %i: ", i);
//		scanf("%i", &valores[i]);
//		if(valores[i] < 0){
//			tamanhoMaximo = valores[i];
//			printf("\nSaindo...");
//		}
//		
//		somaValoresVetor = somaValoresVetor + valores[i];
//	}
//	
//	printf("\nSoma dos valores digitados: %.2f", somaValoresVetor);
	
	
	//EX4
	
	
//	int vetorNumerosPositivos[10];
//	int i=0;
//	int maiorNumero=0;
//	int menorNumero=10000;
//	
//	for(i=0; i<10; i++){
//		printf("\nDigite um numero no índice %i: ", i+1);
//		scanf("%i", &vetorNumerosPositivos[i]);
//		if(vetorNumerosPositivos[i] > maiorNumero){
//			maiorNumero = vetorNumerosPositivos[i];
//		}
//		if(vetorNumerosPositivos[i] < menorNumero){
//			menorNumero = vetorNumerosPositivos[i];
//		}
//	}
//	
//	printf("\nMaior valor é %i e o menor numero é %i.", maiorNumero, menorNumero);
	
	//EX5
	
//	int vetorNumerosInteiros[10];
//	int i=0;
//	int maiorNumero=0;
//	int indiceMaiorNumero=0;
//	
//	for(i=0; i<10; i++){
//		printf("\nDigite um numero no índice %i: ", i+1);
//		scanf("%i", &vetorNumerosInteiros[i]);
//		if(vetorNumerosInteiros[i] > maiorNumero){
//			maiorNumero = vetorNumerosInteiros[i];
//			indiceMaiorNumero = i;
//		}
//	}
//	
//	for(i=0; i<10; i++){
//		printf("\nValor do índice %i: %i", i+1, vetorNumerosInteiros[i]);
//	}
//	
//	printf("\nMaior valor é %i no índice %i.", maiorNumero, indiceMaiorNumero+1);
	
	
	//EX6
	
	
//	int n=6;
//	int valoresInteiros[n];
//	int i=0;
//	
//	for(i=0; i<6; i++){
//		printf("Digite um número: ");
//		scanf("%i", &valoresInteiros[i]);
//	}
//	
//	for(i=n-1; i>=0; i--){
//		printf("\nReverso: %i", valoresInteiros[i]);
//	}
	
	
	//EX7
	
	
//	int i=0, j=0, cont=0;
//	int vetorNumerosInteiros[10];
//	
//	for(i=0; i<10; i++){
//		printf("Digite um número: ");
//		scanf("%i", &vetorNumerosInteiros[i]);
//	}
//	
//	for(i=0; i<10; i++){
//		for(j=0; j<10; j++){
//			if(vetorNumerosInteiros[i] == vetorNumerosInteiros[j] && i != j){
//				vetorNumerosInteiros[i] = 0;
//			}
//		}
//		printf("\n%i", vetorNumerosInteiros[i]);
//	}
	
	
	//EX8
	
	
	int vetor1[4], vetor2[4], vetorIntersecao[4];
	int i, j, k;
	
	for(i=0; i<4; i++){
		printf("Vetor 1: Digite um número na posição %i: ", i);
		scanf("%i",&vetor1[i]);
	}
	
	printf("\n");
	
	for(i=0; i<4; i++){
		printf("Vetor 2: Digite um número na posição %i: ", i);
		scanf("%i",&vetor2[i]);
	}
	
	for(k=0; k<4; k++){
		for(i=0; i<4; i++){
			for(j=0; j<4; j++){
				if(vetor1[i] == vetor2[j]){
					vetorIntersecao[k] = vetor1[i];
				}
			}
		}
	}
	printf("\nVetor 1: ");
	for(i=0; i<4; i++){
		printf(" %i", vetor1[i]);
	}
	printf("\nVetor 2: ");
	for(i=0; i<4; i++){
		printf(" %i", vetor2[i]);
	}
	printf("\nVetor Interseção: ");
	for(k=0; k<4; k++){
		printf(" %i", vetorIntersecao[k]);
	}
		
	
	return 0;
}



















