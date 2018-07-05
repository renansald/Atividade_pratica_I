/*
* CSI030-2018-01 - Programa��o de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Curso: Engenharia de Computa��o
* Exercico: Atividade pr�tica 1, exercicio 01
*/

/* Bibilotecas*/
#include <stdio.h>
#include <locale.h>
#include <limits.h>

/* O programa faz a soma dos pontos de dois jogadores
durante "n" partidas e ao final retorna a soma total de
cada jogar e informa qual jogador � o vencedor ou o empate*/

/*Fun��o para determinar o resultado, entre os jogadores*/
int winner(int j1, int j2){
if (j1 > j2){
        return 1;
}
else if (j1 < j2){
        return 2;
}
else{
        return 0;
}
}


int main (){
setlocale(LC_ALL, "portuguese"); //Fun��o para que o compilador indifique em que idioma est� escrevendo e identificar alguns caracteres

/* Declara��o das v�riaveis e atribui��o de valores, se necess�rio*/

int jogador_1, jogador_2, aux, n, soma_1, soma_2;
soma_1 = soma_2 = 0; //atribui��o de 0, pois essas vari�veis que receber�o a soma total dos pontos
aux = 1;        //aux ser� a condi��o para o while, e auxiliar� a informar em qual partida est�

/*L�gica para determinar o n�mero de partidas e soma da potuna��o*/

printf ("Informe o n�mero de partidas: ");
scanf ("%d", &n);

while (aux <= n){
    printf ("\n\nPartida %d\n", aux);
    printf ("Jogador(a) 1: ");
    scanf ("%d", &jogador_1);
    printf ("Jogador(a) 2: ");
    scanf ("%d", &jogador_2);
    if (((jogador_1 >= 10) && (jogador_1 <= 1000)) && ((jogador_2 >= 10) && (jogador_2 <= 1000))){
    aux++;
    soma_1 = (soma_1 + jogador_1);
    soma_2 = (soma_2 + jogador_2);
    }
    else {
        printf("\7\nPontua��o inv�lida, est� fora do intervalo de 10 a 1000 pontos\nPor favor corrija a pontua��o da partida %d", aux);
    }
}
printf("\n\nTotal:\nJogador(a) 1: %d pontos\nJogador(a) 2: %d pontos\n\n", soma_1, soma_2);
soma_1 = winner(soma_1, soma_2);

        /*Logica para informar ao usuario o vencedor da partida*/
if (soma_1 > 0){
    printf ("Resultado: O(a) Jogador(a) %d venceu!", soma_1);
}
else {
    printf ("Resultado: Empate!");
}

return 0;
}
