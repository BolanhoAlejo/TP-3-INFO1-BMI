//https://github.com/BolanhoAlejo/TP-3-INFO1-BMI//

#include <stdio.h>
#define TAM 5

int maximo(float precio[], int i, int max);
int minimo(float precio[], int i, int min);

int main(void) {

    float precio[TAM] = {0};
    int cod[TAM] = {0};
    int max=0;
    int min=0;

    printf("Gestor de productos\n");
    printf("Ingrese %d productos, se solicitara el codigo y precio:\n", TAM);

    for (int i = 0; i < TAM; i++) {
        printf("Ingrese el codigo de barras (1-999999999):");
        scanf("%d", &cod[i]);
        while (cod[i] > 999999999 || cod[i] < 1) {
            printf("Error. El codigo de barras debe estar entre 1 y 999999999\n");
            printf("Ingrese el codigo de barras (1-999999999):");
            scanf("%d", &cod[i]);
        }
        printf("Ingrese el precio:");
        scanf("%f", &precio[i]);
        while (precio[i]<0) {
            printf("Error. El precio debe ser mayor a cero\n");
            printf("Ingrese el precio:");
            scanf("%f", &precio[i]);
        }
        max=maximo(precio, i, max);
        min=minimo(precio, i, min);
    }
    printf("%-10s %-10s\n", "Codigo", "Precio");
    printf("---------------------\n");
    for (int i = 0; i < TAM; i++) {
        printf("%-10d %-10.2f\n", cod[i],  precio[i]);
    }

    printf("Mas caro: [%d] %.2f\n", cod[max], precio[max]);
    printf("Mas barato: [%d] %.2f\n", cod[min], precio[min]);

    return 0;
}

int maximo(float precio[], int i, int max) {
    if (precio[i]>precio[max]) {
        max = i;
    }
    return max;
}

int minimo(float precio[], int i, int min) {
    if (precio[i]<precio[min]) {
        min = i;
    }
    return min;
}
