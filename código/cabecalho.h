#ifndef CABECALHO_H_INCLUDED
#define CABECALHO_H_INCLUDED


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//formata o cronograma
void format(char **A,char ***B);
//funcao de calcular o tempo livre no dia, recebe a matriz e tambem o dia
int contadormanha(char **M,int i);
int contadortarde(char **M,int i);
int contadornoite(char **M,int i);
//imprime na matriz A e B os periodo 1,2,3,4,5,6,7,8,9 (Aulas e Horarios)
void periodo1(char **A,char ***B);
void periodo2(char **A,char ***B);
void periodo3(char **A,char ***B);
void periodo4(char **A,char ***B);
void periodo5(char **A,char ***B);
void periodo6(char **A,char ***B);
void periodo7(char **A,char ***B);
void periodo8(char **A,char ***B);
void periodo9(char **A,char ***B);
void periodo10(char **A,char ***B);
//Seleciona uma posicao na matriz
int move(char **A,char ***B);
//espacos semana
void espaco_semana(char **A,char ***B,int i);
void perguntaADificuldade(int qtd, int *dif);
void distribuicaoDeTempos(int t, int qtd, int* dif, int* tpd);

#endif // CABECALHO_H_INCLUDED
