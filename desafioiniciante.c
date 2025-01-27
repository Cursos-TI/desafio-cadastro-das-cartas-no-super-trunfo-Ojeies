#include <stdio.h>

int main(){
 int pontos;
 double populacao, area, pib;
 char cidade[30], estado[20], codigo[5];     

 printf("Digite o nome do seu estado: \n");
 scanf("%s", &estado);

 printf("Digite o nome da sua cidade: \n");
 scanf("%s", &cidade);

 printf("Digite a população da cidade: \n");
 scanf("%lf",&populacao);

 printf("Digite a área em km da cidade: \n");
 scanf("%lf", &area);

 printf("Digite o pib da cidade: \n");
 scanf("%lf", &pib);

 printf("Quantos pontos turísticos a cidade possui? \n");
 scanf("%d", &pontos);
 
 printf("Digite o código da cidade:\n");
 scanf("%s", &codigo);

 printf("Estado: %s", estado);
 printf(" - Cidade: %s\n", cidade);
 printf("População: %lf", populacao);
 printf(" - Área em km: %f\n", area);
 printf("PIB: %lf", pib);
 printf(" - Pontos turísticos: %d\n", pontos);
 printf("Código da cidade: %s", codigo);
    return 0;
}
