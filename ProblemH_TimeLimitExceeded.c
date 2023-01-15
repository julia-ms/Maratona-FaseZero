#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int num, i;
    int vet[999];
    int cartas=2, aux=0;

    scanf("%d", &num);
    for(i=0;i<num;i++){
        scanf("%d", &vet[i]);
    }

    for(i=0;i<num;i++){
    do{
        cartas = cartas + 5 + aux*3;
        aux++;

    }while(cartas<=vet[i]);

    printf("%d\n", aux);
    }

    return 0;
}