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
    pilha->qtd = pilha->qtd + 1;
}

void pop(Pilha *pilha){
    Node *novo;
    if(pilha->qtd > 0){
        novo = pilha->top;
        pilha->top = pilha->top->next;
        pilha->qtd = pilha->qtd - 1;
        free(novo);
    }
    else{
        pilha->qtd = pilha->qtd - 1;
    }
}

void ajuste(Pilha *pilha){
    pilha->qtd = 0;
}


int main() {
    char lista[1000];
    Pilha *pilha;
    pilha = criar_pilha();
    memset(lista ,'\0', 1000);
    while(scanf("%s", lista) != EOF){
        for(int i = 0; i < 1000; i++){
            if(lista[i] == '\0'){
                break;
            }
            else if(lista[i] == '('){
                push(lista[i],pilha);
            }
            else if(lista[i] == ')'){
                if(pilha->qtd > 0){
                    pop(pilha);
                }
                else{
                    pilha->qtd = pilha->qtd + 1; 
                }
                
            }
        }
        if(pilha->qtd != 0){
            printf("incorrect\n");
            for(int i = 0; i < pilha->qtd; i++){
                if(pilha->top == NULL){
                    break;
                }
                else{
                    pop(pilha);
                }
                
            }
            ajuste(pilha);
        }
        else if(pilha->qtd == 0){
            printf("correct\n");
        }
        memset(lista ,'\0', 1000);
    }
}
 