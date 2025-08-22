#include <stdio.h>
#include <math.h>

// https://github.com/BolanhoAlejo/TP-3-INFO1-BMI

int main(void) {
    float peso;
    float altura;

    printf("CALCULADORA DE MASA CORPORAL\n");
	do{
		printf("Ingrese su peso en Kg: ");
		scanf("%f", &peso);
		if(peso < 0){
			printf("Ingrese un peso positivo.\n");
		}
	} while(peso < 0);
	do{
		printf("Ingrese su altura en metros: ");
		scanf("%f", &altura);
		if(altura < 0){
			printf("Ingrese una altura positiva.\n");
		}
	} while(altura < 0);

    float bmi = peso / pow(altura, 2);
    bmi = roundf(bmi * 100) / 100;

    printf("Su indice de masa corporal es: %.2f\n", bmi);

    printf("Indice | Condicion \n");
    printf("-------------------- \n");
    printf("<18.5 | Bajo peso \n");
    printf("18.5 a 24.9 | Normal \n");
    printf("25.0 a 29.9 | Sobrepeso \n");
    printf(">=30 | Obesidad \n");
    
    if(bmi<18.5){
        printf("Ud presenta Bajo peso.\n");
    }else{
        if(bmi>=18.5 && bmi<=24.9){
            printf("Ud presenta un peso Normal.\n");
        }else{
            if(bmi>=25.0 && bmi<=29.9){
                printf("Ud presenta Sobrepeso.\n");
            }else{
                if(bmi>=30){
                    printf("Ud presenta Obesidad.\n");
                }
            }
        }
    }
 
printf("Hasta luego!\n");

    return 0;
}
