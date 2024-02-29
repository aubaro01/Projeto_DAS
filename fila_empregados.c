#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "fila_Empregados.h"

int menu(){
    int resp;
    printf("1-Ver o número de empregados na XXX\n");
    printf("2-Sair\n");
    printf("3-Eliminar os empregados da XXX\n");
    printf("4-Ver toda a XXX\n");
    printf("5- Retirar e mostrar um empregado da XXX\n");
    printf("6-Adicionar um novo empregado\n");
printf("Escolha uma opção: ");
scanf("%d",&resp);

    while (resp<1 || resp>6){
        printf("\nOpção tem que estar ente 1 e 6!. Tente novamente: ");
        scanf("%d",&resp);
    }
    return resp;
}

void main(){
    SetConsoleOutputCP(CP_UTF8);
    int opc;
    FILA* fila;
    EMPREGADO*novo;
    EMPREGADO*corrente;
    fila=criaFila();

do{
    opc=menu();
    switch(opc){

        case 1: 
             printf("\nA fila tem %d de empregados.",fila->tamanho);
            break;
     

        case 2:
           printf("\n\nObrigado.\nVolte sempre!\n\n");
            break;

        case 3:
            eliminaFila(fila);
            break;       
        
        case 4: 
            mostraFila(fila);
            break;
        
        case 5:
            corrente=pop(fila);
            mostraCorrente(corrente);
            break;
        
        case 6:
               novo=criaNovo();
            push(fila,novo);      
            break;
        
    }

     printf("\nPressione uma tecla para continuar...");
      fflush(stdin);getc(stdin);
   }while(opc!=2);
    
}






 





