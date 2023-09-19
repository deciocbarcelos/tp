#include <stdio.h>
#include <stdlib.h>

#define MAX_PACIENTES 100 

int main() {
    int pacientesdia, i;

    printf("Digite o numero de pacientes marcados para o dia hoje (max 100): ");
    scanf("%d", &pacientesdia);

    if (pacientesdia > MAX_PACIENTES) {
        printf("Numero de pacientes excede o limite, você deve cancelar %d consultas.\n", pacientesdia-100);
        return 1;
    }

    char nomes[MAX_PACIENTES][500];
    int idades[MAX_PACIENTES];
    char sintomas[MAX_PACIENTES][500];
    int grau_urgencia[MAX_PACIENTES];

    int contador = 0;

    printf("Digite o nome dos pacientes com horario marcado:\n");
    for (i = 0; i < pacientesdia; i++) {
        scanf("%s", nomes[i]);
    }

    printf("Digite as idades dos pacientes:\n");
    for (i = 0; i < pacientesdia; i++) {
        scanf("%d", &idades[i]);
    }

    printf("Digite os sintomas dos pacientes:\n");
    for (i = 0; i < pacientesdia; i++) {
        scanf("%s", sintomas[i]);
    }

    printf("Digite o grau de urgencia do paciente de 1 a 10:\n");
    for (i = 0; i < pacientesdia; i++) {
        scanf("%d", &grau_urgencia[i]);
    }

    for (i = 0; i < pacientesdia; i++) {
        printf("Paciente %d:\n", i + 1);
        printf("Nome: %s\n", nomes[i]);
        printf("Idade: %d\n", idades[i]);
        printf("Sintomas: %s\n", sintomas[i]);
        printf("Grau de urgencia: %d\n", grau_urgencia[i]);
    }

    return 0;
}
