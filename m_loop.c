#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

struct player{
    int vida;
    int dano;
    int qtd_item;
};
struct player player;

void print_inicial(void);
void desc_sala(int sele);

int main(){
    player.vida=15;
    player.dano=10;
    player.qtd_item=0;

    char repete;
    
    do{
    print_inicial();
    
    while(1){   
        srand(time(NULL));
        int tipo = rand()%3;
        int sala = rand()%2;
        desc_sala(sala);
        //item
        if(tipo==1){

        }
        //inimigo
        else if(tipo==2){

        }
        //npc
        else{

        }

    }

    printf("\nVoce quer tentar novamente?\n(s/n)\n");
    scanf("%c",&repete);
    }while(repete=='s');
    return 0;
}

void print_inicial(void){
    printf("Voce desce pelos degraus molhados de uma masmorra enquanto a luz da sua tocha tremeluz nas paredes de pedra lisa do calabouco");
    return;
}

void desc_sala(int sele){
    char salas[2][50]={"Voce entra em uma sala repleta de retratos de pessoas que voce desconhece, mas imagina algum dia ter conhecido",
    "Voce entra em uma sala escura e úmida, aonde todos os sons ecoam nas paredes"};
    printf("%s",salas[sele]);
    return;
}
//fazer inventario com alocação inteligente
void item(int sele){
    player.qtd_item++;
    char item[2][20]={"Soqueira suja\n","Camisola esfarrapada"}
    
}