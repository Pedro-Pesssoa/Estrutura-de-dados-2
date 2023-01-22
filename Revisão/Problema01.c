#include <stdlib.h>
#include <stdio.h>

int tamanho(int tam){
    printf("Quantidade de numeros -> ");
    scanf("%i", &tam);
    printf("\n");

    return tam;
}

void preencher(int * seq, int tam){
    int i;
    for(i=0; i<tam; i++){
        printf("Valor %i -> ", i+1);
        scanf("%i", &seq[i]);
        printf("\n");
    }
}

int media(int *seq, int tam){
    int i;
    float soma = 0;

    for(i=0; i<tam; i++){
        soma += seq[i];
    }

    return (soma/tam);
}

int main(){
    int *seq, tam, i;
    float med;

    tam  = tamanho(tam);
    seq = (int *) (malloc (tam * sizeof(int)));

    preencher(seq, tam);
    
    med = media(seq, tam);
    printf("\nSoma: %.1f", med);
    
    free(seq);
    return 0;
}
