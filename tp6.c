#include <stdio.h>
#include <math.h>
#define PI 3.1416

float calcularAreaRectangulo(float longitud, float altura);
float calcularPerimetroRectangulo(float longitud, float altura);
float calcularDiagonalRectangulo(float longitud, float altura);
float calcularAreaCirculo(float radio);
float calcularPerimetroCirculo(float radio);
void resultados(int op, float area, float perimetro, float diagonal);

int main(){

    int run=1;
    int op;
    float longitud, altura, perimetro, area, radio, diagonal;
    printf("-Bienvenidos a calculo de area-\n");

while(run==1){
    printf("1- Calculo de rectangulo.\n");
    printf("2- Calculo de circulo.\n");
    printf("3- Salir.\n");
    scanf("%d", &op);
    switch(op){
        case 1: printf("Ingrese la longitud del rectangulo: ");
                scanf("%f", &longitud);
                printf("Ingrese la altura del rectangulo:");
                scanf("%f", &altura);
                area=calcularAreaRectangulo(longitud, altura);
                perimetro=calcularPerimetroRectangulo(longitud, altura);
                diagonal=calcularDiagonalRectangulo(longitud, altura);
                resultados(op, area, perimetro, diagonal);
            break;
        case 2: printf("Ingrese el radio del circulo: ");
                scanf("%f", &radio);
                area=calcularAreaCirculo(radio);
                perimetro=calcularPerimetroCirculo(radio);
                resultados(op, area, perimetro, diagonal);
            break;
        case 3: printf("-Gracias por usar!-");
                run=0;
            break;
        default:
            break;
    }
}
    return 0;
}

float calcularAreaRectangulo(float longitud, float altura){
    float area;
    area=(longitud*altura);
    return area;
}

float calcularPerimetroRectangulo(float longitud, float altura){
    float perimetro;
    perimetro=2*(longitud+altura);
    return perimetro;
}

float calcularDiagonalRectangulo(float longitud, float altura){
    float diagonal;
    diagonal=sqrt(pow(longitud, 2)+pow(altura, 2));
    return diagonal;
}

float calcularAreaCirculo(float radio){
    float area;
    area=PI*pow(radio, 2);
    return area;
}

float calcularPerimetroCirculo(float radio){
    float perimetro;
    perimetro=PI*(2*radio);
    return perimetro;
}

void resultados(int op, float area, float perimetro, float diagonal){
    if(op==1){
        printf("El area del rectangulo es: %.2f\n", area);
        printf("El perimetro del rectangulo es: %.2f\n", perimetro);
        printf("La diagonal del rectangulo es: %.2f\n", diagonal);
        printf("-----------------------------------------------\n");
    }
    if(op==2){
        printf("El area del circulo es: %.2f\n", area);
        printf("El perimetro del circulo es: %.2f\n", perimetro);
        printf("-----------------------------------------------\n");
    }
}