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

imc= kg / (m*m);

printf( "%f \n", imc);
if (imc < 18.5)
{
    printf("Abaixo do peso normal\n");
}

else if(18.5 <= imc && imc <= 24.9)
{
    printf("Peso Normal\n");
}
else if (25 <= imc && imc <= 29.9)
{
    printf("Acima do peso\n");
}
else if (30 <= imc && imc <= 34.9)
{
    printf("Obesidade nivel 1\n");
}
else if (35 <= imc && imc <= 39.9)
{
    printf("Obesidade nivel 2\n");
}
else if (imc >= 40)
{
    printf("Obesidade nivel 3\n");
}

        
// Outra forma: 
//imc=(gramas/1000.0)/(cm/100.0)*(cm/100.0)
//imc=(1.0 *gramas)/(cm*cm)*10.0

}
