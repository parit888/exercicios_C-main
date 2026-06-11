#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");

    float lado;

    printf("CALCULAR ÁREA DO QUADRADO:\n");
    printf("Digite o lado do quadrado: ");
    scanf("%f", &lado);
    printf("\nA área do quadrado é: %f", lado*lado);
    

    system("pause");
    return 0;
}