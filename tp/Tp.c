#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PACIENTES 100

// Estrutura para representar um paciente
struct Paciente {
    char nome[500];
    int idade;
    char sintomas[500];
    int grau_urgencia;
};

int main() {
    struct Paciente pacientes[MAX_PACIENTES];
    int pacientesdia;

    printf("Digite o numero de pacientes marcados para o dia hoje (max 100): ");
    scanf("%d", &pacientesdia);

    if (pacientesdia > MAX_PACIENTES) {
        printf("Numero de pacientes excede o limite, você deve cancelar %d consultas.\n", pacientesdia - MAX_PACIENTES);
        return 1;
    }

    // Entrada de dados dos pacientes
    for (int i = 0; i < pacientesdia; i++) {
        printf("Paciente %d:\n", i + 1);
        printf("Nome: ");
        scanf("%s", pacientes[i].nome);
        printf("Idade: ");
        scanf("%d", &pacientes[i].idade);
        printf("Sintomas: ");
        scanf("%s", pacientes[i].sintomas);
        printf("Grau de urgencia (1 a 10): ");
        scanf("%d", &pacientes[i].grau_urgencia);
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
        case 1: // Ordem Alfabética
            for (int i = 0; i < pacientesdia; i++) {
                for (int j = i + 1; j < pacientesdia; j++) {
                    if (strcmp(pacientes[i].nome, pacientes[j].nome) > 0) {
                        // Trocar pacientes
                        struct Paciente temp = pacientes[i];
                        pacientes[i] = pacientes[j];
                        pacientes[j] = temp;
                    }
                }
            }
            break;
        case 2: // Idade Crescente
            for (int i = 0; i < pacientesdia; i++) {
                for (int j = i + 1; j < pacientesdia; j++) {
                    if (pacientes[i].idade > pacientes[j].idade) {
                        // Trocar pacientes
                        struct Paciente temp = pacientes[i];
                        pacientes[i] = pacientes[j];
                        pacientes[j] = temp;
                    }
                }
            }
            break;
        case 3: // Grau de Urgencia Decrescente
            for (int i = 0; i < pacientesdia; i++) {
                for (int j = i + 1; j < pacientesdia; j++) {
                    if (pacientes[i].grau_urgencia < pacientes[j].grau_urgencia) {
                        // Trocar pacientes
                        struct Paciente temp = pacientes[i];
                        pacientes[i] = pacientes[j];
                        pacientes[j] = temp;
                    }
                }
            }
            break;
        case 4: // Pesquisar Paciente
    {
        char termo_pesquisa[500];
        printf("Digite o nome, idade, sintomas ou grau de urgencia a ser pesquisado: ");
        scanf("%s", termo_pesquisa);

        int pacientes_encontrados = 0;

        printf("Resultado da pesquisa:\n");
        for (int i = 0; i < pacientesdia; i++) {
            if (strstr(pacientes[i].nome, termo_pesquisa) ||
                pacientes[i].idade == atoi(termo_pesquisa) ||
                strstr(pacientes[i].sintomas, termo_pesquisa) ||
                pacientes[i].grau_urgencia == atoi(termo_pesquisa)) {
                printf("Paciente %d:\n", i + 1);
                printf("Nome: %s\n", pacientes[i].nome);
                printf("Idade: %d\n", pacientes[i].idade);
                printf("Sintomas: %s\n", pacientes[i].sintomas);
                printf("Grau de urgencia: %d\n", pacientes[i].grau_urgencia);
                pacientes_encontrados++;
            }
        }

        if (pacientes_encontrados == 0) {
            printf("Nenhum paciente corresponde ao critério de pesquisa.\n");
        }
    }
    break;
        default:
            printf("Opcao invalida\n");
            return 1;
    }

    printf("Lista de pacientes ordenados:\n");
    for (int i = 0; i < pacientesdia; i++) {
        printf("Paciente %d:\n", i + 1);
        printf("Nome: %s\n", pacientes[i].nome);
        printf("Idade: %d\n", pacientes[i].idade);
        printf("Sintomas: %s\n", pacientes[i].sintomas);
        printf("Grau de urgencia: %d\n", pacientes[i].grau_urgencia);
    }

    return 0;
}
