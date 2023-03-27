#include <stdio.h>
#include <stdlib.h>

int main(){

    int n, result, i, cont=1;

    printf("Informe um valor -> ");
    scanf("%i", &n);

    printf("\nValor -> Fatorial\n");
    for(i=1; i<n+1; i++, cont++){
        result = fatorial(cont);
        printf("  %i         %i\n",i,result);
    }
    return 0;
}

int fatorial(int cont){

    int result;
 
    if(cont == 0){
        result = 1;
    }else{
        result = cont * fatorial(cont-1);
    }

    return result;
}