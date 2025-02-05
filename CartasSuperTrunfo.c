#include <stdio.h>


int main() {
    char cidade[11];
    char populacao;
    float area;
    float pib;
    double pontos;

    printf("digite o nome da cidade: \n");
    scanf("%s");

printf("digite a populacao: \n");
scanf("%s", &populacao);

printf("digite a area: \n");
scanf("%f", &area);

printf("digite o pib: \n");
scanf("%f ", &pib);

printf("digite os pontos turisticos:\n");
scanf ("%d", &pontos);


printf("cidade: %s\n");
printf ("popuacao: %s -area %f\n ", populacao,area );
printf ("pib %f - pontos %d \n", pib,pontos);




    return 0;
}
