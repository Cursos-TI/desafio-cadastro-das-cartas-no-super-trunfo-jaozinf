#include <stdio.h>

int main(){

    printf("Desafio Super Trunfo paises!\n");
    
    char pais1[15];
    char estadope[19];
    char estadoba[20];
    char estadopb[20];
    char estadopi[20];
    char estadobsb[20];
    char estadosp[20];
    char estadorj[20];
    char estadosc[20];
    char cidade1[81];
    char cidade2[80];
    char cidade3[83];
    char cidade4[85];
    char codigope01[10];
    char codigope02[10];
    char codigope03[10];
    char codigope04[10];
    char codigoba01[10];
    char codigoba02[10];
    char codigoba03[10];
    char codigoba04[10];
    char codigopb01[10];
    char codigopb02[10];
    char codigopb03[10];
    char codigopb04[10];
    char codigopi01[10];
    char codigopi02[10];
    char codigopi03[10];
    char codigopi04[10];
    char codigobs01[10];
    char codigobs02[10];
    char codigobs03[10];
    char codigobs04[10];
    char codigosp01[10];
    char codigosp02[10];
    char codigoso03[10];
    char codigosp04[10];
    char codigorj01[10];
    char codigorj02[10];
    char codigorj03[10];
    char codigorj04[10];
    char codigosc01[10];
    char codigosc02[10];
    char codigosc03[10];
    char codigosc04[10];
    int populacao;
    float area;
    float pib;
    int pontos;

    printf("Digite o nome do pais: \n");
    scanf("%s", &pais1);
    
    printf("Digite o nome do estado: \n");
    scanf("%s", &estadope);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade1);

    printf("Digite o código da cidade: \n");
    scanf("%s", &codigope01);

    printf("Digite a população : \n");
    scanf("%d", &populacao);

    printf("Digite o valor da area: \n");
    scanf("%f", &area);
   
    printf("Digite o pib: \n");
    scanf("%f", &pib);

    printf("Digite o número dos pontos turisticos: \n ");
    scanf("%d", &pontos);

    printf("nome: %s\n", pais1);
    printf("estado: %s\n", estadope);
    printf("cidade: %s\n", cidade1);
    printf("codigo: %s\n", codigope01);
    printf("populacao: %d\n", populacao);
    printf("area: %f\n", area);
    printf("pib: %F\n", pib);
    printf("pontos turisticos: %d\n", pontos);
    
    printf("Agora vamos cadastrar outras cartas! \n");
    printf("Digite o nome do estado: \n");
    scanf("%s", &estadope);
    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade2);
    printf("Digite o codigo da cidade: \n");
    scanf("%s", &codigope02);
    printf("Digite a populacao: \n");
    scanf("%d", &populacao);
    printf("Digite o valor da area: \n");
    scanf("%f", &area);
    printf("Digite o valor do pib: \n");
    scanf("%F", &pib);
    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &pontos);

    printf("estado: %s\n", estadope);
    printf("cidade: %s\n", cidade2);
    printf("Codigo: %d\n", codigope02);
    printf("populacao: %d\n", populacao);
    printf("area: %f\n", area);
    printf("pib: %f\n", pib);
    printf("pontos turisitico: %d\n", pontos);



    printf("novo commit\n");


    return 0;

}