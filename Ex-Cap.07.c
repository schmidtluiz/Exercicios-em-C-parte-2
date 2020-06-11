#include <stdio.h>
#define ex3

/*1 - Escreva um programa que tem uma estrutura da dados com os membros abaixo.
    receba dados via teclado e imprima estes conteudos no video no seguinte
    formato.
             char, int, long, float, double
             unsigned char, unsigned int, unsigned long,

            10        20        30        40        50        60        70
    1234567890123456789012345678901234567890123456789012345678901234567890
        char      int       long                float               double
              unsigned char       unsigned int        unsigned long

*/

#ifdef ex1
struct tipos {
char a;
int b;
long c;
float d;
double e;
unsigned char a1;
unsigned int b1;
unsigned long c1;
};
struct tipos regua;
main(){
    printf("Insira um caracter char: ");
    scanf("%s",&regua.a);
    printf("Insira um numero inteiro: ");
    scanf("%d",&regua.b);
    printf("Insira um numero long: ");
    scanf("%ld",&regua.c);
    printf("Insira um numero float: ");
    scanf("%f",&regua.d);
    printf("Insira um numero double: ");
    scanf("%lf",&regua.e);
    printf("Insira um caracter unsigned char: ");
    scanf("%s",&regua.a1);
    printf("Insira um numero unsigned int: ");
    scanf("%u",&regua.b1);
    printf("Insira um numero unsigned long: ");
    scanf("%ul",&regua.c1);

    printf("        10        20        30        40        50        60        70\n");
    printf("1234567890123456789012345678901234567890123456789012345678901234567890\n");
    printf("    %-3c       %-6d  %-10ld          %-8.1f            %-8.1lf\n",regua.a,regua.b,regua.c,regua.d,regua.e);
    printf("          %-3c                 %-6u              %-10ul\n",regua.a1,regua.b1,regua.c1);
}
#endif

/*2 - Escreva um programa com a estrutura abaixo. Defina um vetor de estruturas
    de 4 elementos. Receba os dados pelo teclado e imprima-os no video. Faça um
    menu. (vetor de estruturas)
		nome, end, cidade, estado, cep
*/

#ifdef ex2
struct infos {
    char nome[10];
    char end[10];
    char cidade[10];
    char estado[10];
    char cep[10];
};

struct infos cadastro[4];

main(){
    int i=0;
    printf("------Bem vindo ao Sistema de Cadastro!------\n");
    for(i=0;i<4;i++){
        printf("------Digite o nome:");
        scanf("%s",&cadastro[i].nome);
        printf("------Digite o endereco:");
        scanf("%s",&cadastro[i].end);
        printf("------Digite a cidade:");
        scanf("%s",&cadastro[i].cidade);
        printf("------Digite o estado:");
        scanf("%s",&cadastro[i].estado);
        printf("------Digite o CEP:");
        scanf("%s",&cadastro[i].cep);
        printf("------------------------------------\n");
    }
    for(i=0;i<4;i++){
        printf("------------------------------------\n");
        printf("O nome da pessoa %d eh %s\n",(i+1),cadastro[i].nome);
        printf("O endereco da pessoa %d eh %s\n",(i+1),cadastro[i].end);
        printf("A cidade da pessoa %d eh %s\n",(i+1),cadastro[i].cidade);
        printf("O estado da pessoa %d eh %s\n",(i+1),cadastro[i].estado);
        printf("O nome da pessoa %d eh %s\n",(i+1),cadastro[i].cep);
    }
}
#endif

/*3 - Crie uma estrutura para representar as coordenadas de um ponto no plano
    (posicoes X e Y). Em seguida, declare e leia do teclado um ponto e exiba a
    distancia dele ate' a origem das coordenadas, isto é, posição (0, 0). Para
    realizar o cálculo, utilize a fórmula a seguir:
           d = raiz quadrada de  (XB - XA)ao 2 +(YB -YA)ao 2
    Em que:
    d = distância entre os pontos A e B
    X = coordenada X em um ponto
    Y = coordenada Y em um ponto
*/

#ifdef ex3

main(){
 float d;

struct coordenadas{
int x;
int y;
};
struct coordenadas A;
A.x=0;
A.y=0;

struct coordenadas B;
printf("Entre com a coordenada X: ");
scanf("%d",&B.x);
printf("\nEntre com a coordenada Y: ");
scanf("%d",&B.y);

struct coordenadas D;
D.x=(B.x-A.x)*(B.x-A.x);
D.y=(B.y-A.y)*(B.y-A.y);
d=sqrt((D.x+D.y));
printf("A distancia do ponto ateh as raizes eh de : %f.",d);
}
#endif
