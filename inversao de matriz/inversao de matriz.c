#include <stdio.h>
#include <stdlib.h>

int main(){
    int set = 1, x1, y1;
    int matriz1[5][5], matriz2[5][5];

    printf("\nmatriz original:");
    for(x1=0; x1<5; x1++){
        printf("\n");
        for(y1=0; y1<5; y1++){
            matriz1[x1][y1] = set;
            set++;
            printf("[%i][%i]: %i\t", x1, y1, matriz1[x1][y1]);
        }
    }

    printf("\n\nmatriz transposta:");
    for(x1=0; x1<5; x1++){
        printf("\n");
        for(y1=0; y1<5; y1++){
            matriz2[x1][y1] = matriz1[y1][x1];
            printf("[%i][%i]: %i\t", y1, x1, matriz2[x1][y1]);
        }
    }

    printf("\n");
}
