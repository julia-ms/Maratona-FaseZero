#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int pil, vol, i=0, j=0;
    int m=0, s=0, ms=0, tempo=0, tempot=0, menor=0, menori=0, prim;
    int vetn[100], vett[100];
    int comp=0, aux=1;

    scanf("%d", &pil);
    scanf("%d", &vol);

    for(i=0;i<pil;i++){
        scanf("%d", &vetn[i]);
        tempot=0;
        for(j=0;j<vol;j++){
            scanf("%d:%d:%d", &m, &s, &ms);
            tempo = m*60000 + s*1000 + ms;
            tempot = tempot + tempo;
            if(menor==0){
                    menor=tempo;
                    menori=i;
                    prim=tempot;
            }
            else if(tempo<menor) {
                    menor=tempo;
                    menori=i;
                    prim=tempot;
            }
            else if(tempo == menor){
                if(prim>tempot){
                    menor=tempo;
                    menori=i;
                    prim=tempot;
                }
            }


        }
          vett[i]=tempot;
    }

     /*for(i=0;i<pil;i++){
        printf("%d\n", vett[i]);
     }*/
    i=menori;
    comp = vett[i];
    //printf("\n%d\n", comp);
    for(i=0;i<pil;i++){
        if(comp>vett[i])
            aux++;
            //printf("%d\n", aux);
    }
    if(aux>10) printf("NENHUM\n");
    else{
        printf("%d\n", vetn[menori]);
    }

    return 0;
}


