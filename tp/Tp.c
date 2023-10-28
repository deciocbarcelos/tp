#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PACIENTES 100

int main() {
    int pacientesdia, i;

    printf("Digite o numero de pacientes marcados para o dia hoje (max 100): ");
    scanf("%d", &pacientesdia);

    if (pacientesdia > MAX_PACIENTES) {
        printf("Numero de pacientes excede o limite, você deve cancelar %d consultas.\n", pacientesdia - MAX_PACIENTES);
        return 1;
    }

    char nomes[MAX_PACIENTES][500];
    int idades[MAX_PACIENTES];
    char sintomas[MAX_PACIENTES][500];
    int grau_urgencia[MAX_PACIENTES];
    char pesquisa[500];

    int contador = 0;

    printf("Digite os dados dos pacientes:\n");
    for (i = 0; i < pacientesdia; i++) {
        printf("Paciente %d:\n", i + 1);
        printf("Nome: ");
        scanf("%s", nomes[i]);
        printf("Idade: ");
        scanf("%d", &idades[i]);
        printf("Sintomas: ");
        scanf("%s", sintomas[i]);
        printf("Grau de urgencia (1 a 10): ");
        scanf("%d", &grau_urgencia[i]);
    }

    int opcao;
    printf("Escolha uma opcao para listar ou pesquisar os pacientes:\n");
    printf("1. Ordem Alfabética\n");
    printf("2. Idade Crescente\n");
    printf("3. Grau de Urgencia Decrescente\n");
    printf("4. Pesquisar Paciente\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:  // Ordem Alfabética
            // Implemente a ordenação por ordem alfabética aqui
            break;
        case 2:  // Idade Crescente
            // Implemente a ordenação por idade crescente aqui
            break;
        case 3:  // Grau de Urgencia Decrescente
            // Implemente a ordenação por grau de urgência decrescente aqui
            break;
        case 4:

            printf("Digite o nome, idade, sintomas ou grau de urgencia a ser pesquisado: ");
            scanf("%s", pesquisa);

            printf("Resultado da pesquisa:\n");
            for (i = 0; i < pacientesdia; i++) {
                if (strcmp(nomes[i], pesquisa) == 0 || idades[i] == atoi(pesquisa) ||
                    strcmp(sintomas[i], pesquisa) == 0 || grau_urgencia[i] == atoi(pesquisa)) {
                    printf("Paciente %d:\n", i + 1);
                    printf("Nome: %s\n", nomes[i]);
                    printf("Idade: %d\n", idades[i]);
                    printf("Sintomas: %s\n", sintomas[i]);
                    printf("Grau de urgencia: %d\n", grau_urgencia[i]);
                }
            }
            break;
        default:
            printf("Opcao invalida\n");
            return 1;
    }

    return 0;
}
