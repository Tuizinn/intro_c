#include<stdio.h>
#include<stdlib.h>

int main(void) {

  float nota1, nota2, nota3;
  int media;
  
  printf("digite primeira nota de 0 a 10: ");
  scanf("%f",&nota1);
  while (nota1 < 0 || nota1 > 10) {
    do {
        printf("certifique-se de que a nota está entre 0 e 10: ");
        scanf("%f",&nota1);
    } while (nota1 < 0 || nota1 > 10);  
  }

  printf("digite segunda nota de 0 a 10: ");
  scanf("%f",&nota2);
  while (nota2 < 0 || nota2 > 10) {
    do {
        printf("certifique-se de que a nota está entre 0 e 10: ");
        scanf("%f",&nota2);
    } while (nota2 < 0 || nota2 > 10);  
  }

  printf("digite terceira nota de 0 a 10: ");
  scanf("%f",&nota3);
  while (nota3 < 0 || nota3 > 10) {
    do {
        printf("certifique-se de que a nota está entre 0 e 10: ");
        scanf("%f",&nota3);
    } while (nota3 < 0 || nota3 > 10);  
  }

media = (nota1 + nota2 + nota3)/3;

printf("\nmedia = %d\n\n", media);
 switch (media) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      printf("insuficiente\n");
    break;

    case 6:
    case 7:
      printf("mediocre\n");
    break;

    case 8:
    case 9:
    case 10:
      printf("excelente\n");
    break;
 }

  return 0;
}
