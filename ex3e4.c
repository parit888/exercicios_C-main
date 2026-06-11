#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){

    setlocale(LC_ALL, "portuguese");

    int i;

    printf("TABUADA DO 9");
    for(i = 0; i <= 10; i++){
        printf("\n9 X %2d = %3d", i, (9*i));
    }
    printf("\n\nTABUADA DO 7");
    for(i = 0; i <= 10; i++){
        printf("\n7 X %2d = %3d", i, (7*i));
    }
    printf("\n");


    

    system("pause");
    return 0;
}