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



