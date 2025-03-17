#include <stdio.h>

int main(){
 int pontos, pontos2, carta, carta2;
 float  area, area2, pib, pib2, pibc1, pibc2, densip1, densip2, poder1, poder2;
 unsigned long int populacao, populacao2;
 char estado[20], estado2[20], cidade[20], cidade2[20], codigo[5], codigo2[5];     

 printf("DADOS DA CARTA 1\n\n");

 printf("Digite uma letra de A a H para representar o  estado: \n");
 scanf(" %[^\n]", &estado);

 printf("Digite a letra do estado + um número de 01 a 04:\n");
 scanf("%s", &codigo);

 printf("Digite o nome da sua cidade: \n");
 scanf(" %[^\n]", &cidade);

 printf("Digite a população da cidade: \n");
 scanf("%lu", &populacao);

 printf("Digite a área em km da cidade: \n");
 scanf("%f", &area);

 printf("Digite o pib da cidade: \n");
 scanf("%f", &pib);

 printf("Quantos pontos turísticos a cidade possui? \n");
 scanf("%d", &pontos);

 printf("DADOS DA CARTA 2\n\n");

 printf("Digite uma letra de A a H para representar o  estado: \n");
 scanf(" %[^\n]", &estado2);

 printf("Digite a letra do estado + um número de 01 a 04: \n");
 scanf("%s", &codigo2);

 printf("Digite o nome da sua cidade: \n");
 scanf(" %[^\n]", &cidade2);

 printf("Digite a população da cidade: \n");
 scanf("%lu", &populacao2);

 printf("Digite a área em km da cidade: \n");
 scanf("%f", &area2);

 printf("Digite o pib da cidade: \n");
 scanf("%f", &pib2);

 printf("Quantos pontos turísticos a cidade possui? \n");
 scanf("%d", &pontos2);

 densip1 = populacao / area;
 pibc1 = (pib * 1000000000) / populacao;
 densip2 = populacao2 / area2;
 pibc2 = (pib2 * 1000000000) / populacao2;
 poder1 = populacao + area + pib + pontos + (1 / densip1);
 poder2 = populacao2 + area2 + pib2 + pontos2 + (1 / densip2);

 printf("CARTA 1:\n\n");
 printf("Estado: %s\n", estado);
 printf("Código da cidade: %s\n", codigo);
 printf("Cidade: %s\n", cidade);
 printf("População: %.2lu\n", populacao);
 printf("Área em Km²: %.2f Km²\n", area);
 printf("PIB: %.2f bilhões de reais\n", pib);
 printf("Pontos turísticos: %d\n", pontos);
 printf("Densidade populacional:%.2f hab/Km²\n", densip1);
 printf("PIB per capita: %.2f reais\n", pibc1);
 printf("Super poder: %.2f\n\n", poder1);

 printf("CARTA 2:\n\n");
 printf("Estado: %s\n", estado2);
 printf("Código da cidade: %s\n", codigo2);
 printf("Cidade: %s\n", cidade2);
 printf("População: %.2lu\n", populacao2);
 printf("Área em Km²: %.2f Km²\n", area2);
 printf("PIB: %.2f bilhões de reais\n", pib2);
 printf("Pontos turísticos: %d\n", pontos2);
 printf("Densidade populacional:%.2f hab/Km²\n", densip2);
 printf("PIB per capita: %.2f reais\n", pibc2);
 printf("Super poder: %.2f\n\n", poder2);

 printf("COMPARAÇÃO ENTRE AS CARTAS\n\n");
 printf("ATRIBUTO: POPULAÇÃO:\n");
 printf("Carta 1 - %s: %.2lu habitantes\n", cidade, populacao);
 printf("Carta 2 - %s: %.2lu habitantes\n", cidade2, populacao2);
 if (populacao > populacao2) {
    printf("Resultado: Carta 1 venceu!\n\n");
 } 
 else if(populacao < populacao2){
    printf("Resultado: Carta 2 venceu!\n");
 }
 else { 
    printf("Resultado: Empate! \n\n");
 }
 printf("ATRIBUTO: ÁREA EM KM²:\n");
 printf("Carta 1 - %s: %.2f Km²\n", cidade, area);
 printf("Carta 2 - %s: %.2f Km²\n", cidade2, area2);
 if (area > area2) {
    printf("Resultado: Carta 1 venceu!\n\n");
 } else if(area < area2) {
    printf("Resultado: Carta 2 venceu!\n");
 }
 else { 
    printf("Resultado: Empate!\n\n");
 }
 printf("ATRIBUTO: PIB:\n");
 printf("Carta 1 - %s: %.2f bilhões de reais\n", cidade, pib);
 printf("Carta 2 - %s: %.2f bilhões de reais\n", cidade2, pib2);
 if (pib > pib2) {
    printf("Resultado: Carta 1 venceu\n\n");
 } else if(pib < pib2){
    printf("Resultado: Carta 2 venceu!\n");
 }
 else { 
    printf("Resultado: Empate!\n\n");
 }
 printf("ATRIBUTO: PONTOS TURÍSTICOS:\n");
 printf("Carta 1 - %s: %d Pontos turísticos\n", cidade, pontos);
 printf("Carta 2 - %s: %d Pontos turísticos\n", cidade2, pontos2);
 if (pontos > pontos2) {
    printf("Resultado: Carta 1 venceu\n\n");
 } else if( pontos < pontos2){
    printf("Resultado: Carta 2 venceu!\n");
 } 
 else { 
    printf("Resultado: Empate!\n\n");
 }
 printf("ATRIBUTO: DENSIDADE POPULACIONAL:\n");
 printf("Carta 1 - %s: %.2f hab/km²\n", cidade, densip1);
 printf("Carta 2 - %s: %.2f hab/km²\n", cidade2, densip2);
 if (densip1 < densip2) {
    printf("Resultado: Carta 1 venceu\n\n");
 } else if(densip1 > densip2){
    printf("Resultado: Carta 2 venceu!\n");
 }
 else { 
    printf("Resultado: Empate!\n\n");
 }
 printf("ATRIBUTO: PIB PER CAPITA:\n");
 printf("Carta 1 - %s: %.2f PIB per capita\n", cidade, pibc1);
 printf("Carta 2 - %s: %.2f PIB per capita\n", cidade2, pibc2);
 if (pibc1 > pibc2) {
    printf("Resultado: Carta 1 venceu\n\n");
 } 
 else if(pibc1 < pibc2){
printf("Resultado: Carta 2 venceu!\n");

 }
 else { 
    printf("Resultado: Empate!\n\n");
 }
 printf("ATRIBUTO: SUPER PODER:\n");
 printf("Carta 1 - %s: %.2f de poder\n", cidade, poder1);
 printf("Carta 2 - %s: %.2f de poder\n", cidade2, poder2);
 if (poder1 > poder2) {
    printf("Resultado: Carta 1 venceu\n\n");
 } 
 else if(poder1 < poder2){

    printf("Resultado: Carta 2 venceu!\n");
 }
 else { 
    printf("Resultado: Empate!\n\n");
 }
 
    return 0;


}
