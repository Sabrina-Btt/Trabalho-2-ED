#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define tam 10

typedef struct{
    int vetor[tam];
    int qnt;
} Vetor;

int busca(Vetor *vet, int valor, int inicio, int fim){
    if(fim < inicio){
        return -1;
    }

    int meio = (inicio+fim)/2;
    if(valor == vet->vetor[meio]){
        return 1;
    }else{
        if(valor < vet->vetor[meio])
            return busca(vet, valor, inicio, meio-1);
        else
            return busca(vet, valor, meio+1, fim);
    }

}

void inserir(Vetor *vet, int valor){
    if(vet->qnt == tam)
        return;

    if(busca(vet, valor, 0, vet->qnt) != -1)
        return;

    int a = 0;

    for(int i = 0; i <= vet->qnt; i++){
        if(valor < vet->vetor[i]){
            a = i;
            break;
        }
    }
    for(int i = vet->qnt; i >= a; i--){
        vet->vetor[i+1] = vet->vetor[i];
    }
    vet->vetor[a] = valor;
    vet->qnt++;
}

void remover(Vetor *vet, int valor){
    if(vet->qnt == 0)
        return;
    int a = -1;
    for(int i = 0; i < vet->qnt; i++){
        if(vet->vetor[i] == valor)
            a = i;
    }

    if(a == -1)
        return;

    for(int i = a; i < vet->qnt; i++){
        vet->vetor[i] = vet->vetor[i+1];
    }
    vet->qnt--;
}

void printVet(Vetor *vet){
    for(int i = 0; i < vet->qnt; i++){
        printf("%d ", vet->vetor[i]);
    }
    printf("\n");
}

int main(){
    Vetor *vet = (Vetor*)malloc(sizeof(Vetor));
    vet->qnt = 0;
    FILE *f = fopen("numeros.txt", "r");
    int i;

    for(i = 0; i < tam/2; i++){
        int a;
        fscanf(f, "%d", &a);
        inserir(vet, a);
    }
    for(i = 0; i < tam/2; i++){
        int a, b;
        fscanf(f, "%d %d\n", &a, &b);

        switch(a){
            case 0: inserir(vet, b); break;
            case 1: remover(vet, b); break;
        }
    }
    printVet(vet);
}

