#include<stdio.h>

main(){

    //Construa um algoritmo que, dado quatro valores, A, B, C e D, o algoritmo imprima o maior e o menor valor. 

    int A= 1, B= 2, C= 3, D= 4;

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
