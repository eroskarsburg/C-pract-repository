#include <iostream>
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	setlocale( LC_ALL, "" );
	
//	int idade, cont=0, somadorIdade=0, quantIdade;
//	float media;
//	
//	printf("\nQuantas idades deseja calcular? ");
//	scanf("%i", &quantIdade);
//	fflush(stdin);
//	
//	while(cont < quantIdade){
//		printf("\nDigite sua idade:");
//		scanf("%i", &idade);
//		fflush(stdin);
//		somadorIdade = somadorIdade + idade;
//		
//		cont=cont+1;
//	}
//	
//	media = somadorIdade/quantIdade;
//	printf("\nA média de %i idade(s) é %.2f", quantIdade, media);


	//EXERCÍCIOS
	
//	printf("\nE1 - Porque devemos usar estruturas de repetição ?\n");
//	printf("Para evitarmos, geralmente, laços de repetição.");
//	printf("\nE2 - O que é uma variável contadora ?\n");
//	printf("É uma variável que serve para realizar a contabilidade de algo inserido no código.");
//	printf("\nE3 - O que é uma variável acumuladora ?\n");
//	printf("É uma variável que vai acumulando diversos valores ao longo do código.");
//	printf("\nE4 - O que são repetições aninhadas e quando usar ?\n");
//	printf("Repetições aninhadas é quando coloca-se um WHILE dentro de outro WHILE.\n");
//	printf("Para códigos pequenos, pode-se utilizar esse tipo de estrutura, porém não é aconselhável.");
//	
//	//PRÁTICA
//	
//	printf("\nE1 - Escrever um algoritmo que lê 5 valores para A, um de cada vez, e conta quantos destes valores são negativos, escrevendo esta informação na tela.\n");
//	
//	int cont=0, contNegativo=0, contPositivo=0;
//	float numeroAl;
//	
//	printf("\nDigite 5 números quaisquer:\n");
//	while(cont<5){
//		printf("\n>");
//		scanf("%f",&numeroAl);
//		fflush(stdin);
//		if(numeroAl < 0){
//			contNegativo++;
//		} else if(numeroAl >= 0){
//			contPositivo++;
//		}
//		cont++;
//	}
//	
//	printf("\nNúmeros positivos: %i\n", contPositivo);
//	printf("\nNúmeros negativos: %i\n", contNegativo);
	
//	
//	printf("\nE2 - Escrever um algoritmo que gera e escreve os números ímpares entre 100 e 200.\n");
//	
//	int cont=0, contImpar=0, cont2=101;
//	
////	for(cont2; cont2<200; cont2=cont2+2){
////		printf("\nNúmero ímpar: %i", cont2);
////	}
//	
//	while(cont < 200){
//		contImpar = cont + 1;
//		if(contImpar%2==1){
//			printf("\nNúmero ímpar: %i", contImpar);
//			cont++;
//		}else{
//			cont++;
//		}
//	}
	
//	printf("\nE3 - Escrever um algoritmo que lê 10 valores, um de cada vez, e conta quantos deles estão no intervalo (10 a 20) e quantos deles estão fora deste intervalo, escrevendo esta informação na tela.\n");
//
//	
//	int cont=0, contNum=0, contFora=0;
//	float numero;
//	
//	printf("\nEscreva um número");
//	while(cont<10){
//		printf("\n>");
//		scanf("%f",&numero);
//		fflush(stdin);
//		if(numero>=10 && numero<=20){
//			contNum++;
//		} else {
//			contFora++;
//		}
//		cont++;
//	}
//	printf("\nQuantidade dentro do intervalo: %i\n", contNum);
//	printf("\nQuantidade fora do intervalo: %i\n", contFora);
	
//	printf("\nE4 - Escrever um algoritmo que solicite ao usuário o seguinte menu:\n");
//	
//	int opt;
//	
//	while(1){
//		printf("\n-------------\n1. Cadastrar Produto\n2. Remover Produto\n3. Listar Produto\n4. Sair\n-------------\n");
//		printf("\n>");
//		scanf("%i",&opt);
//		if(opt==1){
//			printf("\nCadastrou Produto.\n");
//		} else if(opt==2){
//			printf("\nRemoveu Produto.\n");
//		} else if(opt==3){
//			printf("\nListou Produto.\n");
//		} else if(opt==4){
//			printf("\nSaindo do Programa...\n");
//			break;
//		} else {
//			printf("\nOpção inválida.\n");
//		}
//	}
	
//	printf("\nE5 - \n");
//	
//	int cont=0;
//	float numPositivo, somaNumPositivo;
//	
//	printf("\nInsira um número:\n");
//	
//	while(1){
//		printf("\n>");
//		scanf("%f",&numPositivo);
//		fflush(stdin);
//		if(numPositivo >= 0){
//			somaNumPositivo = somaNumPositivo + numPositivo;
//			cont++;
//		} else {
//			printf("\nSaindo...\n");
//			printf("\nQtde de números digitados: %i\n", cont);
//			printf("Soma dos números: %.2f\n", somaNumPositivo);
//			break;
//		}
//	}
	
//	printf("\nE6 - \n");
//	
//	int cont=0, cont2=0, numFilhos;
//	float salarioS, maiorSalario, mediaSalario, mediaTotalSalario, mediaFilhos=0, somaFilhos;
//	while(1){
//		printf("\nInsira seu salário:");
//		printf("\n>");
//		scanf("%f",&salarioS);
//		fflush(stdin);
//		if(salarioS >= 0){
//			cont2++;
//			mediaSalario = mediaSalario + salarioS;
//			mediaTotalSalario = (mediaSalario / cont2);
//			
//			printf("\nInsira a quantidade de filhos:");
//			printf("\n>");
//			scanf("%i",&numFilhos);
//			fflush(stdin);
//			if(salarioS > maiorSalario){
//				maiorSalario = salarioS;
//			}
//			if(numFilhos >= 0){
//				cont++;
//				somaFilhos = somaFilhos + numFilhos;
//				mediaFilhos = (somaFilhos / cont);
//			} else {
//				printf("\nQuantidade incorreta.");
//				printf("\nSaindo...\n");
//				break;
//			}
//		} else {
//			printf("\nSaindo...\n");
//			printf("\nMédia de Salário: %.2f\n", mediaTotalSalario);
//			printf("\nMédia de Filhos: %.1f\n", mediaFilhos);
//			printf("\nMaior Salário: %.2f\n", maiorSalario);
//			break;
//		}
//	}
	
	printf("\nE7 - \n");
	
	int numTabuada, cont=0, valorTabuada;
	
	while(1){
		numTabuada=0;
		valorTabuada=0;
		cont=0;
		printf("\nEscolha qual tabuada desejas:\n");
		printf("\nPara sair do programa, digite -1.\n");
		printf("> ");
		scanf("%i",&numTabuada);
		fflush(stdin);
		if(numTabuada >= 0){
			printf("\n");
			while(cont < 10){
				cont++;
				valorTabuada = numTabuada*cont;
				printf("%i x %i = %i\n", numTabuada, cont, valorTabuada);
			}
		} else {
			printf("\nSaindo...\n");
			break;
		}
	}
	
	return 0;
}
















