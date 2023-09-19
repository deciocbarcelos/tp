#include <stdio.h>
#include <stdlib.h>

int main() {
    int pacientesdia, i;

    printf("Digite o numero de pacientes marcados para o dia hoje: ");
    scanf("%d", &pacientesdia);

    // Declare os arrays após ler o valor de pacientesdia
    char nomes[pacientesdia][500];
    int idades[pacientesdia];
    char sintomas[pacientesdia][500];
    int grau_urgencia[pacientesdia];

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

    printf("Digite o grau de urgencia do paciente de 1 a 10:");
    for(i=0;i<pacientesdia;i++){
            scanf("%d", &grau_urgencia[i]);
    }
    for(i=0;i<pacientesdia;i++){
            printf("Paciente %d:\n", i+1);
    }
    for(i=0;i<pacientesdia;i++){
            printf("Nome: %s\n", nomes[i]);
    }
    for(i=0;i<pacientesdia;i++){
            printf("Idade: %d\n", idades[i]);
    }
    for(i=0;i<pacientesdia;i++){
            printf("Sintomas: %s\n", sintomas[i]);
    }
    for(i=0;i<pacientesdia;i++){
            printf("Grau de urgencia: %d\n", grau_urgencia[i]);
    }a
