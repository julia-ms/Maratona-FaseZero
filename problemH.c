#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int num, i;
    long long vet[999];
    long long aux=0;

    scanf("%d", &num);
    for(i=0;i<num;i++){
        scanf("%lld", &vet[i]);
    }

    for(i=0;i<num;i++){
        aux = ((-0.5)+sqrt(0.25+6*(vet[i])))/3.0;
        printf("%lld\n", aux);
    }

    return 0;
}