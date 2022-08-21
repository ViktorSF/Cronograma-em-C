#include "cabecalho.h"

void format(char **A,char ***B){
    for(int i=0;i<24;i++){
        for(int j=0;j<8;j++){
            if(j!=0){
                A[i][j]=' ';
                if((i>=0 && i<=6)||(i>=22 && i<24)){
                    A[i][j]='D';
                    strcpy(B[i][j],"Dormir\0");
                }else if(i==12){
                    A[i][j]='A';
                    strcpy(B[i][j],"Almoco\0");
                }
            }else{
                A[i][j]=i;
            }
        }
    }
}
void periodo1(char **A,char ***B){
    A[8][1]=A[9][1]=A[10][3]=A[11][3]=A[10][4]=A[11][4]='F';
    A[10][1]=A[11][1]=A[8][3]=A[9][3]='c';
    A[14][1]=A[15][1]=A[16][1]=A[8][2]=A[9][2]='G';
    A[10][2]=A[11][2]=A[17][4]=A[18][4]='C';
    A[13][2]=A[14][2]=A[15][2]=A[16][2]=A[17][2]='L';
    A[14][3]=A[15][3]=A[16][3]='D';
    A[8][4]=A[9][4]='I';
    A[14][4]=A[15][4]=A[16][4]='H';
    A[10][5]=A[11][5]='S';

    strcpy(B[8][1],"Fisica\0");
    strcpy(B[9][1],B[8][1]);
    strcpy(B[10][3],B[8][1]);
    strcpy(B[11][3],B[8][1]);
    strcpy(B[10][4],B[8][1]);
    strcpy(B[11][4],B[8][1]);

    strcpy(B[10][1],"calculo\0");
    strcpy(B[11][1],B[10][1]);
    strcpy(B[8][3],B[10][1]);
    strcpy(B[9][3],B[10][1]);

    strcpy(B[14][1],"GeoAnalitic\0");
    strcpy(B[15][1],B[14][1]);
    strcpy(B[16][1],B[14][1]);
    strcpy(B[8][2],B[14][1]);
    strcpy(B[9][2],B[14][1]);

    strcpy(B[10][2],"Comp\0");
    strcpy(B[11][2],B[10][2]);
    strcpy(B[17][4],B[10][2]);
    strcpy(B[18][4],B[10][2]);

    strcpy(B[13][2],"LabFis\0");
    strcpy(B[14][2],B[13][2]);
    strcpy(B[15][2],B[13][2]);
    strcpy(B[16][2],B[13][2]);
    strcpy(B[17][2],B[13][2]);

    strcpy(B[14][3],"Desenho\0");
    strcpy(B[15][3],B[14][3]);
    strcpy(B[16][3],B[14][3]);

    strcpy(B[8][4],"Infoprof\0");
    strcpy(B[9][4],B[8][4]);

    strcpy(B[14][4],"Humani\0");
    strcpy(B[15][4],B[14][4]);
    strcpy(B[16][4],B[14][4]);

    strcpy(B[10][5],"LabComp\0");
    strcpy(B[11][5],B[10][5]);
}
void periodo2(char **A,char ***B){
    strcpy(B[8][1],"CalculoII\0");
    strcpy(B[9][1],B[8][1]);
    strcpy(B[8][3],B[8][1]);
    strcpy(B[9][3],B[8][1]);
    A[9][3]=A[8][3]=A[9][1]=A[8][1]=B[8][1][0];

    strcpy(B[10][1],"FisicaII\0");
    strcpy(B[11][1],B[10][1]);
    strcpy(B[10][3],B[10][1]);
    strcpy(B[11][3],B[10][1]);
    strcpy(B[10][4],B[10][1]);
    strcpy(B[11][4],B[10][1]);
    A[11][4]=A[10][4]=A[11][3]=A[10][3]=A[11][1]=A[10][1]=B[10][1][0];

    strcpy(B[14][1],"LabQuim\0");
    strcpy(B[15][1],B[14][1]);
    strcpy(B[16][1],B[14][1]);
    strcpy(B[17][1],B[14][1]);
    A[17][1]=A[16][1]=A[15][1]=A[14][1]=B[14][1][0];

    strcpy(B[8][2],"LabFis\0");
    strcpy(B[9][2],B[8][2]);
    strcpy(B[10][2],B[8][2]);
    strcpy(B[11][2],B[8][2]);
    A[11][2]=A[10][2]=A[9][2]=A[8][2]=B[8][2][0];

    strcpy(B[14][2],"EDI\0");
    strcpy(B[15][2],B[14][2]);
    strcpy(B[14][4],B[14][2]);
    strcpy(B[15][4],B[14][2]);
    A[15][4]=A[14][4]=A[15][2]=A[14][2]=B[14][2][0];

    strcpy(B[16][2],"AlgLin\0");
    strcpy(B[17][2],B[16][2]);
    strcpy(B[8][4],B[16][2]);
    strcpy(B[9][4],B[16][2]);
    A[9][4]=A[8][4]=A[17][2]=A[16][2]=B[16][2][0];

    strcpy(B[14][3],"MecSol\0");
    strcpy(B[15][3],B[14][3]);
    A[15][3]=A[14][3]=B[14][3][0];

    strcpy(B[16][3],"cktEletrico\0");
    strcpy(B[17][3],B[16][3]);
    A[17][3]=A[16][3]=B[16][3][0];

    strcpy(B[16][4],"Quim");
    strcpy(B[17][4],B[16][4]);
    A[17][4]=A[16][4]=B[16][4][0];
}

void periodo3(char **A,char ***B){

    strcpy(B[8][1],"SisDig\0");
    strcpy(B[9][1],B[8][1]);
    strcpy(B[8][3],B[8][1]);
    strcpy(B[9][3],B[8][1]);
    A[9][3]=A[8][3]=A[9][1]=A[8][1]=B[8][1][0];

    strcpy(B[10][1],"EDO\0");
    strcpy(B[11][1],B[10][1]);
    strcpy(B[10][5],B[10][1]);
    strcpy(B[11][5],B[10][1]);
    A[11][5]=A[10][5]=A[11][1]=A[10][1]=B[10][1][0];

    strcpy(B[14][1],"CalcNum\0");
    strcpy(B[15][1],B[14][1]);
    strcpy(B[10][3],B[14][1]);
    strcpy(B[11][3],B[14][1]);
    A[11][3]=A[10][3]=A[15][1]=A[14][1]=B[14][1][0];

    strcpy(B[16][1],"FeTransp\0");
    strcpy(B[17][1],B[16][1]);
    A[17][1]=A[16][1]=B[16][1][0];

    strcpy(B[8][2],"cktEletrico2\0");
    strcpy(B[9][2],B[8][2]);
    strcpy(B[14][3],B[8][2]);
    strcpy(B[15][3],B[8][2]);
    A[15][3]=A[14][3]=A[9][2]=A[8][2]=B[8][2][0];

    strcpy(B[10][2],"LabCktEletrico\0");
    strcpy(B[11][2],B[10][2]);
    strcpy(B[16][2],B[10][2]);
    strcpy(B[17][2],B[10][2]);
    strcpy(B[10][4],B[10][2]);
    strcpy(B[11][4],B[10][2]);
    A[11][4]=A[10][4]=A[17][2]=A[16][2]=A[11][2]=A[10][2]=B[10][2][0];

    strcpy(B[14][2],"CalcIII\0");
    strcpy(B[15][2],B[14][2]);
    strcpy(B[16][4],B[14][2]);
    strcpy(B[17][4],B[14][2]);
    A[17][4]=A[16][4]=A[15][2]=A[14][2]=B[14][2][0];

    strcpy(B[16][3],"EDII\0");
    strcpy(B[17][3],B[16][3]);
    strcpy(B[8][4],B[16][3]);
    strcpy(B[9][4],B[16][3]);
    A[9][4]=A[8][4]=A[17][3]=A[16][3]=B[16][3][0];

}
void periodo4(char **A,char ***B){

    strcpy(B[8][1],"Sinais\0");
    strcpy(B[9][1],B[8][1]);
    strcpy(B[8][2],B[8][1]);
    strcpy(B[9][2],B[8][1]);
    A[9][2]=A[8][2]=A[9][1]=A[8][1]=B[8][1][0];

    strcpy(B[10][1],"OrgArq\0");
    strcpy(B[11][1],B[10][1]);
    strcpy(B[8][4],B[10][1]);
    strcpy(B[9][4],B[10][1]);
    A[9][4]=A[8][4]=A[11][1]=A[10][1]=B[10][1][0];

    strcpy(B[14][1],"SemiCon\0");
    strcpy(B[15][1],B[14][1]);
    A[15][1]=A[14][1]=B[14][1][0];

    strcpy(B[10][2],"POO\0");
    strcpy(B[11][2],B[10][2]);
    strcpy(B[8][5],B[10][2]);
    strcpy(B[9][5],B[10][2]);
    A[9][5]=A[8][5]=A[11][2]=A[10][2]=B[10][2][0];

    strcpy(B[14][2],"CalcIV\0");
    strcpy(B[15][2],B[14][2]);
    strcpy(B[14][4],B[14][2]);
    strcpy(B[15][4],B[14][2]);
    A[14][4]=A[15][4]=A[15][2]=A[14][2]=B[14][2][0];

    strcpy(B[16][2],"EDIII\0");
    strcpy(B[17][2],B[16][2]);
    strcpy(B[10][4],B[16][2]);
    strcpy(B[11][4],B[16][2]);
    A[11][4]=A[10][4]=A[17][2]=A[16][2]=B[16][2][0];

    strcpy(B[8][3],"EletroMag\0");
    strcpy(B[9][3],B[8][3]);
    strcpy(B[10][5],B[8][3]);
    strcpy(B[11][5],B[8][3]);
    A[11][5]=A[10][5]=A[9][3]=A[8][3]=B[8][3][0];

    strcpy(B[10][3],"LabSisDig\0");
    strcpy(B[11][3],B[10][3]);
    strcpy(B[14][3],B[10][3]);
    strcpy(B[15][3],B[10][3]);
    strcpy(B[16][3],B[10][3]);
    strcpy(B[17][3],B[10][3]);
    A[17][3]=A[16][3]=A[15][3]=A[14][3]=A[11][3]=A[10][3]=B[10][3][0];

}
void periodo5(char **A,char ***B){
    strcpy(B[10][1],"ProgMat\0");
    strcpy(B[11][1],B[10][1]);
    strcpy(B[10][3],B[10][1]);
    strcpy(B[11][3],B[10][1]);
    A[11][3]=A[10][3]=A[11][1]=A[10][1]=B[10][1][0];

    strcpy(B[14][1],"cktEletronicoI\0");
    strcpy(B[15][1],B[14][1]);
    strcpy(B[10][5],B[14][1]);
    strcpy(B[11][5],B[14][1]);
    A[11][5]=A[10][5]=A[15][1]=A[14][1]=B[14][1][0];

    strcpy(B[8][2],"Estatistica\0");
    strcpy(B[9][2],B[8][2]);
    strcpy(B[8][4],B[8][2]);
    strcpy(B[9][4],B[8][2]);
    A[9][4]=A[8][4]=A[9][2]=A[8][2]=B[8][2][0];

    strcpy(B[10][2],"FundControle\0");
    strcpy(B[11][2],B[10][2]);
    strcpy(B[14][4],B[10][2]);
    strcpy(B[15][4],B[10][2]);
    A[15][4]=A[14][4]=A[11][2]=A[10][2]=B[10][2][0];

    strcpy(B[14][2],"ProceDigiDeSinais\0");
    strcpy(B[15][2],B[14][2]);
    A[15][2]=A[14][2]=B[14][2][0];

    strcpy(B[8][3],"SistOperacionais\0");
    strcpy(B[9][3],B[8][3]);
    strcpy(B[8][5],B[8][3]);
    strcpy(B[9][5],B[8][3]);
    A[9][5]=A[8][5]=A[9][3]=A[8][3]=B[8][3][0];

    strcpy(B[14][3],"OndasEletromag\0");
    strcpy(B[15][3],B[14][3]);
    strcpy(B[10][4],B[14][3]);
    strcpy(B[11][4],B[14][3]);
    A[11][4]=A[10][4]=A[15][3]=A[14][3]=B[14][3][0];

}
void periodo6(char **A,char ***B){

    strcpy(B[8][1],"Redes\0");
    strcpy(B[9][1],B[8][1]);
    strcpy(B[8][2],B[8][1]);
    strcpy(B[9][2],B[8][1]);
    A[9][2]=A[8][2]=A[9][1]=A[8][1]=B[8][1][0];

    strcpy(B[10][1],"SistCompDistr\0");
    strcpy(B[11][1],B[10][1]);
    A[11][1]=A[10][1]=B[10][1][0];

    strcpy(B[14][1],"BaseDeDados\0");
    strcpy(B[15][1],B[14][1]);
    strcpy(B[10][3],B[14][1]);
    strcpy(B[11][3],B[14][1]);
    A[11][3]=A[10][3]=A[15][1]=A[14][1]=B[14][1][0];

    strcpy(B[16][1],"Economia\0");
    strcpy(B[17][1],B[16][1]);
    A[17][1]=A[16][1]=B[16][1][0];

    strcpy(B[10][2],"cktEletronicoII\0");
    strcpy(B[11][2],B[10][2]);
    strcpy(B[10][4],B[10][2]);
    strcpy(B[11][4],B[10][2]);
    A[11][4]=A[10][4]=A[11][2]=A[10][2]=B[10][2][0];

    strcpy(B[14][2],"MicroProc\0");
    strcpy(B[15][2],B[14][2]);
    A[15][2]=A[14][2]=B[14][2][0];

    strcpy(B[16][2],"LabMicroProc\0");
    strcpy(B[17][2],B[16][2]);
    strcpy(B[16][3],B[16][2]);
    strcpy(B[17][3],B[16][2]);
    A[17][3]=A[16][3]=A[17][2]=A[16][2]=B[16][2][0];

    strcpy(B[8][3],"Adm&Empreend\0");
    strcpy(B[9][3],B[8][3]);
    A[9][3]=A[8][3]=B[8][3][0];

    strcpy(B[14][3],"LabCktEletronico\0");
    strcpy(B[15][3],B[14][3]);
    strcpy(B[14][4],B[14][3]);
    strcpy(B[15][4],B[14][3]);
    strcpy(B[16][4],B[14][3]);
    strcpy(B[17][4],B[14][3]);
    A[17][4]=A[16][4]=A[15][4]=A[14][4]=A[15][3]=A[14][3]=B[14][3][0];

    strcpy(B[10][5],"ModelOrientObj\0");
    strcpy(B[11][5],B[10][5]);
    A[11][5]=A[10][5]=B[10][5][0];

}
void periodo7(char **A,char ***B){

    strcpy(B[16][1],"ComptAltoDesemp\0");
    strcpy(B[17][1],B[16][1]);
    strcpy(B[10][4],B[16][1]);
    strcpy(B[11][4],B[16][1]);
    A[11][4]=A[10][4]=A[17][1]=A[16][1]=B[16][1][0];

    strcpy(B[8][2],"Compiladores\0");
    strcpy(B[9][2],B[8][2]);
    strcpy(B[8][5],B[8][2]);
    strcpy(B[9][5],B[8][2]);
    A[9][5]=A[8][5]=A[9][2]=A[8][2]=B[8][2][0];

    strcpy(B[10][2],"ProjCIAn\0");
    strcpy(B[11][2],B[10][2]);
    strcpy(B[14][3],B[10][2]);
    strcpy(B[15][3],B[10][2]);
    A[15][3]=A[14][3]=A[11][2]=A[10][2]=B[10][2][0];

    strcpy(B[13][2],"IA\0");
    strcpy(B[14][2],B[13][2]);
    strcpy(B[15][2],B[13][2]);
    A[15][2]=A[14][2]=A[13][2]=B[13][2][0];

    strcpy(B[8][3],"EngSoftware\0");
    strcpy(B[9][3],B[8][3]);
    strcpy(B[10][5],B[8][3]);
    strcpy(B[11][5],B[8][3]);
    A[11][5]=A[10][5]=A[9][3]=A[8][3]=B[8][3][0];

    strcpy(B[13][4],"PrincComunica\0");
    strcpy(B[14][4],B[13][4]);
    strcpy(B[15][4],B[13][4]);
    A[15][4]=A[14][4]=A[13][4]=B[13][4][0];

    strcpy(B[16][4],"GestAmbiental\0");
    strcpy(B[17][4],B[16][4]);
    A[17][4]=A[16][4]=B[16][4][0];

}
void periodo8(char **A,char ***B){

    strcpy(B[8][2],"ProjCI1\0");
    strcpy(B[9][2],B[8][2]);
    strcpy(B[8][5],B[8][2]);
    strcpy(B[9][5],B[8][2]);
    A[9][5]=A[8][5]=A[9][2]=A[8][2]=B[8][2][0];

    strcpy(B[10][2],"ComunicaDigital\0");
    strcpy(B[11][2],B[10][2]);
    A[11][2]=A[10][2]=B[10][2][0];

    strcpy(B[10][3],"ControleDigital\0");
    strcpy(B[11][3],B[10][3]);
    strcpy(B[10][5],B[10][3]);
    strcpy(B[11][5],B[10][3]);
    A[11][5]=A[10][5]=A[11][3]=A[10][3]=B[10][3][0];

    strcpy(B[16][3],"ProjCI2\0");
    strcpy(B[17][3],B[16][3]);
    A[17][3]=A[16][3]=B[16][3][0];

}
//O periodo 9 nao possui horarios obrigatorios disponiveis para acesso
void periodo9(char **A,char ***B){
    A[17][1]=' ';
}
//O periodo 10 nao possui horarios obrigatorios
void periodo10(char **A,char ***B){
    A[17][1]=' ';
}
int move(char **A,char ***B){
    int pos = 1;
    int C[24][8];
    int cont = 1;


    for (int i = 0; i < 24; i++){
        for (int j = 0; j < 8; j++){
            C[i][j] = cont;
            cont++;
        }
    }
    while(1){
        char x;
        scanf("%c",&x);
        system("cls");
        switch(x){
            case 'w':pos=pos-8;break;
            case 'a':pos=pos-1;break;
            case 's':pos=pos+8;break;
            case 'd':pos=pos+1;break;
        }
        if(pos<1 || pos>191){
        system("cls");
        printf("Voce saiu da area do cronograma:( \n");
        continue;
        }
        for(int i=0;i<24;i++){
            if(pos==i*8)
            pos=pos+1;
        }
        printf("xxx     Seg     Ter     Qua     Qui     Sex     Sab     Dom\n");
        for(int i = 0; i < 24; i++) {
            for (int j = 0; j < 8; j++){
                if (pos == 8*i + j) {
                    printf("\t>*<  ");
                }else if(j==0){
                    printf("%2dh ",i);
                }else{
                    printf("\t%.6s ", B[i][j]);
                }
            }
            printf("\n");
        }
        if(x=='x'){
            break;
        }
    }
    return pos;
}

int contadormanha(char **M,int i){
    int soma=0;
    for(int j=0;j<12;j++){
        if(M[j][i]==' '){
            soma++;
        }
    }
    return soma;
}
int contadortarde(char **M,int i){
    int soma=0;
    for(int j=12;j<17;j++){
        if(M[j][i]==' '){
            soma++;
        }
    }
    return soma;
}
int contadornoite(char **M,int i){
    int soma=0;
    for(int j=17;j<24;j++){
        if(M[j][i]==' '){
            soma++;
        }
    }
    return soma;
}
void espaco_semana(char **A,char ***B,int j){
    if(contadormanha(A,j)!=0){
        printf("o que voce quer fazer parte da manha?\n");
        char x[50];
        scanf("%s",x);
        for(int i=0;i<12;i++){
            if(A[i][j]==' '){
                strcpy(B[i][j],x);
                A[i][j]=x[0];
            }
        }
    }
    if(contadortarde(A,j)!=0){
        printf("o que voce quer fazer na parte da tarde?\n");
        char y[50];
        scanf("%s",y);
        for(int i=12;i<17;i++){
            if(A[i][j]==' '){
                strcpy(B[i][j],y);
                A[i][j]=y[0];
            }
        }
    }
    if(contadornoite(A,j)!=0){
        printf("o que voce quer fazer na parte da noite?\n");
        char z[50];
        scanf("%s",z);
        for(int i=17;i<24;i++){
            if(A[i][j]==' '){
                strcpy(B[i][j],z);
                A[i][j]=z[0];
            }
        }
    }

}

//Retorno por referencia: a variavel retornada: tpd
void distribuicaoDeTempos(int t, int qtd, int* dif, int* tpd) //t = tempo total disponivel; tpd = tempo por disciplina
{


    int somadif = 0; // soma das dificuldades, para usar na formula a baixo


    for(int i = 0; i< qtd; i++)
    {
        somadif+= dif[i];
    }
//44horas eh o maximo de trabalho semanal(normas de seguranca)
//168horas
//producao semanal= 0.2619*168 horas
    for(int i = 0; i< qtd; i++)
    {
        tpd[i] = 0.2619*t*(dif[i])/somadif; //formula para divisao do tempo livre
        if(tpd[i]<1){
            tpd[i]=1;
        }
    }
}

//ela me retorna, por referencia, o vetor de dificuldades nas materias
// depois, esse vetor eh usado na funcao distribuicaoDeTempos para calcular o vetor de tempo recomendado por materia

void perguntaADificuldade(int qtd, int *dif) // quantidade de materia, isso eh colocado no comeco dos cases da main
{
    for(int i=0; i<qtd; i++)
    {
        printf("de 1 a 10, qual seu nivel de dificuldade na disciplina(%d)?(Verificar legenda acima)\n", i+1);
        scanf("%d", &dif[i]);
    }


}
