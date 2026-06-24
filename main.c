#include <stdio.h>
#include <math.h>

void leituraDeDoisNumeros(double *ponteironumero1,double *ponteironumero2){
    printf("informe o valor do primeiro numero: ");
    scanf("%lf",ponteironumero1);
    printf("agora informe o valor do segundo numero: ");
    scanf("%lf",ponteironumero2);
}

int main(){
    int resposta;
    double numero1,numero2;
    do{
        printf("bem-vindo a calculadora, digite a operacao a ser realizada:\n 0 para fechar a calculadora \n 1 para soma \n 2 para subtrai \n 3 para multiplicar \n 4 para dividir \n 5 para calcular a raiz quadrada \n 6 para calcular uma potencia \n 7 para calcular uma raiz cubica:\n");
        scanf("%d",&resposta);
        switch(resposta){
            case 0:
                printf("fechando a calculadora...");
                printf("\n");
                break;
            case 1:
                leituraDeDoisNumeros(&numero1,&numero2);
                printf("resultado da operacao: %.2lf + %.2lf = %.2lf ",numero1,numero2,numero1 + numero2);
                break;
            case 2:
                leituraDeDoisNumeros(&numero1,&numero2);
                printf("resultado da operacao: %.2lf - %.2lf = %.2lf",numero1,numero2,numero1 - numero2);
                break;
            case 3:
                leituraDeDoisNumeros(&numero1,&numero2);
                printf("resultado da operacacao: %.2lf * %.2lf = %.2lf",numero1,numero2,numero1 * numero2);
                break;
            case 4:
                leituraDeDoisNumeros(&numero1,&numero2);
                if(numero2 == 0){
                printf("impossivel dividir por zero");
                } else {
                    printf("resultado da operacao: %.2lf / %.2lf = %.2lf",numero1,numero2,numero1 / numero2);
                }
                break;
            case 5:
                printf("informe o numero para descobrir sua raiz quadrada: ");
                scanf("%lf",&numero1);
                while(numero1 < 0){
                    printf("impossivel calcular a raiz quadrada de numero negativo, tente novamente com outro numero: ");
                    scanf("%lf",&numero1);
                }
                printf("resultado da operacao: √%.2lf = %.2lf",numero1,sqrt(numero1));
                break;
            case 6:
                leituraDeDoisNumeros(&numero1,&numero2);
                printf("resultado da operacao: %.2lf ^ %.2lf = %.2lf",numero1,numero2,pow(numero1,numero2));
                break;
            case 7:
                printf("informe o numero para descobrir sua raiz cubica: ");
                scanf("%lf",&numero1);
                printf("resultado da operacao: √%.2lf = %.2lf",numero1,cbrt(numero1));
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
