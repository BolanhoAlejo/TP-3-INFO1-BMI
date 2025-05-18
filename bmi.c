#include <stdio.h>
#include <math.h>

int main(void) {
    float peso;
    float altura;

    printf("CALCULADORA DE MASA CORPORAL\n");
    printf("Ingrese su peso en Kg: ");
    scanf("%f", &peso);
    printf("Ingrese su altura en metros: ");
    scanf("%f", &altura);

    float bmi = peso / pow(altura, 2);
    bmi = roundf(bmi * 100) / 100;

    printf("Su indice de masa corporal es: %.2f\n", bmi);

    printf("Indice | Condicion \n");
    printf("-------------------- \n");
    printf("<18.5 | Bajo peso \n");
    printf("18.5 a 24.9 | Normal \n");
    printf("25.0 a 29.9 | Sobrepeso \n");
    printf(">=30 | Obesidad \n");
 
printf("Hasta luego!\n");

    return 0;
}