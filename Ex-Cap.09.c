#define ex6
#include <stdio.h>
#include <stdlib.h>

/*1 - Escreva um programa que tem uma estrutura da dados com os membros abaixo.
    A estrutura é uma variavel local na função main().Receba via teclado o
    conteudo de cada um dos membros numa função e imprima-os no video no
    seguinte fomato(também numa função).

            10        20        30        40        50        60        70
    1234567890123456789012345678901234567890123456789012345678901234567890
        char      int       long                float               double
             unsigned char       unsigned int        unsigned long
             */
#ifdef ex1
struct dados{
    char c;
    int i;
    long l;
    float f;
    double d;
    unsigned char uc;
    unsigned int ui;
    unsigned long ul;
};

main(){
while(1){

struct dados regua = {71,32767,2147483647,3.4E+38,1.7E+308,71,4294967295,70000000};
struct dados *pregua;
pregua=&regua;

entrada(pregua);
imprimir(pregua);
    char sair;
        do{
            printf("\nDeseja repetir?(s/n): ");
            scanf("%c",&sair);
            getchar();
            }
        while((sair != 's')&&(sair != 'n'));
    switch(sair){
    case 's': continue;
    case 'n': return(0);
    }}
}

void entrada(struct dados *p){
printf("Digite um char : ");
scanf("%c",&p->c);
getchar();
printf("Digite uma int : ");
scanf("%d",&p->i);
getchar();
printf("Digite uma long : ");
scanf("%ld",&p->l);
printf("Digite um float : ");
scanf("%f",&p->f);
getchar();
printf("Digite uma double : ");
scanf("%lf",&p->d);
getchar();
printf("Digite uma unsigned char : ");
scanf("%uc",&p->uc);
getchar();
printf("Digite uma unsigned int : ");
scanf("%ui",&p->ui);
getchar();
printf("Digite uma unsigned long : ");
scanf("%ul",&p->ul);
getchar();
}
imprimir(struct dados *p){
printf("         10        20        30        40        50        60        70\n");
printf("1234567890123456789012345678901234567890123456789012345678901234567890\n");
printf("    %-c",p->c);
printf("         %-6d",p->i);
printf("    %-11ld",p->l);
printf("         %-8.le",p->f);
printf("            %-9.1e\n",p->d);
printf("          %-c",p->uc);
printf("                   %-6u",p->ui);
printf("              %-11lu",p->ul);
printf("\n\n\n\n\n\n\n\n");
}
#endif // ex1

/*2 - Escreva um programa que receba n valores via teclado, receba também a
    operação a ser executada. Quando for digitado "=" o programa deve mostrar
    o resultado acumulado dos n valores. As operações aritmeticas e a entrada
    de dados devem ser funções que recebe os valores usando ponteiros.

             */

#ifdef ex2
void matematica(int *a, char oper);

main(){
    char oper;
    int num = 0;
    printf("Insira a operacao desejada (+, -, *, /): ");
    scanf("%s",&oper);

    matematica(&num, oper);

    printf("O resultado eh %d\n",num);
    }

void matematica(int *a, char oper){
    if(oper == '+'){
        int aux = 0;
        int igual = 0;
        printf("Adicao!");
        printf("\nDigite o numero, aperte 0 para finalizar: ");
        scanf("%d", a);
        aux = *a;
        for(;;){
        printf("\nDigite o numero, aperte 0 para finalizar: ");
        scanf("%d", a);
            if(*a == igual){break;}
            aux += *a;
        }
        *a = aux;
    } else if(oper == '-'){
        int aux = 0;
        int igual = 0;
        printf("Subtracao!");
        printf("\nDigite o numero, aperte 0 para finalizar: ");
        scanf("%d", a);
        aux = *a;
        for(;;){
        printf("\nDigite o numero, aperte 0 para finalizar: ");
        scanf("%d", a);
            if(*a == igual){break;}
            aux -= *a;
        }
        *a = aux;
    } else if(oper == '*'){
        int aux = 0;
        int igual = 0;
        printf("Multiplicacao!");
        printf("\nDigite o numero, aperte 0 para finalizar: ");
        scanf("%d", a);
        aux = *a;
        for(;;){
        printf("\nDigite o numero, aperte 0 para finalizar: ");
        scanf("%d", a);
            if(*a == igual){break;}
            aux *= *a;
        }
        *a = aux;
    } else if(oper == '/'){
        int aux = 0;
        int igual = 0;
        printf("Divisao!");
        printf("\nDigite o numero, aperte 0 para finalizar: ");
        scanf("%d", a);
        aux = *a;
        for(;;){
        printf("\nDigite o numero, aperte 0 para finalizar: ");
        scanf("%d", a);
            if(*a == igual){break;}
            aux /= *a;
        }
        *a = aux;
    }
    return 0;
}
#endif // ex2

/*3 - Escreva um programa que receba uma letra via teclado. Escreva uma funcao que
    pesquise esta letra dentro do vetor abaixo. Imprima o resultado da pesquisa no
    video na funcao main(). O vetor é uma variavel local na função main().Passe
    como parametro para a funcao o vetor e a letra digitada usando ponteiros.
    (utilize o comando return)
    vetor -> b,d,f,h,j,k,m,o,q,s,u,w,y
             */

#ifdef ex3
int funk(){
    char x;
    char *p;
    char *v;
    int i, aux=0;
    char vetor[13]={'b','d','f','h','j','l','m','o','q','s','u','w','y'};
    p = &x;

    printf("Insira um caracter: ");
    scanf("%c",p);
    for(i=0;i<13;i++){
        v=&vetor[i];
        if(*v==*p){
            aux=1;
            break;
        }
    }
    return aux;
}
int main(){
    int val;
    val = funk();
    if(val==0){
        printf("Diferente");
    } else {
        printf("Igual");
    }
}
#endif // ex3

/*4 - Escreva um programa que receba em 2 funcao 2 strings de ate' 10 caracteres.
    Os vetores sao declaradas como variavel local na função main().
    Escreva uma funcao que recebe as strings com parametros usando ponteiros
    e compare estas 2 strings.
    Retorne como resultado da comparacao 0 se forem DIFERENTES, 1 se forem
    IGUAIS, 2 se a string 1 for maior que a string 2, 3 se a string 2 for maior
    que a string 1 e 4 se as string tem tamanhos iguais mas são diferentes.
             */

#ifdef ex4
int funk1(){
    char str1[11];
    char *p;
    p=&str1[0];
    printf("Digite a primeira String => ");
    scanf("%s",p);
    return *p;
}
int funk2(){
    char str2[11];
    char *v;
    v=&str2[0];
    printf("Digite a segunda String => ");
    scanf("%s",v);
    return *v;
}

int compare(char(*g),char(*h)){
    int i;
    for(i=0;g[i]!='\0';i++){
        if(g[i] != h[i]){
            break;
        }
}
    if (g[i]== '\0' && h[i]== '\0')
        {
        printf("Strings Iguais!");
        }
        else
        {
        printf("Strings Diferentes!");
        }
}

main()
    {
        char a[11], b[11];
        a[0] = funk1();
        b[0] = funk2();

        compare(a,b);

        int c;
        do{
        printf("\n\nDeseja continuar? ");
           printf("\n 1 - Sim\n");
           printf("\n 2 - Nao\n");
           scanf("%d",&c);

        }while(c==1);

    }
#endif // ex4

/*5 - Escreva um programa com a estrutura abaixo. Defina um vetor de estruturas
    de 4 elementos.Receba os 4 registros sequencialmente pelo teclado numa
    função e imprima todos os registros no video em outra função. Faça um menu.
    Coloque no menu a opção de sair também. Utilize o comando switch.
    (vetor de estruturas)
                nome, end, cidade, estado, cep
             */

#ifdef ex5
struct dados{
        char nome[50];
        char end[100];
        char cidade[20];
        char estado[10];
        char cep[10];
    };

main(){
    int tamanho = 2;
    struct dados cadastro[tamanho];
    int opcao;
    do{
    opcao = menu();

    switch (opcao){
        case 1:{
            escrever(&cadastro, tamanho);
            break;
        }
        case 2:{
            imprimir(&cadastro, tamanho);
            break;
        }
        case 3:{
            printf("Saindo... Obrigado!");
            break;
        }
    }
    }while(opcao != 3);

}
void escrever(struct dados *p, int tamanho){
    for(int i=0; i<tamanho;i++){
        printf("Insira o nome: ");
        scanf("%s",(*p).nome);
        printf("Insira o endereco: ");
        scanf("%s",(*p).end);
        printf("Insira a cidade: ");
        scanf("%s",(*p).cidade);
        printf("Insira o estado: ");
        scanf("%s",(*p).estado);
        printf("Insira o cep: ");
        scanf("%s",(*p).cep);
        printf("\n------------------\n");
        p++;
    }
}

void imprimir(struct dados *p, int tamanho){
    for(int i=0;i<tamanho;i++){
        printf("\n%s",(*p).nome);
        printf("\n%s",(*p).end);
        printf("\n%s",(*p).cidade);
        printf("\n%s",(*p).estado);
        printf("\n%s",(*p).cep);
        printf("\n------------------\n");
        p++;
    }
}

int menu(){
    int opcao=0;
    do{
        printf("////////////////////////////////////////////////////////////////\n");
        printf("///                           MENU                           ///\n");
        printf("///                 Escolha a opcao desejada                 ///\n");
        printf("///                                                          ///\n");
        printf("///1. Inserir contatos.                                      ///\n");
        printf("///2. Exibir contatos.                                       ///\n");
        printf("///3. Sair.                                                  ///\n");
        printf("///4.                                                        ///\n");
        printf("////////////////////////////////////////////////////////////////\n");
        printf("Opcao: ");
        scanf("%d",&opcao);
        getchar();
        if(opcao > 3 || opcao < 1){
            printf("Opcao invalida!!!\n.");
        }
    }while(opcao > 3 || opcao < 1);

    return opcao;
}

#endif // ex5

/*6 - Acrescente ao menu do exercicio anterior as funcoes de procura, altera e
    exclui um registro.
             */

#ifdef ex6
// FALTA: ARRUMAR BUG QUANDO NAO ENCONTRA NENHUM CONTATO, NAO EXIBIR CONTATOS EXCLUIDOS, INICIALIZAR EXCLUIDO.
struct dados{
        char nome[50];
        char end[100];
        char cidade[20];
        char estado[10];
        char cep[10];
    };

main(){
    int tamanho = 3;
    struct dados cadastro[tamanho];
    int opcao;
    do{
    opcao = menu();

    switch (opcao){
        case 1:{
            escrever(&cadastro, tamanho);
            break;
        }
        case 2:{
            imprimir(&cadastro, tamanho);
            break;
        }
        case 3:{
            procura(&cadastro, tamanho, opcao);
            break;
        }
        case 4:{
            int indice;
            indice = procura(&cadastro, tamanho, opcao);
            altera(&cadastro, tamanho, indice);
            break;
        }
        case 5:{
            int indice;
            indice = procura(&cadastro, tamanho, opcao);
            exclui(&cadastro, tamanho, indice);
            break;
        }
        case 6:{
            printf("Saindo... Obrigado!");
            break;
        }
    }
    }while(opcao != 6);

}

int menu(){
    int opcao=0;
    do{
        printf("////////////////////////////////////////////////////////////////\n");
        printf("///                           MENU                           ///\n");
        printf("///                 Escolha a opcao desejada                 ///\n");
        printf("///                                                          ///\n");
        printf("///1. Inserir contatos.                                      ///\n");
        printf("///2. Exibir contatos.                                       ///\n");
        printf("///3. Procurar um contato.                                   ///\n");
        printf("///4. Alterar um contato.                                    ///\n");
        printf("///5. Excluir um contato.                                    ///\n");
        printf("///6. Sair.                                                  ///\n");
        printf("////////////////////////////////////////////////////////////////\n");
        printf("Opcao: ");
        scanf("%d",&opcao);
        getchar();
        if(opcao > 6 || opcao < 1){
            printf("Opcao invalida!!!\n.");
        }
    }while(opcao > 6 || opcao < 1);

    return opcao;
}

void escrever(struct dados *p, int tamanho){
    for(int i=0; i<tamanho;i++){
            printf("Insira o nome: ");
            gets((*p).nome);
            printf("Insira o endereco: ");
            gets((*p).end);
            printf("Insira a cidade: ");
            gets((*p).cidade);
            printf("Insira o estado: ");
            gets((*p).estado);
            printf("Insira o cep: ");
            gets((*p).cep);
            printf("\n------------------\n");
            p++;
    }
}

void imprimir(struct dados *p, int tamanho){
    for(int i=0;i<tamanho;i++){
            puts((*p).nome);
            puts((*p).end);
            puts((*p).cidade);
            puts((*p).estado);
            puts((*p).cep);
            printf("\n------------------\n");
            p++;
        }
    }

int procura(struct dados *p, int tamanho, int opcao){
    char busca[50];
    int i;
    int aux = 0;
    int aux2 = 0;
    printf("Digite o nome a ser procurado: ");
    scanf("%s",&busca);
    getchar();
    for(;;){
        for(i=0;;i++){
            if(busca[i] != (*p).nome[i]){
                p++;
                break;
            }
            else if (busca[i]== '\0' && (*p).nome[i]== '\0'){
                aux = 1;
                if(opcao != 4 && opcao != 5){
                puts((*p).nome);
                puts((*p).end);
                puts((*p).cidade);
                puts((*p).estado);
                puts((*p).cep);
                printf("\n------------------\n");
                }
                break;
            }
        }
        if(aux == 1){
            break;
        }
        aux2++;
    }
    return aux2;
}

void altera(struct dados *p, int tamanho, int indice){
    p = p + indice;
    printf("Insira o novo nome: ");
    gets((*p).nome);
    printf("Insira o novo endereco: ");
    gets((*p).end);
    printf("Insira a nova cidade: ");
    gets((*p).cidade);
    printf("Insira o novo estado: ");
    gets((*p).estado);
    printf("Insira o novo cep: ");
    gets((*p).cep);
    printf("\n------------------\n");
    printf("Contato alterado!\n");

}

void exclui(struct dados *p, int tamanho, int indice){
    p = p + indice;
    (*p).nome[0] = '*';
    printf("Contato excluido!\n");
}
#endif // ex6
