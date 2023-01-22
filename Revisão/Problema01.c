#include <stdlib.h>
#include <stdio.h>

int tamanho(int tam){
    printf("\nQuantidade de numeros -> ");
    scanf("%i", &tam);
    printf("\n");

    return tam;
}

void preencher(int * seq, int tam){
    int i;
    for(i=0; i<tam; i++){
        printf("Valor %i -> ", i+1);
        scanf("%i", &seq[i]);
    }
}

int media(int *seq, int tam){
    int i, soma = 0;
    float media;

    for(i=0; i<tam; i++){
        soma += seq[i];
    }
    media = soma/tam;

    return (media);
}

int main(){
    int *seq, tam = 0;
    float med;

    tam  = tamanho(tam);
    seq = (int *) (malloc (tam * sizeof(int)));

    preencher(seq, tam);
    
    med = media(seq, tam);
    printf("\nMedia: %.1f\n", med);
    
    free(seq);
    return 0;
}
