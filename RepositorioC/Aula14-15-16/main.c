#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int Soma(int a, int b){
	return a + b;
}

void MostrarMenu(){
	printf("\n1. Cadastrar");
	printf("\n2. Remover");
	printf("\n3. Alterar");
	printf("\n4. Sair");
}

int RecebeIdadeNadador(int idade){
	setlocale(LC_ALL, NULL);
	
	if(idade>4 && idade<8){
		printf("Infantil A.");
	} else if(idade>7 && idade<11){
		printf("Infantil B.");
	} else if(idade>10 && idade<14){
		printf("Juvenil A.");
	} else if(idade>13 && idade<18){
		printf("Juvenil B.");
	} else if(idade>=18){
		printf("Adulto.");
	} else {
		printf("Categoria nao disponivel para esta idade.");
	}
}

float RecebeMediaFinal(float mediaFinal){
	if(mediaFinal>=0 && mediaFinal<5){
		printf("CONCEITO D.");
	} else if(mediaFinal>=5 && mediaFinal<7){
		printf("CONCEITO C.");
	} else if(mediaFinal>=7 && mediaFinal<9){
		printf("CONCEITO B.");
	} else if(mediaFinal>=9 && mediaFinal<=10){
		printf("CONCEITO A.");
	} else {
		printf("CONCEITO INVALIDO.");
	}
}

// - -- - -- - -- - 

float CalculaPesoIdealMasculino(float altura2){
	float pesoIdeal = (72.7*altura2) - 58;
	return pesoIdeal;
}

float CalculaPesoIdealFeminino(float altura3){
	float pesoIdeal = (62.1*altura3) - 44.7;
	return pesoIdeal;
}

void isHomemOuMulher(int sexo){
	float altura;
	
	if(sexo == 1){
		
		printf(" - Homem");
		printf("\nIremos calcular seu peso ideal.");
		printf("\nInsira sua altura: ");
		scanf("%f",&altura);
		printf("Peso ideal: %.2f", CalculaPesoIdealMasculino(altura));
		
		
	} else if(sexo==2){
		
		
		printf(" - Mulher");
		printf("\nIremos calcular seu peso ideal.");
		printf("\nInsira sua altura: ");
		scanf("%f",&altura);
		printf("Peso ideal: %.2f", CalculaPesoIdealFeminino(altura));
		
	}
}

void MenuPesoIdeal(){
	int sexo;
	printf("\n1. Homem\n2. Mulher\n> ");
	scanf("%i",&sexo);
	isHomemOuMulher(sexo);
}

void MenuOpcoes(){
	printf("*************\n1.Cadastrar\n2.Editar\n3.Listar\n4.Sair\n*************");
}

void MenuOpcoes2(){
	int opcao=0;
	while(opcao!=4){
	printf("*************\n1.Cadastrar\n2.Editar\n3.Listar\n4.Sair\n*************");
	printf("\n> ");
	scanf("%i",&opcao);
	
	if(opcao==1){
		CadastrarUsuario();
	} else if(opcao==2){
		EditarUsuario();
	} else if(opcao==3){
		ListarUsuario();
	} else if(opcao==4){
		printf("\nSaindo...\n");
	} else {
		printf("\nOpcao invalida.\n");
	}
	}
}

void CadastrarUsuario(){
	printf("\nCadastrando...\n");
}

void EditarUsuario(){
	printf("\nEditando...\n");
}

void ListarUsuario(){
	printf("\nListando...\n");
}






void MenuCalculadora(){
	float n, n2;
	int opcao;
	
	printf("\n-----------\n1.Soma\n2.Subtracao\n3.Multiplicacao\n4.Divisao\n-----------\n");
	printf("\n> ");
	scanf("%i",&opcao);
	
	if(opcao==1){
		printf("\n - Soma\n");
		printf("Primeiro numero: ");
	} else if(opcao==2){
		EditarUsuario();
	} else if(opcao==3){
		ListarUsuario();
	} else if(opcao==4){
		printf("\nSaindo...\n");
	} else {
		printf("\nOpcao invalida.\n");
	}
	
}

//float Soma(){
//	
//}
//
//float Subtracao(){
//	
//}
//
//float Multiplicacao(){
//	
//}
//
//float Divisao(){
//	
//}
//
//
//float mediaAritmetica(){
//	
//}



int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, NULL);
	
	// ----- FUNÇÕES -----
	// -> Evitar repetição de código.
	// -> Vantagem na manutenção do sistema existente.
	// -> Método/Procedimento
	
//	int result_soma = Soma(2, 4);
//	
//	printf("Soma: %i", result_soma);
//	
//	MostrarMenu();
	
	
	// - -- - -- -- -- - - AULA 15 -- - - - -- - - -- - -
	
	
	//EX1
	
//	int idade=0;
//	
//	printf("\nInsira sua idade: ");
//	scanf("%i", &idade);
//	RecebeIdadeNadador(idade);
	
	
	//EX2
	
//	float mediaFinal;
//	
//	printf("\nInsira sua media final: ");
//	scanf("%f", &mediaFinal);
//	fflush(stdin);
//	
//	RecebeMediaFinal(mediaFinal);
	
	
	//EX3
	
//	MenuPesoIdeal();
	
	
	
	//EX4
	
//	int opcao=0;
//	
//	while(opcao != 4){
//		MenuOpcoes();
//		printf("\n> ");
//		scanf("%i",&opcao);
//	}
	
	
	//EX5

//	MenuOpcoes2();
	
	
	// - -- - -- -- -- - - AULA 14 -- - - - -- - - -- - -
	
	//EX4
	
//	int numeroAleatorio, quant= -1;
//	float media, somaValores;
//	
//	do {
//		printf("\nDigite um numero:");
//		scanf("%i", &numeroAleatorio);
//		fflush(stdin);
//		
//		if(numeroAleatorio < 0){
//			media = somaValores / quant;
//			printf("\nMedia: %.2f", media);
//			break;
//		}
//		
//		quant++;
//		somaValores = somaValores + numeroAleatorio;
//		
//	} while(1);
	
	return 0;
}



























