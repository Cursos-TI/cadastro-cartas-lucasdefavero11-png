#include <stdio.h>

int main(){

    //Primeira Carta//
    char estado[30];
    char codigocarta[10];
    char cidade[50];
    unsigned long int populacao;
    float areaemkm;
    float pib;
    int pontost;
    unsigned long int SuperPoder;

    //Segunda Carta//
    char estado2[30];
    char codigocarta2[10];
    char cidade2[50];
    unsigned long int populacao2;
    float areaemkm2;
    float pib2;
    int pontost2;
    unsigned long int SuperPoder2;


    //////////////////////////      NOME    //////////////////////////

    char nome[30];
    printf("Olá! Este é o jogo SUPER TRUNFO! \n Primeiramente qual seu nome? \n Digite seu nome aqui: ");
    scanf("%s", nome);
    
    
    //////////////////////////    PRIMEIRA CARTA    //////////////////////////

    printf("Vamos começar o nosso jogo então %s?\n Quero que comece criando sua carta!\n", nome);
    printf("Qual seria o Estado?\n Digite aqui: ");
    scanf(" %[^\n]", estado);
    printf("%s é legal! Agora qual seria a cidade?\n Digite aqui: ", estado);
    scanf(" %[^\n]", cidade);
    printf("Show de Bola! E qual é a população de(a) %s \n Digite aqui: ", cidade);
    scanf("%d", &populacao);
    printf("Caramba! Agora preciso que me diga o tamanho de(a) %s em Km² \n Digite aqui: ", cidade);
    scanf("%f", &areaemkm);
    printf("Ok! Agora preciso saber o PIB desta cidade. \n Digite aqui: ");
    scanf("%f", &pib);
    printf("Anotado! Agora preciso saber quantos pontos turísticos existem nesta cidade. \n Digite aqui: ");
    scanf("%d", &pontost);
    printf("\n \n \n Por fim quero que crie o código da sua carta. Será um código de 3 caracteres. \n Agora só digitar seu código: ");
    scanf("%s", codigocarta);
    printf("\n Parabéns você concluiu a criação da sua primeira carta SUPER TRUNFO! \n \n \n Agora vamos criar sua segunda? Vamos lá!\n \n");

/////SEGUNDA CARTA/////


        printf("Qual seria o Estado agora?\n Digite aqui: ");
    scanf(" %[^\n]", estado2);
    printf("%s também gosto! Agora escolha a cidade?\n Digite aqui: ", estado2);
    scanf(" %[^\n]", cidade2);
    printf("Show! E qual é a população de(a) %s \n Digite aqui: ", cidade2);
    scanf("%d", &populacao2);
    printf("Caramba! Agora preciso que me diga o tamanho de(a) %s em Km²  \n Digite aqui: ", cidade2);
    scanf("%f", &areaemkm2);
    printf("Ok! Preciso saber o PIB desta cidade. \n Digite aqui: ");
    scanf("%f", &pib2);
    printf("Anotado! Agora preciso saber quantos pontos turísticos existem nesta cidade. \n Digite aqui: ");
    scanf("%d", &pontost2);
    printf("\n \n \n Por fim quero que crie o código da sua carta. Será um código de 3 caracteres. \n Agora só digitar seu código: ");
    scanf("%s", codigocarta2);

    
    //////////////// DENSIDADE POPULACIONAL E PIB PER CAPITA///////////////////////////
    
    float densidadepop = populacao / areaemkm;
    float densidadepop2 = populacao2 / areaemkm2;
    float pibcapita = pib / populacao;
    float pibcapita2 = pib2 / populacao2;

    int Resultado;

//////////////// Super Poder da Carta ///////////////////////////

    SuperPoder =  areaemkm + pib + pontost + pibcapita + (1 / densidadepop);
    SuperPoder2 = areaemkm2 + pib2 + pontost2 + pibcapita2 + (1 / densidadepop2);
    Resultado = SuperPoder > SuperPoder2;

   //////////////// Conclusão cartas. ///////////////////////////    
    
    printf("\n \n \nParabéns você concluiu a criação da segunda carta SUPER TRUNFO! \n Coloquei também Densidade Populacional e PIB per Capita! \n \n \n Vamos ver abaixo as duas cartas! \n");
    printf("\n Primera Carta: \n - Estado: %s \n - Cidade: %s \n - População: %d \n - Área da Cidade: %.2f Km² \n - PIB: R$ %.2f \n - Qtd. Pontos Turísticos: %d \n - Densidade Populacional: %.2f \n - PIB per Capita: R$ %.2f \n - Código da Carta: %s \n \n Super Poder: %d \n", estado, cidade, populacao, areaemkm, pib, pontost, densidadepop, pibcapita, codigocarta, SuperPoder);
    printf("\n Segunda carta: \n - Estado: %s \n - Cidade: %s \n - População: %d \n - Área da Cidade: %.2f Km² \n - PIB: R$ %.2f \n - Qtd. Pontos Turísticos: %d \n - Densidade Populacional: %.2f \n - PIB per Capita: R$ %.2f \n - Código da Carta: %s \n \n Super Poder: %d", estado2, cidade2, populacao2, areaemkm2, pib2, pontost2, densidadepop2, pibcapita2, codigocarta2, SuperPoder2);
    printf("\n \nResultado: %d \n", Resultado);

//////////////// Comparação Carta 1 e 2 População ///////////////////////////   

    printf("\nAgora vamos fazer a comparação da População da Cartas!\n");
    printf("Carta1 tem a população de: %d\n", populacao);
    printf("Carta2 tem a população de: %d\n", populacao2);
    if (populacao > populacao2){
        printf("Carta 1 (%s) venceu!", cidade);
    } else {
        printf("Carta 2 (%s) venceu!", cidade2);
    }

    
}
