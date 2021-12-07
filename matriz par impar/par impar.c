/*
Criar uma matriz 20x20;
1) Preencher essa matriz(origem) com números aleatórios menores que 100.
2) Criar duas outras matrizes, uma chamada par e outra impar e iniciar as mesmas com zero..
3) Na matriz par, copiar os números pares da matriz origem nas mesmas posições que se encontram na matriz origem.
4) Na matriz impar, copiar os números ímpares da matriz origem nas mesmas posições que se encontram na matriz origem.
5) Exibir as três matrizes.
*/

#include <stdio.h>
#include <stdlib.h>
#define tam 20

int main()
{

// definir aleatoriedade
    srand(time(0));
    srand(rand()%(time(0)));
    srand(rand()%(time(0)));
    srand(rand()%(time(0)));
    srand(rand()%(time(0)));
    srand(rand()%(time(0)));
    srand(rand()%(time(0)));
    srand(rand()%(time(0)));
    srand(rand()%(time(0)));

    int origem[tam][tam], par[tam][tam], impar[tam][tam];
    int impquant = 0, parquant = 0, tot = 0;

//definir matriz origem
    for(int li = 0; li < 20; li++){
        for(int co = 0; co < 20; co++){
            origem[li][co] = (rand()%100);
            tot++;
        }
    }

// definir matriz par/impar
    for(int li = 0; li < 20; li++){
        for(int co = 0; co < 20; co++){
            if(origem[li][co] % 2 == 0){
                par[li][co] = origem[li][co];
                impar[li][co] = 0;
                parquant++;
            }
            else{
                impar[li][co] = origem[li][co];
                par[li][co] = 0;  
                impquant++;             
            }
        }
    }

// printar matriz origem
    printf("\n\norigem:\n");
    for(int li = 0; li < tam; li++){
        for(int co = 0; co < tam; co++){
            printf("%.2d  ", origem[li][co]);
        }
        printf("\n");
    }
    printf("\n\npar: [%i de %i valores]\n", parquant, tot);

// printar matriz par
    for(int li = 0; li < tam; li++){
        for(int co = 0; co < tam; co++){
            printf("%.2d  ", par[li][co]);
        }
        printf("\n");
    }
    printf("\n\nimpar: [%i de %i valores]\n", impquant, tot);

// printar matriz impar
    for(int li = 0; li < tam; li++){
        for(int co = 0; co < tam; co++){
            printf("%.2d  ", impar[li][co]);
        }
        printf("\n");
    }

}
