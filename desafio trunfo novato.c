#include <stdio.h>

int main(){

    printf("Desafio Super Trunfo paises!\n");
    
    char pais[16];
    char estado[15];
    char cidade[14];
    char codigo[4];
    int populacao;
    float area;
    float pib;
    int pontos;

    printf("Digite o nome do pais: \n");
    scanf("%s", &pais);
    
    printf("Digite o nome do estado: \n");
    scanf("%s", &estado);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade);

    printf("Digite o código da cidade: \n");
    scanf("%s", &codigo);

    printf("Digite a população : \n");
    scanf("%d", &populacao);

    printf("Digite o valor da area: \n");
    scanf("%f", &area);
   
    printf("Digite o pib: \n");
    scanf("%f", &pib);

    printf("Digite o número dos pontos turisticos: \n ");
    scanf("%d", &pontos);

    printf("nome: %s\n", pais);
    printf("estado: %s\n", estado);
    printf("cidade: %s\n", cidade);
    printf("codigo: %s\n", codigo);
    printf("populacao: %d\n", populacao);
    printf("area: %f\n", area);
    printf("pib: %F\n", pib);
    printf("pontos turisticos: %d\n", pontos);
    printf("Agora vamos cadastrar outras cartas! \n");
    
    printf("novo commit\n");

    return 0;

}