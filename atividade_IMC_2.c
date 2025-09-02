#include<stdio.h>
#include<string.h>

int main () {

    int continuar=1;  
    char nome [128];
    int gramas; 
    int cm;
    float imc;
    int idade;

    do{
        printf("\n\tIMC\n\n");
                printf("n - inserir nome\n");
                printf("i - inserir idade\n");
                printf("m - inserir massa corporal\n");
                printf("a - inserir altura\n");
                printf("e - exibir informacoes\n");
                printf("0 - fechar programa\n");

                scanf("%d", &continuar);
                system("cls || clear");
        switch (continuar)
        {
            case 'n':
            puts("Nome: ");
            fflush(stdin);
            fgets(nome, sizeof(nome),stdin); 
            //sizeof(nome) é recomendado
            break;

            case 'i':
            puts("Idade: ");
            fflush(stdin);
            scanf("%d",&idade);
            break;

            case 'm':
            puts("Massa[g]: ");
            fflush(stdin);
            scanf("%d",&gramas);
            break;

            case 'a':
            puts("Altura[cm]: ");
            fflush(stdin);
            scanf("%d",&cm);
            break;

            case 'e':
            
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
            break;
        
            default:
                printf("Digite uma opcao valida\n");
        }
    } while (continuar);    
    // Outra forma: 
    //imc=(gramas/1000.0)/(cm/100.0)*(cm/100.0)
    //imc=(1.0 *gramas)/(cm*cm)*10.0
}
