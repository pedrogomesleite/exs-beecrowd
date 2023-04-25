#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node{
    char v;
    struct Node *next;
}Node;

typedef struct Pilha{
    Node *top;
    int qtd;
}Pilha;

Pilha *criar_pilha(){
    Pilha *novo;
    novo = (Pilha*)malloc(sizeof(Pilha));
    novo->top = NULL;
    novo->qtd = 0;
    return novo;
}

Node *criar_node(){
    Node *novo;
    novo = (Node*)malloc(sizeof(Node));
    return novo;
}

void push(char v, Pilha *pilha){
    Node *novo;
    novo = criar_node();
    novo->v = v;
    novo->next = pilha->top;
    pilha->top = novo;
}

void pop(Pilha *pilha){
    Node *novo;
    novo = pilha->top;
    pilha->top = pilha->top->next;
    pilha->qtd = pilha->qtd + 1;
    free(novo);
}


int main(){
    char lista[1000];
    int n;
    Pilha *pilha;
    pilha = criar_pilha();
    scanf("%d",&n);
    for(int i = 0; i < n; i++){
        memset(lista,'\0',1000);
        scanf("%s",lista);
        for(int i = 0; i < 1000; i++){
            if(lista[i] == '\0'){
                break;
            }
            else if(lista[i] == '<'){
                push(lista[i],pilha);
            }
            else if(lista[i] == '>'){
                if(pilha->top != NULL){
                    pop(pilha);
                }
            }

        }
        printf("%d\n",pilha->qtd);
        while(pilha->top != NULL){
            pop(pilha);
        }
        pilha->qtd = 0;
    }
    return 0;
}
