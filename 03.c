/*
* CSI030-2018-01 - Programa��o de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Curso: Engenharia de Computa��o
* Exercico: Atividade pr�tica 1, exercicio 03
*/

/* Bibilotecas*/
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <float.h>

/* O programa gera "n" pares de n�meros inteiros, e para
cada par de n�meros calcular a Fun��o de Rosenbrock, ao final
ir� informa qual a menor constante e qual a maior constante,
a soma e a m�dia dos valores calculados*/

int main()
{
    setlocale(LC_ALL, "");
    srand(time(NULL));

/*declara��o de vari�veis e atribui��o de valores*/

int x, y, n, aux;
long int f, maior, menor;
double media, soma, controle;
aux = soma = 0;
controle = DBL_MAX;
printf ("Informe o n�mero de pares n�mericos a serem gerados: ");
scanf ("%d", &n);

while (aux < n){

    /*Estrutura para escolha de x e y ale�toriamente*/

    x = (rand () % 11 + 5);
    y = (rand () % 11 + 5);
    f = ((pow((1 - x), 2)) + (100 * (pow((y - (pow(x,2))), 2))));
printf ("F(%d, %d) = %ld\n", x, y, f);

    /*Estrutura para descobrir maior e menor valor de f(x,y)*/

    if (aux == 0){
    menor = maior = f;
        }
    else if (f > maior){
        maior = f;
        }
    else if (f < menor){
        menor = f;
        }

    soma = (soma + f);
    aux++;
}

/*Estrutura para o caso do valor da soma ser maior que o valor suportado pela vari�vel*/

if (soma > controle){
    printf("\7ERRO: Imposs�vel calcular a soma e a m�dia das fun��es (valor maior que o m�ximo suportado)\nPor�m o maior valor de  f(x, y) �: %ld;\nO menor valor de f(x, y) �: %ld", maior, menor);
}
else{
media = (soma / aux);
printf ("O maior valor de  f(x, y) �: %ld;\nO menor valor de f(x, y) �: %ld;\nA soma de f(x, y) �: %.2lf;\nA m�dia de f(x, y) �: %.2lf.", maior, menor, soma, media);
}

return 0;
}
