#include<stdio.h>

main(){

    //Construa um algoritmo que, dado quatro valores, A, B, C e D, o algoritmo imprima o maior e o menor valor. 

    int A, B, C, D;

    printf("Digite o primeiro numero: ");
    scanf("%d", &A);

    printf("Digite o segundo numero: ");
    scanf("%d", &B);

    printf("Digite o terceiro numero: ");
    scanf("%d", &C);

    printf("Digite o quarto numero: ");
    scanf("%d", &D);

    if((A > B) && (A > C) && (A > D)){
        printf("O maior numero e %d", A);

    }else if((B > A) && (B > C) && (B > D)){
        printf("O maior numero e o numero %d", B);

    }else if((C > A) && (C > B) && (C > D)){
        printf("O maior numero e o numero %d", C);

    }else{
        printf("O maior numero e o numero %d", D);
    }
    
}