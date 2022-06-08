//Ficha trabalho 4

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void exercicio1()
{
	char letra = 'A';
	int i = 0;
	float num1 = 10.2;
	double num2 = 10.2563;

	printf("\n tipo de dado char: %c ", letra);
	printf("\n tipo de dado inteiro: %d ", i);
	printf("\n tipo de dado decimal: %f ", num1);
	printf("\n tipo de dado decimal (com mais casas decimais): %f ", num2);
	printf("\n tipo de dados: %c, %d, %f, %f ", letra, i, num1, num2);
}

void exercicio2()
{
	int a = 0, b = 0, soma = 0;
	a = 4;
	b = 5;
	soma = a + b;
	printf("\n %d + %d = %d ", a, b, soma);
}

void exercicio3()
{
	float peso = 232.53125;

	printf("\n Agora o valor do peso mas com duas casas decimais: %0.2f \n", peso);
}

void exercicio4()
{
	int num = 0;

	printf("\n Introduza um n�mero: ");
	scanf("%d", &num);
	printf(" O n�mero introduzido foi: %d \n", num);
}

void exercicio5()
{
	int a = 0, b = 0, soma = 0;

	printf("\n Introduza dois n�meros: ");
	scanf("%d %d", &a, &b);

	soma = a + b;
	printf("\n %d + %d = %d \n", a, b, soma);
}

void exercicio6()
{
	char letra;

	printf("\n\n Vamos ler um caracter com a fun��o getchar(): ");
	letra = getchar(); //s� l� o primeiro caracter

	printf("\n\n Escreveu o caracter: %c \n", letra);
}

void limpar_teclado()
{
	int ch;
	do
	{
		ch = fgetc(stdin);
	} while (ch != EOF && ch != '\n');
}

void exercicio7()
{
	printf("\n\n Vamos escrever o alfabeto com o putchar: \n\n");

	for (char letra = 'A'; letra <= 'Z'; letra++)
	{
		putchar(letra);
	}
	printf("\n\n");
}


void main()
{
	setlocale(LC_CTYPE, "Portuguese");

	printf("\n Ficha de trabalho 4 ");
	printf("\n\n Exerc�cio 1");
	exercicio1();
	printf("\n\n Exerc�cio 2");
	exercicio2();
	printf("\n\n Exerc�cio 3");
	exercicio3();
	printf("\n\n Exerc�cio 4");
	exercicio4();
	printf("\n\n Exerc�cio 5");
	exercicio5();
	limpar_teclado();
	printf("\n\n Exerc�cio 6");
	exercicio6();
	printf("\n\n Exerc�cio 7");
	exercicio7();
}