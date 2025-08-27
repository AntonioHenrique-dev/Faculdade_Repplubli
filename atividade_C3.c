#include<stdio.h>
#include<string.h>

int main () {
    
char nome [128];
int gramas; 
int cm;
float imc;
int idade;

puts("Nome: ");
fflush(stdin);
fgets(nome, sizeof(nome),stdin); 
//sizeof(nome) é recomendado

puts("Idade: ");
fflush(stdin);
scanf("%d",&idade);

puts("Massa[g]: ");
fflush(stdin);
scanf("%d",&gramas);

puts("Altura[cm]: ");
fflush(stdin);
scanf("%d",&cm);

float kg= gramas/1000.0;
float m= cm/100.0;

imc= kg/m*m;

printf("imc=%f",imc);

// Outra forma: 
//imc=(gramas/1000.0)/(cm/100.0)*(cm/100.0)
//imc=(1.0 *gramas)/(cm*cm)*10.0
}