#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\norigem:");

    #define tam 15
    int matriz[tam][tam];
    int *p = matriz;

    /*
    for(int l = 0; l < tam; l++){
        for(int c = 0; c < tam; c++){
            *p = l*c;
            printf("%02i ", *p);
            *p++;
        }
        printf("\n");    
    }
    */

   for(int i = 0; i < (tam*tam); i++){
       if(i%tam==0){
           printf("\n");
       }
       *p = rand()%80;
       printf("%02i ", *p);
       *p++;
   }
    
    *p--;
    printf("\n\ninversa:");

    /*
    for(int l = 0; l < tam; l++){
        for(int c = 0; c < tam; c++){
            printf("%02i ", *p);
            *p--;
        }
        printf("\n");
    }
    */
   for(int i = 0; i < (tam*tam); i++){
       if(i%tam==0){
           printf("\n");
       }
       printf("%02i ", *p);
       *p--;
   }
    printf("\n\nArtur Ritzel - 4211\n\n");
}
