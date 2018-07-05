/*
* CSI030-2018-01 - Programação de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Curso: Engenharia de Computação
* Exercico: Atividade prática 1, exercicio 02
*/

/* Bibilotecas*/
#include <stdio.h>
#include <locale.h>
#include <float.h>

/* O programa faz a progressão geométrica de "20" termos
a partir de um número inicial, após é efetuada a média
dos 20 termos*/

int main (){
setlocale(LC_ALL, "portuguese"); /*Função para que o compilador indifique que o programa deve ser compilado em portugues*/

/* Declaração das váriaveis e atribuição de valores, se necessário*/
int aux; // variável contadora
double a1, q, soma, control; // ai representa os termos, q a razão, soma a soma dos termos e a média dos termos, control para controle
soma = aux = 0;
control = DBL_MAX; // para controlar o valor máximo que pode ser atribuido na variável
printf("O progrma está em português, caso necessite utilizar número\ncom decimais utilizar vírgula, não ponto, ex.: 1,6\n");
printf ("Informe o primeiro termo (a1): ");
scanf ("%lf", &a1);
printf ("Informe a razão (q): ");
scanf ("%lf", &q);

/*Laço de interação para imprimir os 20 termos da PG*/
do{
    aux++;
        /* Estrutura para o caso do valor do termo
        ser maior que o valor máximo permitido pela
        variável*/
        if (a1 > control){
        printf("\7\nERRO: Valor muito grande");
        return 0;
        }
        else{
        printf("%dº termo: %.2lf\n", aux, a1);
        }
        soma = (soma + a1);
        a1 = (a1 * q);
}while (aux < 20);

printf("\nA soma dos termos equivale a: %.2lf", soma);
soma = (soma / aux);
printf("\nA média dos termos equivale a: %.2lf", soma);

return 0;
}
