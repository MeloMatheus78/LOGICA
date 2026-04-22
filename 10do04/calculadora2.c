#include <stdio.h>

int main() {    

    float numero, dobro;
    char resposta;

    do {
        printf("digite um numero real: ");
        scanf("%f", &numero);

        printf("%.2f", numero * 2);

        printf("\nvoce gostaria de continuar? (s/n): ");

        scanf(" %c", &resposta);

     while (resposta != 's' && resposta != "S" && resposta != 'n' && resposta != 'N') 
     {
        printf("Opcao Invalida!");
        printf("digite uma resposta válida\n");
        scanf(" %c", &resposta);
     }

    } while (resposta == 's' || resposta == 'S');
   
    return 0;
}
