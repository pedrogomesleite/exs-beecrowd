#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node{
    struct node *prox;
    struct node *ant;
    int valor;
}node;

typedef struct lista{
    node *inicio;
    node *fim;
}lista;

lista *criar_lista(){
    lista *novo;
    novo = (lista*)calloc(1,sizeof(lista));
    novo->fim = NULL;
    novo->inicio = NULL;
    return novo;
}

node *criar_node(){
    node *novo;
    novo = (node*)calloc(1,sizeof(node));
    return novo;
}

//adicionar no início
void adicionar_inicio(int valor, lista *lista){
    node *novo;
    novo = criar_node();
    if(lista->inicio == NULL){
        novo->prox = lista->inicio;
        novo->ant = lista->inicio;
        lista->inicio = novo;
        lista->fim = novo;
    }
    else{
        lista->inicio->ant = novo;
        novo->prox = lista->inicio;
        novo->ant = NULL;
        lista->inicio = novo;
    }
    novo->valor = valor;
}
//adicionar no final
void adicionar_final(int valor, lista *lista){
    node *novo;
    novo = criar_node();
    if(lista->fim == NULL){
        novo->ant = lista->fim;
        novo->prox = lista->fim;
        lista->fim = novo;
        lista->inicio = novo;
    }
    else{
        lista->fim->prox = novo;
        novo->ant = lista->fim;
        novo->prox = NULL;
        lista->fim = novo;
    }
    novo->valor = valor;
}
//remove no inicio
int remove_inicio(lista *lista){
    node *aux;
    int valor;
    aux = lista->inicio;
    lista->inicio = aux->prox;
    if (lista->inicio != NULL) {
        lista->inicio->ant = NULL;
    } else {
        lista->fim = NULL;
    }
    valor = aux->valor;
    free(aux);
    return valor;
}


void print_lista(lista  *lista){
    node *aux;
    aux = lista->inicio;
    while(aux != NULL){
        printf("%d...", aux->valor);
        aux = aux->prox;
    }
    printf("\n");
}

int main(){
    int n;
    int valor;
    lista *lista;
    lista = criar_lista();
    while(1){
        scanf("%d",&n);
        if(n == 0){
            break;
        }
        for(int i = n; i > 0 ; i--){
            adicionar_inicio(i,lista);
        }
        printf("Discarded cards:");
        
        for(int i = 0; i < n - 1; i++){
            valor = remove_inicio(lista);
            if(i == 0){
                printf(" %d",valor);
            }
            else{
                printf(", %d",valor);
            }
            if(i == n - 2){
                break;
            }
            else{
                valor = remove_inicio(lista);
                adicionar_final(valor, lista);
            }
        }
        printf("\n");
        printf("Remaining card: %d\n",remove_inicio(lista));
    }
    return 0;
}
