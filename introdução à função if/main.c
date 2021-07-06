#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota1, nota2, nota3, media;

    printf("digite a primeira nota;\n");
    scanf("%f", &nota1);

    printf("digite a segunda nota;\n");
    scanf("%f", &nota2);

    printf("digite a terceira nota;\n");
    scanf("%f", &nota3);

    media = (nota1+nota2+nota3)/3;
    printf("\nmedia: %.1f\n", media);

    if(media<6) {
        printf("nota insuficiente");
    }
    else if(media<8) {
        printf("nota mediocre");
    }
    else {
        printf("nota excelente\n\n\n");
    }

    return 0;
}
