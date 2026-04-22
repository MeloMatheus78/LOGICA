#include <stdio.h>

int main() {
    printf("CALCULADORA\n");

    printf("Digite um numero: ");
    float numero1;
    scanf("%d", &numero1);

    printf("Digite outro numero: ");
    float numero2;
    scanf("%d", &numero2);

    printf("Escolha uma opcao:\n1. Soma\n2. Subtracao\n3. Multiplicacao\n4. Divisao\n");
    int operador;
    
    float resultado;
    
    do {
        
        scanf("%d", &operador);
        switch (operador)
        {
            case 1:
                resultado = numero1 + numero2;
                break;
    
            case 2:
                resultado = numero1 - numero2;
                break;
    
            case 3:
                resultado = numero1 * numero2;
                break;
    
            case 4:
                if (numero2 == 0) {
                    printf("Nao e possivel dividir por zero, tente outra operacao\n");
                    break;
                }
                resultado = numero1 / numero2;
                break;

            default:
                printf("Opcao invalida, tente novamente\n");
                break;
        }
    } while(numero2 == 0 && operador == 4 || operador < 1 || operador > 4);
    
    printf("Resultado: %.2f", resultado);

    scanf("%d", &operador);
    //sem funcao, apenas para evitar que o programa feche, nao consegui fazer rodar no terminal, só no .exe
    return 0;
}