#include <stdio.h>
#include <stdlib.h>

int main()
{
    int input, fat;

    printf("digite um numero para calcular o fatorial: ");
    scanf("%i", &input);

    for(fat = 1; input>1; input--){
        fat = fat * input;
    }

    printf("\nresultado: %i", fat);

    return 0;
}
