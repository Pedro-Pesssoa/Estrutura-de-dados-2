//FIBONACCI
//0 1 1 2 3 5 8 13

#include <stdio.h>
#include <stdlib.h>

int main(){

    int n, result;

    printf("\nDigite um valor maior que 0 -> ");
    scanf("%i", &n);

    result = fibonacci(n);

    printf("Resultado: %i\n", result);

    return 0;
}

int fibonacci(int n){

    if(n == 1){
        return 0;

    }else if(n == 2){
        return 1;

    }else{
        return fibonacci(n-1) + fibonacci(n-2);
    }

}