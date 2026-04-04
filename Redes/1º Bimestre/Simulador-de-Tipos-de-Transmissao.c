#include <stdio.h>

int main(int argc, char *argv[]) {
    int escolha;
    float porcento, quantidade, resul, multi;
 printf("Digite a quantidade de pacotes: \n");
scanf("%f", &quantidade);
while (1) {
    printf("\nEscolha o tipo de transmissao: \n");
printf("Digite 1 para Unicast \n");
    printf("Digite 2 para Multicast \n");
     printf("Digite 3 para Broadcast \n");
    printf("Digite 4 para fechar \n");
    scanf("%i", &escolha);
if (escolha == 1) {
printf("\nO numero de pacotes enviados e: 1 \n");
} else if (escolha == 2) {
            printf("Digite a quantidade de dispositivos: \n");
            scanf("%f", &multi);
resul = quantidade - multi;
porcento = (multi / quantidade) * 100;
printf("\nO numero de pacotes perdidos e: %.2f \n", resul);
            printf("O numero de pacotes recebidos e: %.2f \n", multi);
            printf("O nivel de eficiencia da transmissao e: %.2f%% \n", porcento);
} else if (escolha == 3) {
            printf("\nO numero de pacotes enviados e: %f \n", quantidade);
} else if (escolha == 4) {
            break;
        } else {
            printf("Digite um numero valido!!!\n");
        }
    }
return 0;
}