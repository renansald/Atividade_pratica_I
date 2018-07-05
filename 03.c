/*
* CSI030-2018-01 - Programação de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Curso: Engenharia de Computação
* Exercico: Atividade prática 1, exercicio 03
*/

/* Bibilotecas*/
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <float.h>

/* O programa gera "n" pares de números inteiros, e para
cada par de números calcular a Função de Rosenbrock, ao final
irá informa qual a menor constante e qual a maior constante,
a soma e a média dos valores calculados*/

int main()
{
    setlocale(LC_ALL, "");
    srand(time(NULL));

/*declaração de variáveis e atribuição de valores*/

int x, y, n, aux;
long int f, maior, menor;
double media, soma, controle;
aux = soma = 0;
controle = DBL_MAX;
printf ("Informe o número de pares númericos a serem gerados: ");
scanf ("%d", &n);

while (aux < n){

    /*Estrutura para escolha de x e y aleátoriamente*/

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

/*Estrutura para o caso do valor da soma ser maior que o valor suportado pela variável*/

if (soma > controle){
    printf("\7ERRO: Impossível calcular a soma e a média das funções (valor maior que o máximo suportado)\nPorém o maior valor de  f(x, y) é: %ld;\nO menor valor de f(x, y) é: %ld", maior, menor);
}
else{
media = (soma / aux);
printf ("O maior valor de  f(x, y) é: %ld;\nO menor valor de f(x, y) é: %ld;\nA soma de f(x, y) é: %.2lf;\nA média de f(x, y) é: %.2lf.", maior, menor, soma, media);
}

return 0;
}
