#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){

    setlocale(LC_ALL, "portuguese");

    char nome[50];
    int idade;

    printf("Digite o seu nome: ");
    fgets(nome, 50, stdin);

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade < 15){
        printf("SESI, %s", nome);
    }

    else{
        printf("SENAI, %s", nome);
    }
    

    

    system("pause");
    return 0;
}