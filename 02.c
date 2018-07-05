/*
* CSI030-2018-01 - Programa��o de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Curso: Engenharia de Computa��o
* Exercico: Atividade pr�tica 1, exercicio 02
*/

/* Bibilotecas*/
#include <stdio.h>
#include <locale.h>
#include <float.h>

/* O programa faz a progress�o geom�trica de "20" termos
a partir de um n�mero inicial, ap�s � efetuada a m�dia
dos 20 termos*/

int main (){
setlocale(LC_ALL, "portuguese"); /*Fun��o para que o compilador indifique que o programa deve ser compilado em portugues*/

/* Declara��o das v�riaveis e atribui��o de valores, se necess�rio*/
int aux; // vari�vel contadora
double a1, q, soma, control; // ai representa os termos, q a raz�o, soma a soma dos termos e a m�dia dos termos, control para controle
soma = aux = 0;
control = DBL_MAX; // para controlar o valor m�ximo que pode ser atribuido na vari�vel
printf("O progrma est� em portugu�s, caso necessite utilizar n�mero\ncom decimais utilizar v�rgula, n�o ponto, ex.: 1,6\n");
printf ("Informe o primeiro termo (a1): ");
scanf ("%lf", &a1);
printf ("Informe a raz�o (q): ");
scanf ("%lf", &q);

/*La�o de intera��o para imprimir os 20 termos da PG*/
do{
    aux++;
        /* Estrutura para o caso do valor do termo
        ser maior que o valor m�ximo permitido pela
        vari�vel*/
        if (a1 > control){
        printf("\7\nERRO: Valor muito grande");
        return 0;
        }
        else{
        printf("%d� termo: %.2lf\n", aux, a1);
        }
        soma = (soma + a1);
        a1 = (a1 * q);
}while (aux < 20);

printf("\nA soma dos termos equivale a: %.2lf", soma);
soma = (soma / aux);
printf("\nA m�dia dos termos equivale a: %.2lf", soma);

return 0;
}
