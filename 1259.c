#include <stdio.h>

void sort(int *vetor, int tamanho);
void impar_sort(int *vetor, int esquerda, int direita);
void par_sort(int *vetor, int esquerda, int direita);

int main(){
    /*
    int vetor1[20] = { 8, 24, 12, 16, 19, 6, 28, 7, 29, 22, 13, 30, 5, 9, 26, 4, 25, 2, 10, 1 };
    sort(vetor1,20);
    for(int i = 0; i < 20; i++){
        printf("%d,",vetor1[i]);
    }
    */
    int n;
    scanf("%d",&n);
    int vetor[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&vetor[i]);
    }
    sort(vetor,n);
    printf("\n\n");
    for(int i = 0; i < n; i++){
        printf("%d\n", vetor[i]);
    }
}

void sort(int *vetor, int tamanho){
    int i = 0;
    int j = tamanho - 1;
    int aux;
    while(1){
        
        if(j <= i){
            break;
        }
        if(vetor[i] % 2 == 1 && vetor[j] % 2 == 0){
            aux = vetor[j];
            vetor[j] = vetor[i];
            vetor[i] = aux;
            i++;
        }
        else if(vetor[i] % 2 == 0 && vetor[j] % 2 == 1){
            i++;
            j--;
        }
        else if(vetor[i] % 2 == 1 && vetor[j] % 2 == 1){
            j--;
        }
        else if(vetor[i] % 2 == 0 && vetor[j] % 2 == 0){
            i++;
        }
    }
    
    impar_sort(vetor, i, tamanho);
    par_sort(vetor, 0, i);
}

void impar_sort(int *vetor, int esquerda, int direita) {
    int i = esquerda;
    int j = direita - 1;
    int aux;

    if (j <= i) {
        return;
    }

    while (i < j) {
        while (i < j && vetor[i] >= vetor[j]) {
            i++;
        }
        if (i < j) {
            aux = vetor[i];
            vetor[i] = vetor[j];
            vetor[j] = aux;
        }

        while (i < j && vetor[j] <= vetor[i]) {
            j--;
        }
        if (i < j) {
            aux = vetor[i];
            vetor[i] = vetor[j];
            vetor[j] = aux;
        }
    }

    if (i > esquerda) {
    impar_sort(vetor, esquerda, i);
    }
    if (i < direita - 1) {
        impar_sort(vetor, i, direita);
    }

}


void par_sort(int *vetor, int esquerda, int direita) {
    int i = esquerda;
    int j = direita - 1;
    int aux;

    if (j <= i) {
        return;
    }

    while (i < j) {
        while (i < j && vetor[i] <= vetor[j]) {
            i++;
        }
        if (i < j) {
            aux = vetor[i];
            vetor[i] = vetor[j];
            vetor[j] = aux;
        }

        while (i < j && vetor[j] >= vetor[i]) {
            j--;
        }
        if (i < j) {
            aux = vetor[i];
            vetor[i] = vetor[j];
            vetor[j] = aux;
        }
    }

    if (i > esquerda) {
        par_sort(vetor, esquerda, i);
    }
    if (i < direita - 1) {
        par_sort(vetor, i, direita);
    }
}