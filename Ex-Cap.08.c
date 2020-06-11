#define ex3
#include <stdio.h>
#include <stdlib.h>

/*1 - Escreva um programa que receba via teclado um char, int, long, unsigned,
    float, double, unsigned long e unsigned char, declare ponteiros para os
    mesmos e imprima-os no video utilizando o operador de conteudo * no
    seguinte formato:

            10        20        30        40        50        60
    123456789012345678901234567890123456789012345678901234567890
        int                 long                unsigned
                  float               double              char
             unsigned long       unsigned char
*/

#ifdef ex1
main()
    {
    int a,*p1;
    long b,*p2;
    unsigned c,*p3;
    float d,*p4;
    double e,*p5;
    char f,*p6;
    unsigned char g,*p7;
    unsigned long h, *p8;
    p1=&a;
    p2=&b;
    p3=&c;
    p4=&d;
    p5=&e;
    p6=&f;
    p7=&g;
    p8=&h;
        printf("Insira um numero int: ");
        scanf("%d",p1);
        printf("Insira um numero long: ");
        scanf("%ld",p2);
        printf("Insira um numero unsigned: ");
        scanf("%u",p3);
        printf("Insira um numero float: ");
        scanf("%f",p4);
        printf("Insira um numero double: ");
        scanf("%lf",p5);
        printf("Insira um caracter char: ");
        scanf("%s",p6);
        printf("Insira um caracter unsigned char: ");
        scanf("%s",p7);
        printf("Insira um numero unsigned long: ");
        scanf("%ul",p8);


        printf("        10        20        30        40        50        60\n");
        printf("12345678901234567890123456789012345678901234567890123456789012345\n");
        printf("    %-6d              %-10ld          %-5u\n",*p1,*p2,*p3);
        printf("              %-8.1f            %-8.1lf            %-3c\n",*p4,*p5,*p6);
        printf("         %-3c                 %-10u",*p7,*p8);

    }

#endif // ex1

/*2 - Com a estrutura abaixo, defina um vetor de estruturas de 4 elementos.
    Receba os dados pelo teclado usando ponteiros e imprima-os no video
    também usando ponteiros. Utilize um comando de loop. (vetor de estruturas)
              nome, end, cidade, estado, cep
*/

#ifdef ex2

    struct dados{
        char nome[20];
        char end[50];
        char cidade[20];
        char estado[2];
        char cep[9];
    };

main(){

    struct dados cadastro;
    struct dados *pc;

    pc = &cadastro;

    printf("Insira o nome: ");
    scanf("%s",(*pc).nome);
    printf("Insira o endereco: ");
    scanf("%s",(*pc).end);
    printf("Insira a cidade: ");
    scanf("%s",(*pc).cidade);
    printf("Insira o estado: ");
    scanf("%s",(*pc).estado);
    printf("Insira o cep: ");
    scanf("%s",(*pc).cep);


    printf("%s",(*pc).nome);
    printf("%s",(*pc).end);
    printf("%s",(*pc).cidade);
    printf("%s",(*pc).estado);
    printf("%s",(*pc).cep);
}
#endif // ex2

/*3 - Receba um caracter via teclado usando ponteiros e compara com o vetor abaixo
    usando ponteiros. mostre como resultado se são IGUAIS ou DIFERENTES.
    vetor -> b,d,f,h,j,l,m,o,q,s,u,w,y
*/

#ifdef ex3
int main(){
    char x;
    char *p;
    char *v;
    int i, aux=0;
    char vetor[13]={'b','d','f','h','j','l','m','o','q','s','u','w','y'};

    printf("Insira um caracter: ");
    scanf("%s",&p);
    for(i=0;i<13;i++){
        v=&vetor[i];
        if(*v==*p){
            printf("Igual");
            aux=1;
        }
    }
    if(aux==0){printf("Diferente");};
}

#endif // ex3

/*4 - Receba 2 string de ate 10 caracteres via teclado, compare-as usando ponteiros
    e mostre como resultado se são IGUAIS ou DIFERENTES.
*/

#ifdef ex4
int main()
    {
        char str1[11];
        char x;
        char str2[11];
        int i = 0;
        int c;
        char *p;
        char *v;

        p=&str1[0];
        v=&str2[0];

        do
        {
        printf("Digite a primeira String => ");
        scanf("%s",p);
        printf("Digite a segunda String => ");
        scanf("%s",v);


        for(i=0;p[i]!='\0';i++){
                if(p[i] != v[i]){
                    break;
                }
        }
        if (p[i]== '\0' && v[i]== '\0')
            {
            printf("Strings Iguais!");
            }
        else
            {
            printf("Strings Diferentes!");
            }
        printf("\n\nDeseja continuar? ");
           printf("\n 1 - Sim\n");
           printf("\n 2 - Nao\n");
           scanf("%d",&c);

        }while(c==1);

    }


#endif // ex4

/*5 - Escreva um programa que receba via teclado numeros inteiros positivos usando
    ponteiros. Quando o numero digitado for negativo o programa deve parar e calcula
    a media dos valores digitados e mostrar o resultado.

*/

#ifdef ex5
main()
{
  int num,cont=0,x=0,y;
  int *p;
  int *p1, *p2;
  p=&num;
  p1=&y;
  p2=&x;

  do{
  printf("Insira um numero inteiro qlqr, para calcular a media digite qlqr numero negativo:\n");
  scanf("%d",p);
      if(*p>0)
      {
          *p2=*p2+*p;
          cont++;
      }
  }while(*p>=0);
  if(*p<0)
  {
      *p1=*p2/cont;
  }
  printf("A media eh: %d", *p1);

}


#endif // ex5

/*6 - Escreva um programa que contenha uma estrutura representando uma data
    valida. Essa estrutura deve conter os campos dia, mes e ano. Em seguida,
    leia duas datas e armazene nessa estrutura usando ponteiros. Calcule e exiba o numero de dias que decorrem entre as duas datas usando ponteiros.
*/

#ifdef ex6
struct calendario{
    int dia;
    int mes;
    int ano;
};

struct calendario data[2];

main(){
    int i;
    int *p1,*p2,*p3, *pr;
    int result;
    pr=&result;

    for(i=0;i<2;i++){
        p1=&data[i].dia;
        p2=&data[i].mes;
        p3=&data[i].ano;
        do{
            printf("Insira um dia valido: ");
            scanf("%d",p1);
        }while(*p1>30);
        do{
            printf("Insira um mes valido: ");
            scanf("%d",p2);
        }while(*p2>12);
            printf("Insira um ano valido: ");
            scanf("%d",p3);
    }
    p1=&data[0].dia;
    p2=&data[0].mes;
    p3=&data[0].ano;
    *pr = *p1 + *p2*30 + *p3*365;
    p1=&data[1].dia;
    p2=&data[1].mes;
    p3=&data[1].ano;
    *pr = *pr - (*p1 + *p2*30 + *p3*365);
    if(*pr<0){*pr=*pr*-1;}
    printf("A diferenca entre as datas eh: %d", *pr);
}
#endif // ex6
