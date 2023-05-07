#include <stdio.h>
#include <math.h>
#include <locale.h>

int delta (int valorA, int valorB, int valorC)
{
        int resultadoDelta;
        resultadoDelta = (pow(valorB,2)) - 4 * valorA * valorC;
        return (resultadoDelta);
}

int main(void) {
setlocale(LC_ALL, "Portuguese");
    int valorA, valorB, valorC;
    int x1, x2;
    int resultadoDelta;

printf("-----CALCULO DE UMA FUNÇÃO DO SEGUNDO GRAU-----\n");
printf("Digite o valor de A: ");
scanf("%d", &valorA);

printf("Digite o valor de B: ");
scanf("%d", &valorB);

printf("Digite o valor de C: ");
scanf("%d", &valorC);

resultadoDelta = delta (valorA, valorB, valorC);
printf("O delta é: %d\n", resultadoDelta);

if (resultadoDelta > 0){
    printf("A função tem como resultado duas raízes reais.\n");
    x1 = (pow(valorB,2) + resultadoDelta) / 2 * valorA;
    x2 = (pow(valorB,2) - resultadoDelta) / 2 * valorA;
    printf("As raízes da função são: %d e %d.", x1, x2);
}

else if(resultadoDelta == 0){
    printf("Afunção tem como resultado apenas uma raíz real.\n");
    x1 = (pow(valorB,2) + 0) / 2 * valorA;
    printf("A raiz da função é: %d.", x1);
}

else {
    printf("A função não tem nenhuma raíz real.");
}
}
