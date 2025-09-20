#include <stdio.h>

int main(){

    //Primeira Carta//
    
    char estado[30];
    char codigocarta[10];
    char cidade[50];
    float populacao;
    float areaemkm;
    float pib;
    int pontost;

    //Segunda Carta//

    char estado2[30];
    char codigocarta2[10];
    char cidade2[50];
    float populacao2;
    float areaemkm2;
    float pib2;
    int pontost2;


    //////////////////////////NOME////////////

    char nome[30];
    printf("Olá! Este é o jogo SUPER TRUNFO! \n Primeiramente qual seu nome? \n Digite seu nome aqui: ");
    scanf("%s", nome);


/////PRIMEIRA CARTA/////

    printf("Vamos começar o nosso jogo então %s?\n Quero que comece criando sua carta!\n", nome);
    printf("Qual seria o Estado?\n Digite aqui: ");
    scanf(" %[^\n]", estado);
    printf("%s é legal! Agora qual seria a cidade?\n Digite aqui: ", estado);
    scanf(" %[^\n]", cidade);
    printf("Show de Bola! E qual é a população de(a) %s \n Digite aqui: ", cidade);
    scanf("%f", &populacao);
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
    scanf("%f", &populacao2);
    printf("Caramba! Agora preciso que me diga o tamanho de(a) %s em Km²  \n Digite aqui: ", cidade2);
    scanf("%f", &areaemkm2);
    printf("Ok! Preciso saber o PIB desta cidade. \n Digite aqui: ");
    scanf("%f", &pib2);
    printf("Anotado! Agora preciso saber quantos pontos turísticos existem nesta cidade. \n Digite aqui: ");
    scanf("%d", &pontost2);
    printf("\n \n \n Por fim quero que crie o código da sua carta. Será um código de 3 caracteres. \n Agora só digitar seu código: ");
    scanf("%s", codigocarta2);

    
    //////////////// DENSIDADE POPULACIONAL E PIB PER CAPITA////////////////////////////
    
    float densidadepop = populacao / areaemkm;
    float densidadepop2 = populacao2 / areaemkm2;
    float pibcapita = pib / populacao;
    float pibcapita2 = pib2 / populacao2;


    
    
    
    
    
    
    
    
    printf("\n \n \nParabéns você concluiu a criação da segunda carta SUPER TRUNFO! \n Coloquei também Densidade Populacional e PIB per Capita! \n \n \n Vamos ver abaixo as duas cartas! \n");
    printf("\n Primera Carta: \n - Estado: %s \n - Cidade: %s \n - População: %.2f \n - Área da Cidade: %.2f Km² \n - PIB: R$ %.2f \n - Qtd. Pontos Turísticos: %d \n - Densidade Populacional: %.2f \n - PIB per Capita: R$ %.2f \n - Código da Carta: %s \n", estado, cidade, populacao, areaemkm, pib, pontost, densidadepop, pibcapita, codigocarta);
    printf("\n Segunda carta: \n - Estado: %s \n - Cidade: %s \n - População: %.2f \n - Área da Cidade: %.2f Km² \n - PIB: R$ %.2f \n - Qtd. Pontos Turísticos: %d \n - Densidade Populacional: %.2f \n - PIB per Capita: R$ %.2f \n - Código da Carta: %s \n", estado2, cidade2, populacao2, areaemkm2, pib2, pontost2, densidadepop2, pibcapita2, codigocarta2);
    printf("\n Foi um prazer criar estas cartas com você! Em breve teremos novidades! \n \n \n");

    
}

/* 

- Estado (char) Exemplo: Bahia;
- Nome da cidade (char[]) Exemplo: Forleza;
- População (int); Exemplo: 2.000.000;
- Área em km² (float) Exemplo: 10.000.000;
- PIB (float); Exemplo: 30.0000.000;
- Número de pontos turísticos (int). Exemplo: 50;
- Código da carta (char[]) Exemplo: A01, A02, A05.

*/

/* printf ("%formato1 %formato2 %formato3", variavel1, variavel2, variavel3) Exemplo: printf ("Idade:%d", idade2); 
scanf ("%formato", variavel) Exemplo: scanf("%d", &idade2)

%d: Imprime um inteiro no formato decimal.
%i Equivalente a %d.
%f: Imprime um número de ponto flutueante no formato padrão. Exemplo altura e para definir a quantidade de casas decimais se usa: %.2f (2 é a quantidade.).
%e: Imprime um número de ponto flutuante na notação científica.
%c: Imprime um único caractere.
%s: Imprime uma cadeia (string) de caracteres.Ro

int: Assume um valor inteiro. Exemplo: 1, 2, 3, 4... É uma inicialização.
float: Casas decimais. Exemplo: 1.70
double: Valores maiores com casas decimais. Exemplo: 80,340
char: Caracteres --- Somente o "char" assume apenas um caractere, por isso é utilizado a chaves [] para juntar a quantidade que quero trabalhar.

Depois que já foi iniciado posso definir o valor não necessariamente no mesmo lugar, exemplo a idade que já foi iniciada, mas deixei sem valor e embaixo coloquei o valor dela,
semprecisar dar "int". OBS: Se tiver valor já onde está iniciando, se colocar outtro valor depois, irá substituir


DENSIDADE POPULACIONAL
População / Área da Cidade

PIB PER CAPITA
PIB / pela População

*/
