#include <stdio.h>

int main(){

    printf("Desafio Super Trunfo!\n");
    
    char nome[100];
    int codigo;
    int populacao;
    float area;
    float pib;
    int pontos;

    printf("Digite o nome do pais: \n");
    scanf("%s", &nome);
    
    printf("Digite o código do pais: \n");
    scanf("%d", &codigo);

    printf("Digite a população : \n");
    scanf("%d", &populacao);

    printf("Digite o valor da area: \n");
    scanf("%f", &area);
   
    printf("Digite o pib: \n");
    scanf("%f", &pib);

    printf("Digite o número dos pontos turisticos: \n ");
    scanf("%d", &pontos);

    printf("nome: %s\n", nome);
    printf("codigo: %d\n", codigo);
    printf("populacao: %d\n", populacao);
    printf("area: %f\n", area);
    printf("pib: %F\n", pib);
    printf("pontos turisticos: %d\n", pontos);
    printf("Agora vamos cadastrar outras cartas! \n");
    
    return 0;

}