#include "stdio.h"
#include "stdlib.h"
#include "locale.h"

 int n, i=0;
 int op, op2, op3, op4,op5, op6;
 int  v1,v2,v3,v4,v5,v6,v7,v8;
 float s;

 void menu();
 void tabuada();
 void adicao();
 void subtracao();
 void multiplicacao();
 void divisao();

int main()
{
    do{
        do{
            do{
                do{
                     do{

                            int n, aux=0;
                            menu();
                            printf("DIGITE OPÇÃO DESEJADA:");
                            scanf("%d",&op);
                            fflush(stdin);
                            switch(op){

                              case 1:
                                    do{
                                                              system ("cls");
                                        printf("\t==========================================================\n");
                                        printf("\t\t\t-------TABUADA-------\n");
                                        printf("\t==========================================================\n\n");
                                        printf("  _____________________________________________________________________\n\n");
                                        printf("\nDigite o numero da tabuada:");
                                        scanf("%d", &n);
                                        fflush(stdin);
                                        tabuada(&n);
                                        printf("\n1- Novo calculo\n");
                                        printf("2- Voltar ao menu\n");
                                        printf("Digite a opcao desejada:");
                                        scanf("%d", &op2);
                                        fflush(stdin);
                                    }while(op2==1);

                                 break;
                              case 2:
                                  do{
                                                         system ("cls");
                                        printf("\t==========================================================\n");
                                        printf("\t\t-------ADIÇÃO-------\n");
                                        printf("\t==========================================================\n\n");
                                        printf("  _____________________________________________________________________\n\n");
                                        printf("\n\t\tDigite um valor:\n");
                                        scanf("\t\t%f",&v1);
                                        fflush(stdin);
                                        printf("\t\tDigite outro valor:\n");
                                        scanf("\t\t%f",&v2);
                                        fflush(stdin);
                                        adicao(&v1,&v2,&s);
                                        printf("\n1- Novo calculo\n");
                                        printf("2- Voltar ao menu\n");
                                        scanf("%d", &op3);
                                        fflush(stdin);
                                    }while(op3==1);
                                 break;
                              case 3:
                                  do{

                                                         system ("cls");
                                        printf("\t==========================================================\n");
                                        printf("\t\t-------SUBTRAÇÃO-------\n");
                                        printf("\t==========================================================\n\n");
                                        printf("  _____________________________________________________________________\n\n");
                                        printf("\n\t\tDigite um valor:\n");
                                        scanf("%f",&v3);
                                        fflush(stdin);
                                        printf("\t\tDigite outro valor:\n");
                                        scanf("%f",&v4);
                                        fflush(stdin);
                                        float r;
                                        subtracao(&v3,&v4,&r);
                                        printf("\n1- Novo calculo\n");
                                        printf("2- Voltar ao menu\n");
                                        scanf("%d", &op4);
                                        fflush(stdin);
                                    }while(op4==1);
                                 break;
                              case 4:
                                  do{
                                                         system ("cls");
                                        printf("\t==========================================================\n");
                                        printf("\t\t-------MULTIPLICÃO-------\n");
                                        printf("\t==========================================================\n\n");
                                        printf("  _____________________________________________________________________\n\n");
                                        printf("\n\t\tDigite um valor:\n");
                                        scanf("\t\t%f",&v5);
                                        fflush(stdin);
                                        printf("\t\tDigite outro valor:\n");
                                        scanf("\t\t%f",&v6);
                                        fflush(stdin);
                                        float rm;
                                        multiplicacao(&v5,&v6,&rm);
                                        printf("\n1- Novo calculo\n");
                                        printf("2- Voltar ao menu\n");
                                        scanf("%d", &op5);
                                        fflush(stdin);
                                    }while(op5==1);
                                    break;
                                case 5:
                                  do{
                                                         system ("cls");
                                        printf("\t==========================================================\n");
                                        printf("\t\t-------DIVISÃO-------\n");
                                        printf("\t==========================================================\n\n");
                                        printf("  _____________________________________________________________________\n\n");
                                        printf("\n\t\tDigite um valor:\n");
                                        scanf("\t\t%f",&v7);
                                        fflush(stdin);
                                        printf("\t\tDigite outro valor:\n");
                                        scanf("\t\t%f",&v8);
                                        fflush(stdin);
                                        float rd;
                                        divisao(&v7,&v8,&rd);
                                        printf("\n1- Novo calculo\n");
                                        printf("2- Voltar ao menu\n");
                                        scanf("%d", &op6);
                                        fflush(stdin);
                                    }while(op6==1);
                                 break;
                                case 0:
                                    system ("cls");
                                    printf("\n\n\n\t\t\tENCERRANDO PROGRAMA...\n\n\n");
                                    system ("pause");
                                    system ("cls");
                                    return 0;
                                 break;

                              Default:
                                printf("Opcao invalida.\nTente novamente.\n");
                                system("pause");
                                break;
                            }
                    }while(op6==2);
                 }while(op5==2);
               }while(op4==2);
        }while(op3==2);
    }while(op2==2);




  return 0;
}
void tabuada(int *n)
{

        for (i=0; i<=10; i++)
        {
            printf("\t%d x %d = %d\n", *n, i, *n*i);
        }
    return;
}
void menu(){
	setlocale(LC_ALL, "Portuguese");
	 static int linha;
    system ("cls");
    printf("\t==========================================================\n");
    printf("\t\t-------OPERAÇÕES MATEMÁTICAS-------\n");
    printf("\t==========================================================\n\n");
    printf("  _____________________________________________________________________\n\n");
	printf("1. TABUADA\n2. CALCULO DE ADIÇÃO \n3. CALCULO DE SUBTRAÇÃO \n4. CALCULO DE MULTIPLICAÇÃO\n5. CALCULO DE DIVISÃO\n0. ENCERRAR PROGRAMA.\n\n");
 return;
}

void    adicao(float *v1, float *v2, float *s){
    *s= *v1+*v2;
    printf("\n\t\t%3.f + %3.f = %3.f\n",*v1,*v2,*s);
}

void subtracao(float *v1, float *v2, float *r){
    *r= *v1-*v2;
    printf("\n\t\t%3.f - %3.f = %3.f\n",*v1,*v2,*r);
}

void multiplicacao(float *v1, float *v2, float *r){
    *r=*v1 * *v2;
    printf("\n\t\t%3.f x%3.f = %3.f\n",*v1,*v2,*r);
}
void divisao(float *v1, float *v2, float *r){
    *r=*v1 / *v2;
    printf("\n\t\t%1.f dividido por %1.f = %f\n",*v1,*v2,*r);
}

