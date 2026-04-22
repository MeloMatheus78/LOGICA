#include <stdio.h>

int main() {
    printf("COMBATE\n");

    int opcao;

    printf("Escolha uma opcao:\n1. Atacar\n2. Usar magia de defesa\n3. Curar\n4. Tentar fugir\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("-40 de vida do inimigo\n");
        break;
    
    case 2:
        printf("+10 de reducao de dano pra voce\n");
        break;
    
    case 3:
        printf("+50 de vida\n");
        break;
    
    case 4:
        printf("Voce conseguiu fugir\n");
        break;
    default:
    printf("Opcao invalida, voce perdeu a vez\n");
        break;
    }
    scanf("%d", &opcao);
    return 0;
}
