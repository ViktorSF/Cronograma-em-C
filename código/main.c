#include "cabecalho.h"

int main(){
    FILE *arq;
    char s[50];
    int qtd;            // quantidade de disciplinas obrigatorias no periodo
    int dif[9];        // vetor de dificuldade nas disciplinas
    char r1;          // chave para decidir se vai mudar manualmente o cronograma ou nao
    char **v;        // matriz de caracteres, representando as mat�rias no cronograma
    char ***v1;     // matriz de strings, um jeito menos ambiguo de representar as materias no cronograma
    printf("Insira o nome do cronograma: ");
    scanf("%s",s);
    arq = fopen(s,"w+");
    if(arq ==  NULL){
        printf("Error");
        exit(0);
    }
    //Matriz Reduzida
    v=(char**)calloc(24,sizeof(char*));
    for(int i=0;i<24;i++){
    v[i]=(char*)calloc(8,sizeof(char));
    }
    //Matriz horarios
    v1=(char***)malloc(24*sizeof(char**));
    for(int i=0;i<24;i++){
    v1[i]=(char**)malloc(8*sizeof(char*));
        for(int a=0;a<8;a++){
            v1[i][a]=(char*)malloc(50*sizeof(char));
        }
        for(int j=0;j<8;j++){
        strcpy(v1[i][j]," \0");
        }
    }
    format(v,v1);
    printf("Otimo!!Entao vamos iniciar, existem varios cursos na USP, eng.computacao(1)\n");
    printf("Qual o seu curso?\n");
    int curso=0;
    scanf("%d",&curso);
    if(curso ==1 ){
        printf("Engenharia de Computacao Escolhido!\n");
        printf("Qual o seu periodo atual?\n");
        int periodo=0;
        scanf("%d",&periodo);
        switch(periodo){
        case 1:
            qtd = 9;
            periodo1(v,v1);
            printf("Semestre 1 de Engenharia de Computacao na USP\n");
            printf("Periodo Ideal Inclui:\n");
            printf(" 1-Fisica I(F)\n 2-Laboratorio Fisica Geral I(L)\n");
            printf(" 3-Humanidades e Ciencias Sociais(H)\n 4-Desenho(D)\n");
            printf(" 5-Informacao Profissional em Engenharia de Computacao(I)\n");
            printf(" 6-Geometria Analitica(G)\n");
            printf(" 7-Calculo I(c)\n 8-Introducao a Ciencia de Computacao I(C)\n");
            printf(" 9-Laboratorio de Introducao a Ciencia da Computacao I(S)\n");
            break;
        case 2:
            qtd = 9;
            periodo2(v,v1);
            printf("Semestre 2 de Engenharia de Computacao na USP\n");
            printf("Periodo Ideal Inclui:\n");
            printf(" 1-Quimica Geral(Q)\n 2-Quimica Geral Experimental(Q)\n");
            printf(" 3-Fisica II(F)\n 4-Laboratorio de Fisica Geral II(L)\n");
            printf(" 5-Circuitos Eletricos Lineares em Corrente Continua(C)\n");
            printf(" 6-Mecanica dos Solidos(M)\n 7-Algebra Linear(A)\n");
            printf(" 8-Calculo II(C)\n 9-Estrutura de Dados I(E)\n");
            break;
        case 3:
            qtd = 8;
            periodo3(v,v1);
            printf("Semestre 3 de Engenharia de Computacao na USP\n");
            printf("Periodo Ideal Inclui:\n");
            printf(" 1-Estrutura de Dados II(E)\n 2-Laboratorio de Medidas e Circuitos Eletricos(L)\n");
            printf(" 3-Circuitos Eletricos(C)\n 4-Sistemas Digitais(S)\n");
            printf(" 5-Fenomenos de Transporte(F)\n 6-Calculo III(C)\n");
            printf(" 7-Equacoes Diferenciais Ordinarias(E)\n 8-Calculo Numerico(C)\n");
            break;
        case 4:
            qtd = 8;
            periodo4(v,v1);
            printf("Semestre 4 de Engenharia de Computacao na USP\n");
            printf("Periodo Ideal Inclui:\n");
            printf(" 1-Programacao Orientada a Objetos(P)\n 2-Estrutura de Dados III(E)\n");
            printf(" 3-Sinais e Sistemas(S)\n 4-Laboratorio de Sistemas Digitais(L)\n");
            printf(" 5-Fundamentos de Semicondutores(F)\n 6-Eletromagnetismo(E)\n");
            printf(" 7-Calculo IV(C)\n 8-Organizacao e Arquitetura de Computadores(O)\n");
            break;
        case 5:
            qtd = 7;
            periodo5(v,v1);
            printf("Semestre 5 de Engenharia de Computacao na USP\n");
            printf("Periodo Ideal Inclui:\n");
            printf(" 1-Circuitos Eletronicos I(C)\n 2-Fundamentos de Controle(F)\n");
            printf(" 3-Ondas Eletromagneticas(O)\n 4-Processamento Digital de Sinais(P)\n");
            printf(" 5-Programacao Matematica(P)\n 6-Estatistica I(E)\n");
            printf(" 7-Sistemas Operacionais I(S)\n");
            break;
        case 6:
            qtd = 9;
            periodo6(v,v1);
            printf("Semestre 6 de Engenharia de Computacao na USP\n");
            printf("Periodo Ideal Inclui:\n");
            printf(" 1-Bases de Dados(B)\n 2-Laboratorio de Circuitos Eletronicos(L)\n");
            printf(" 3-Circuitos Eletronicos II(C)\n 4-Microprocessadores e Aplicacoes(M)\n");
            printf(" 5-Administracao e Empreendedorismo(A)\n 6-Principios de Economia(P)\n");
            printf(" 7-Modelagem Orientada a Objetos(M)\n 8-Redes de Computadores(R)\n");
            printf(" 9-Sistemas Computacionais Distribuidos(S)\n");
            break;
        case 7:
            qtd = 8;
            periodo7(v,v1);
            printf("Semestre 7 de Engenharia de Computacao na USP\n");
            printf("Periodo Ideal Inclui:\n");
            printf(" 1-Teoria da Computacao e Compiladores(T)\n 2-Inteligencia Artificial(I)\n");
            printf(" 3-Principios de Comunicacao(P)\n 4-Fundamentos de Microeletronica(F)\n");
            printf(" 5-Projetos de Circuitos Integrados Analogicos(P)\n");
            printf(" 6-Gestao Ambiental para Engenheiros(G)\n 7-Engenharia de Software(E)\n");
            printf(" 8-Computacao de Alto Desempenho(C)\n");
            break;
        case 8:
            qtd = 3;
            periodo8(v,v1);
            printf("Semestre 8 de Engenharia de Computacao na USP\n");
            printf("Periodo Ideal Inclui:\n");
            printf(" 1-Comunicacao Digital(C)\n 2-Controle Digital(C)\n");
            printf(" 3-Projetos de Circuitos Integrados Digitais I(P)\n");
            break;
        case 9:
            qtd = 2;
            periodo9(v,v1);
            printf("Semestre 9 de Engenharia de Computacao na USP\n");
            printf("Periodo Ideal Inclui:\n");
            printf(" 1-Estagio Supervisionado(E)\n 2-Projeto de Formatura I(P)\n");
            break;
        case 10:
            qtd = 0;
            periodo10(v,v1);
            printf("Semestre 10 de Engenharia de Computacao na USP\n");
            printf("Periodo Ideal Inclui:\n");
            break;
        }
        int t=0;
        for(int i = 1; i<=7; i++)
        {
            t+= contadormanha(v,i) + contadortarde(v,i) + contadornoite(v,i);
        }

        perguntaADificuldade(qtd,dif);
        int trpd[9]; // tempo recomendado por disciplina

        distribuicaoDeTempos(t,qtd,dif,trpd);
        printf("tempo total disponivel na semana= %dhoras\n", t);
        for(int i = 0; i < qtd; i++)
        {
            printf("Para a materia %d o sistema recomenda que o seu cronograma tenha %dh dedicadas ao seu estudo\n", i+1, trpd[i]);
        }


        printf("xxx     Seg     Ter     Qua     Qui     Sex     Sab     Dom\n");
        for(int i=0;i<24;i++){
            for(int j=0;j<8;j++){
                if(j==0){
                  printf("%2dh ",i);
                }else
                printf("\t%.6s",v1[i][j]);
            }
            printf("\n");
        }
    }
    printf("o Sistema padrao possui 8h de Dormir(D) e 1h de Almoco(A).Recomenda-se que o usuario tenha uma alimentacao regular(3 refeicoes) e tempos livres\n");
    system("pause");
    printf("Voce possui na segunda feira %d horas de manha, %d horas de tarde e %d horas de noite\n",contadormanha(v,1),contadortarde(v,1),contadornoite(v,1));
    espaco_semana(v,v1,1);

    printf("Voce possui na terca feira %d horas de manha, %d horas de tarde e %d horas de noite\n",contadormanha(v,2),contadortarde(v,2),contadornoite(v,2));
    espaco_semana(v,v1,2);

    printf("Voce possui na quarta feira %d horas de manha, %d horas de tarde e %d horas de noite\n",contadormanha(v,3),contadortarde(v,3),contadornoite(v,3));
    espaco_semana(v,v1,3);

    printf("Voce possui na quinta feira %d horas de manha, %d horas de tarde e %d horas de noite\n",contadormanha(v,4),contadortarde(v,4),contadornoite(v,4));
    espaco_semana(v,v1,4);

    printf("Voce possui na sexta feira %d horas de manha, %d horas de tarde e %d horas de noite\n",contadormanha(v,5),contadortarde(v,5),contadornoite(v,5));
    espaco_semana(v,v1,5);

    printf("Voce possui no sabado %d horas de manha, %d horas de tarde e %d horas de noite\n",contadormanha(v,6),contadortarde(v,6),contadornoite(v,6));
    espaco_semana(v,v1,6);

    printf("Voce possui no domingo %d horas de manha, %d horas de tarde e %d horas de noite\n",contadormanha(v,7),contadortarde(v,7),contadornoite(v,7));
    espaco_semana(v,v1,7);

    printf("Deseja alterar algo da matriz?(s ou n)\n");
    scanf("\n%c",&r1);

    if(r1 != 'n'){
        int x=0;
        printf("\nSelecione digitando x no M[i][j] que deseja alterar, use o WASD para se mover(mover, excluir, adicionar)\n");
        system("pause");
        while(x!=4){
            int p1=move(v,v1);
            printf("\nO que deseja fazer com o termo selecionado? mover(1),excluir(2),adicionar(3), sair do programa(4) ou selecionar novamente(5)\n");
            scanf("%d",&x);
            int i1,j1,i2,j2;
            switch(x){
                case 1:
                printf("Selecione o segundo lugar que voce deseja colocar os dados do M[i][j] selecionado\n");
                system("pause");
                int p2=move(v,v1);
                i1=p1/8;
                j1=p1%8;
                i2=p2/8;
                j2=p2%8;
                v[i2][j2]=v[i1][j1];
                v[i1][j1]=' ';
                strcpy(v1[i2][j2],v1[i1][j1]);
                strcpy(v1[i1][j1]," \0");
                break;

                case 2:
                i1=p1/8;
                j1=p1%8;
                v[i1][j1]=' ';
                strcpy(v1[i1][j1]," \0");
                break;

                case 3:
                i1=p1/8;
                j1=p1%8;
                printf("O que voce deseja adicionar no espaco selecionado?\n");
                scanf("%s",v1[i1][j1]);
                v[i1][j1]=v1[i1][j1][0];
                break;
                case 4: break;
                case 5:
                printf("Selecione novamente o M[i][j]\n");
                system("pause");
                break;
                default:
                printf("Acao invalida, selecione novamente o M[i][j]\n");
                system("pause");
                break;
            }
        }
    }
    fprintf(arq,"xxx     Seg     Ter     Qua     Qui     Sex     Sab     Dom\n");
        for(int i = 0; i < 24; i++) {
            for (int j = 0; j < 8; j++){
                if(j==0){
                    fprintf(arq,"%2dh ",i);
                }else{
                    fprintf(arq,"\t%.6s", v1[i][j]);
                }
            }
            fprintf(arq,"\n");
        }
    printf("O programa terminou, o sistema fez o seu cronograma em modo de bloco de notas com o nome q voce escolheu\n");
    printf("Muito obrigado por usar o programa (:\n");
    for(int i=0;i<24;i++){
        for(int j=0;j<8;j++){
            free(v1[i][j]);
        }
    }
    for(int i=0;i<24;i++){
            free(v[i]);
            free(v1[i]);
        }
    free(v);
    free(v1);
    fclose(arq);
    system ("pause");
    system("cls");
    return 0;
}
