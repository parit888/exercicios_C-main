#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){

    setlocale(LC_ALL, "portuguese");

    float n1, n2, n3, n4, n5, soma, media;

    printf("Média Escolar:\n");
   
    printf("Digite a 1º Nota:\n");
    scanf("%f", &n1);
    
    printf("Digite a 2º Nota:\n");
    scanf("%f", &n2);

    printf("Digite a 3º Nota:\n");
    scanf("%f", &n3);
    
    printf("Digite a 4º Nota:\n");
    scanf("%f", &n4);
    
    printf("Digite a 5º Nota:\n");
    scanf("%f", &n5);

    soma = n1 + n2 + n3 + n4 + n5;

    media = soma/5;

    if(media < 7){
        printf("Reprovado");
    }

    else{
        printf("Aprovado");
    }
    

    system("pause");
    return 0;
}