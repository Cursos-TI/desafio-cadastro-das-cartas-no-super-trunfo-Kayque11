#include <stdio.h>

int main() {

//declaração de variaves para carta 1
char estado1;
char codigo1[4];
char nomedacidade1[50];
int populacao1;
float area1;
float pib1;
int pontosturisticos1; 

//declaração de variaves para carta 2 
char estado2;
char codigo2[4];
char nomedacidade2[50];
int populacao2;
float area2;
float pib2;
int pontosturisticos2;

//entrada de dados para carta 1 
printf("cadastro da carta 1:\n");
printf("Estado (A-H):\n");
scanf(" %c", &estado1);

printf("Nome da cidade;\n");
scanf("%s", &nomedacidade1);

printf("populção:\n");
scanf("%d", &populacao1);

printf("area por mk2:\n");
scanf("%f", &area1);

printf("Pib:\n");
scanf("%f", &pib1);

printf("Pontos turisticos:\n");
scanf("%d", &pontosturisticos1);

//entrada de dados para carta 2
printf("cadastro da carta 2:");

printf("Estado (A-H):\n");
scanf(" %c", &estado2);

printf("Nome da cidade;\n");
scanf("%s", &nomedacidade2);

printf("populção:\n");
scanf("%d", &populacao2);

printf("area por mk2:\n");
scanf("%f", &area2);

printf("Pib:\n");
scanf("%f", &pib2);

printf("Pontos turisticos:\n");
scanf("%d", &pontosturisticos2);


printf("dados carta 1:\n");

printf("estado: %c \n", estado1);
printf("Nome da cidade: %s\n", nomedacidade1);
printf("populção: %d\n", populacao1);
printf("area por mk2: %.2f\n", area1);
printf("Pib: %.2f\n", pib1);
printf("Pontos turisticos: %d\n", pontosturisticos1);


printf("dados carta 2:\n");

printf("estado: %c \n", estado2);
printf("Nome da cidade: %s\n", nomedacidade2);
printf("populção: %d\n", populacao2);
printf("area por mk2: %.2f\n", area2);
printf("Pib: %.2f\n", pib2);
printf("Pontos turisticos: %d\n", pontosturisticos2);

}