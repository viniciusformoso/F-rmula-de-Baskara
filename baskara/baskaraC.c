#include <stdio.h>
#include <math.h>
#include <locale.h>

float delta (int valorA, int valorB, int valorC)
{
        int resultadoDelta;
        resultadoDelta = (pow(valorB,2)) - 4 * valorA * valorC;
        return (resultadoDelta);
}

int main(void) {
setlocale(LC_ALL, "Portuguese");
    int valorA;
    int valorB;
    int valorC;
    int resultadoDelta;

printf("CALCULO DE UMA FUNÇÃO DO SEGUNDO GRAU\n");
printf("Digite o valor de A: ");
scanf("%d", &valorA);

printf("Digite o valor de B: ");
scanf("%d", &valorB);

printf("Digite o valor de C: ");
scanf("%d", &valorC);

resultadoDelta = delta (valorA, valorB, valorC);


printf("O delta é: %d", resultadoDelta);

}
