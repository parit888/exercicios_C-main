#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){

    float peso, metros;

    setlocale(LC_ALL, "portuguese");

    printf("CALCULAR IMC:\n");

    printf("Digite o seu peso em kg:");
    scanf("%f", &peso);
    printf("Digite o sua altura em metros:");
    scanf("%f", &metros);

    printf("Seu IMC é igual a: %f", peso/(metros*metros));

    

    system("pause");
    return 0;
}