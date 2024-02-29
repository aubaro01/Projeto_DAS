#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <stdbool.h>




typedef struct e{
    char nome[30];
    int idade;
    char funcao[50];
    int num;
    struct a *XXX;
}EMPREGADO;


typedef struct f{
    int tamanho;
    EMPREGADO *primeiro;
    EMPREGADO *ultimo;
}FILA;

void mostraCorrente(EMPREGADO *corrente){
    if(corrente!=NULL){
        printf("Nome do empregado:%s\n",corrente->nome);
        printf("Idade do empregado: %d\n",corrente->idade);
        printf("Função do empregado: %s\n",corrente->funcao);

    }
    
    else printf("Não existe dados do empregado para mostrar!\n");
}

FILA *criaFila(){
    FILA *f = (FILA *) malloc(sizeof(FILA));
    f->tamanho=0;
    f->primeiro=NULL;
    f->ultimo=NULL;  
    
    return f;
}

EMPREGADO *criaNovo(){
     EMPREGADO *novo=(EMPREGADO *) malloc(sizeof(EMPREGADO));
     printf("\nEscreva os dados do empregado\n");
     printf("Nome:");
     fflush(stdin); gets(novo->nome);
     printf("Idade: ");
     fflush(stdin); scanf("%d", &novo->idade);
     printf("Função do empregado: ");
     fflush(stdin); gets(novo->funcao);
     novo->XXX=NULL;
     return novo;
}

void mostraFila(FILA *fila){
    EMPREGADO*XXX;
    if(fila->tamanho!=0){
        EMPREGADO *corrente;
        EMPREGADO*primeiro;
        corrente = fila->primeiro;
        printf("FILA:\n");
        while(corrente!=NULL){
            mostraCorrente(corrente);
            corrente=corrente-XXX;
        }
        printf("\n\n");
    }else  printf("Fila de empregados está vazia!\n");
}


void eliminaNodosDaFila(FILA *fila){
     if(fila->tamanho!=0){
          EMPREGADO *elimina;
          while(fila->primeiro!=NULL){
                elimina=fila->primeiro;
                fila->primeiro=elimina->XXX;
                free(elimina);
          }
          fila->tamanho=0;
          printf("Fila  de empregados foi eliminada!\n\n");
     }else{
        printf("\nFila de empregados está vazia!!");
     }
}

void push(FILA *fila, EMPREGADO *novo){
    if(fila->tamanho==0){
        fila->primeiro=novo;  

    }else{

    fila->ultimo->XXX=novo;  

    }
    fila->ultimo=novo;  
    fila->tamanho++;
}

EMPREGADO *pop(FILA *fila){
     if(fila->tamanho!=0){
        EMPREGADO*corrente = fila->primeiro;  
        fila->primeiro=corrente->XXX;
        if(fila->primeiro==NULL)
            fila->ultimo=NULL;  
        fila->tamanho--;
        return corrente;
     }else{
        printf("Fila de empregados está vazia\n\n");
        return NULL;
     }
}