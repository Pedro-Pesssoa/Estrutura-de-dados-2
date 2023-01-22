#include <stdio.h>
#include <stdlib.h>


int main(){
    int i;
    float temp;

    printf("\nCelsius -> Fahrenheit\n");
    for(i=30; i<51; i++){
        printf("  %i           %i\n", i,i+32);
    }

    return 0;
}