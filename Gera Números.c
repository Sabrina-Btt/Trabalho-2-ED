#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define tam 10

int main(){

    FILE *f;
    int i;

    f=fopen("numeros.txt","w");
    srand(time(NULL));
       for(i=0;i<tam;i++){
        if(i>=tam/2)
        fprintf(f,"%d ",rand()%2);
        fprintf(f,"%d\n",rand()%(tam/2));
        }
    fclose(f);

    return 0;
}
