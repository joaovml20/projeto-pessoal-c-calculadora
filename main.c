#include <stdio.h>

int main(){
    int resposta;
    double numero1,numero2;
    do{
        printf("bem-vindo a calculadora, digite a operacao a ser realizada: 0 para fechar a calculadora, 1 para soma, 2 para subtrair, 3 para multiplicar, 4 para dividir: ");
        scanf("%d",&resposta);
        switch(resposta){
            case 0:
                printf("fechando a calculadora...");
                printf("\n");
                break;
            case 1:
                printf("informe o valor do primeiro numero: ");
                scanf("%lf",&numero1);
                printf("agora informe o valor do segundo numero: ");
                scanf("%lf",&numero2);
                printf("resultado da operacao: %.2lf + %.2lf = %.2lf ",numero1,numero2,numero1 + numero2);
                break;
            case 2:
                printf("informe o valor do primeiro numero: ");
                scanf("%lf",&numero1);
                printf("agora informe o valor do segundo numero: ");
                scanf("%lf",&numero2);
                printf("resultado da operacao: %.2lf - %.2lf = %.2lf",numero1,numero2,numero1 - numero2);
                break;
            case 3:
                printf("informe o valor do primeiro numero: ");
                scanf("%lf",&numero1);
                printf("agora informe o valor do segundo numero: ");
                scanf("%lf",&numero2);
                printf("resultado da operacacao: %.2lf * %.2lf = %.2lf",numero1,numero2,numero1 * numero2);
                break;
            case 4:
                printf("informe o valor do primeiro numero: ");
                scanf("%lf",&numero1);
                printf("agora informe o valor do segundo numero: ");
                scanf("%lf",&numero2);
                if(numero2 == 0){
                printf("impossivel dividir por zero");
                } else {
                    printf("resultado da operacao: %.2lf / %.2lf = %.2lf",numero1,numero2,numero1 / numero2);
                }
                break;
            default:
                printf("operacao não encontradar");
                break;
        }
        if(resposta != 0)
            printf("\nrealizando outra operacao... \n");
    } while(resposta != 0);
    return 0;
}