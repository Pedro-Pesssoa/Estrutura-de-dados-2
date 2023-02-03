//FATORIAL

#include <stdio.h>
#include <stdlib.h>

int main(){

    int n, result;

    printf("\nInforme um valor -> ");
    scanf("%i", &n);

    result = fatorial(n);

    printf("Fatorial de %i eh %i\n\n", n, result);

    return 0;
}

int fatorial(int n){

    int result;

    if(n == 0){
        result = 1;
    }else{
        result = n * fatorial(n-1);
    }

    return result;
}