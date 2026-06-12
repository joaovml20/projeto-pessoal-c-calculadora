#include <stdio.h>
int main(){
    int resposta;
    double numero1,numero2;
    printf("bem-vindo a calculadora, para comecar, digite o primeiro numero: ");
    scanf("%lf",&numero1);
    printf("agora digite o segundo numero: ");
    scanf("%lf",&numero2);
    printf("agora digite a operacao: 1 para somar, 2 para subtracao: ");
    scanf("%d",&resposta);
    switch(resposta){
        case 1:
            printf("resultado da operacao: %.2lf + %.2lf = %.2lf ",numero1,numero2,numero1 + numero2);
            break;
        case 2:
            printf("resultado da operacao: %.2lf - %.2lf = %.2lf",numero1,numero2,numero1 - numero2);
            break;
        default:
            printf("operacao não encontradar");
            break;
    }
    return 0;
}