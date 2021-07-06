/*
Crie uma estrutura representando os alunos do curso de Introdução à Programação.
A estrutura deve conter a matrícula do aluno, nome, nota da primeira prova,
nota da segunda prova e nota da terceira prova.

a. Permita ao usuário entrar com os dados de até 10 alunos;

b. Exiba a matrícula, nome e nota do aluno com maior nota na primeira prova,
na segunda prova e na terceira prova;

c. Encontre e escreva o nome do aluno, sua notas e média para o aluno
com maior média geral;

d. Encontre e escreva o nome do aluno, sua notas e média para o aluno
com menor média geral;

e. Para cada aluno, escreva seu nome e média e informe se ele foi aprovado
ou reprovado, considerando média 6 para aprovação.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define tam 3

int main()
{
    printf("\n");
    int maior_m = 0, menor_m = 0, maior1 = 0, maior2 = 0, maior3 = 0, pss, i, entrar_info;

    struct dados_alunos{
        int matricula;
        char nome[30];
        float media, prova1, prova2, prova3;
    };

    struct dados_alunos aluno[tam];

    for(entrar_info = 0; entrar_info < tam; entrar_info++){
        printf("insira o num de matricula do aluno %i: ", entrar_info+1);
        scanf("%i", &aluno[entrar_info].matricula);
        getchar();
        printf("insira o nome do aluno %i: ", entrar_info+1);
        gets(aluno[entrar_info].nome);

        printf("insira a nota da prova 1 do aluno %i: ", entrar_info+1);
        scanf("%f", &aluno[entrar_info].prova1);
        while (aluno[entrar_info].prova1 < 0 || 10 < aluno[entrar_info].prova1){
            do {
                printf("certifique-se que a nota esta entre 0 e 10.\n");
                printf("digite a nota novamente: ");
                scanf("%f", &aluno[entrar_info].prova1);
            } while (aluno[entrar_info].prova1 < 0 || 10 < aluno[entrar_info].prova1);
        }

                printf("insira a nota da prova 2 do aluno %i: ", entrar_info+1);
        scanf("%f", &aluno[entrar_info].prova2);
        while (aluno[entrar_info].prova2 < 0 || 10 < aluno[entrar_info].prova2){
            do {
                printf("certifique-se que a nota esta entre 0 e 10.\n");
                printf("digite a nota novamente: ");
                scanf("%f", &aluno[entrar_info].prova2);
            } while (aluno[entrar_info].prova2 < 0 || 10 < aluno[entrar_info].prova2);
        }

                printf("insira a nota da prova 3 do aluno %i: ", entrar_info+1);
        scanf("%f", &aluno[entrar_info].prova3);
        while (aluno[entrar_info].prova3 < 0 || 10 < aluno[entrar_info].prova3){
            do {
                printf("certifique-se que a nota esta entre 0 e 10.\n");
                printf("digite a nota novamente: ");
                scanf("%f", &aluno[entrar_info].prova3);
            } while (aluno[entrar_info].prova3 < 0 || 10 < aluno[entrar_info].prova3);
        }

        aluno[entrar_info].media = (aluno[entrar_info].prova1 + aluno[entrar_info].prova2 + aluno[entrar_info].prova3)/3;
        printf("\n");
    }

    for(i = 0; i < tam; i++){
        if (aluno[i].media > aluno[maior_m].media){
            maior_m = i;
        }

        if (aluno[i].media < aluno[menor_m].media){
            menor_m = i;
        }
        
        if (aluno[i].prova1 > aluno[maior1].prova1){
            maior1 = i;
        }
        
        if (aluno[i].prova2 > aluno[maior2].prova2){
            maior2 = i;
        }
        
        if (aluno[i].prova3 > aluno[maior3].prova3){
            maior3 = i;
        }
    }

    printf("\naluno com maior nota na primeira prova: %s", aluno[maior1].nome);
    printf("\nmatricula: %i", aluno[maior1].matricula);
    printf("\nnota do aluno na primeira prova: %.1f\n", aluno[maior1].prova1);

    printf("\naluno com maior nota na segunda prova: %s", aluno[maior2].nome);
    printf("\nmatricula: %i", aluno[maior2].matricula);
    printf("\nnota do aluno na segunda prova: %.1f\n", aluno[maior2].prova2);

    printf("\naluno com maior nota na terceira prova: %s", aluno[maior3].nome);
    printf("\nmatricula: %i", aluno[maior3].matricula);
    printf("\nnota do aluno na terceira prova: %.1f\n", aluno[maior3].prova3);

    printf("\naluno com maior media geral: %s", aluno[maior_m].nome);
    printf("\nnotas do aluno nas provas: %.1f, %.1f e %.1f", aluno[maior_m].prova1, aluno[maior_m].prova2, aluno[maior_m].prova3);
    printf("\nmedia do aluno: %.1f\n\n", aluno[maior_m].media);

    printf("\naluno com menor media geral: %s", aluno[menor_m].nome);
    printf("\nnotas do aluno nas provas: %.1f, %.1f e %.1f", aluno[menor_m].prova1, aluno[menor_m].prova2, aluno[menor_m].prova3);
    printf("\nmedia do aluno: %.1f\n\n", aluno[menor_m].media);

    printf("\n\n------------- dados -------------\n");
    for(i = 0; i < tam; i++){
        printf("\n[matricula %i] nome do aluno %i: %s", aluno[i].matricula, i+1, aluno[i].nome);
        printf("\nmedia das notas: %.1f", aluno[i].media);
        if (aluno[i].media >= 6){
            printf("\nresultado do aluno: aprovado");
        }
        else{
            printf("\nresultado do aluno: reprovado");
        }

        printf("\n");
    }
    printf("\n---------------------------------\n");

    printf("\n\n");
}
