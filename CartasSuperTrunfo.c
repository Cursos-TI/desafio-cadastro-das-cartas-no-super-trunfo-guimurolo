#include <stdio.h>

//variaveis definidas para o sistema

int main (){
    char estado01, estado02, codigo01[20], codigo02[20], cidade01[20], cidade02[20];
    int populacao01, populacao02, pontosTuristicos01, pontosTuristicos02;
    float area01, area02, pib01, pib02;


    //iniciar descritivo do card 01 de cidade/estado

    printf ("\n\n\nModo Novato - Super Trunfo\n\n\n");
    
    printf ("Digite o nome do primeiro estado:");
    scanf (" %c", &estado01);

    printf ("Digite o código da primeira carta:");
    scanf (" %s", &codigo01);

    printf ("Digite o nome da primeira cidade:");
    scanf (" %s", &cidade01);

    printf ("Digite a população da primeira cidade: ");
    scanf (" %d", &populacao01);

    printf ("Digite área da primeira cidade: ");
    scanf (" %f", &area01);

    printf ("Digite o PIB da primeira cidade: ");
    scanf (" %f", &pib01);

    printf ("Digite a quantidade de pontos turísticos da primeira cidade: ");
    scanf (" %d", &pontosTuristicos01);


   //espaçar as informações inseridas entre os cards
   
   printf ("-------------------------\n");
 
 //iniciar descritivo do card 02 de cidade/estado
 printf("Digite o nome do segundo estado:");
 scanf(" %c", &estado02);

 printf ("Digite o código da segunda carta:");
 scanf (" %s", &codigo02);

 printf ("Digite o nome da segunda cidade:");
 scanf (" %s", &cidade02);

 printf ("Digite a população da segunda cidade: ");
 scanf (" %d", &populacao02);

 printf ("Digite a área da segunda cidade: ");
 scanf (" %f", &area02);

 printf ("Digite o PIB da segunda cidade: ");
 scanf (" %f", &pib02);

 printf ("Digite a quantidade de pontos turísticos da segunda cidade:");
 scanf (" %d", &pontosTuristicos02);

    printf ("\n Carta 01: \n Estado: %c\n Código: %s\n Nome da Cidade: %s\n População: %d habitantes\n Área: %f km²\n PIB: %f bilhões de reais\n Quantidade de Pontos Turísticos: %d\n", estado01, codigo01, cidade01, populacao01, area01, pib01, pontosTuristicos01);
    printf ("\n Carta 02: \n Estado: %c\n Código: %s\n Nome da Cidade: %s\n População: %d habitantes\n Área: %f km²\n PIB: %f bilhões de reais\n Quantidade de Pontos Turísticos: %d\n", estado02, codigo02, cidade02, populacao02, area02, pib02, pontosTuristicos02);


    return 0;


}