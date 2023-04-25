#include <stdio.h>


int main(){
    unsigned long long int ano;
    while (scanf("%Lf",&ano) != EOF){
        if(ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0)){
            printf("This is leap year.\n");
        }
        if(ano % 15 == 0){
            printf("This is huluculu festival year.\n");
        }
        if((ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0)) && ano % 55 == 0){
            printf("This is bulukulu festival year.\n");
        }
        if((ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0)) == 0 && !(ano % 15 == 0)){
            printf("This is an ordinary year.\n");
        }
    }

    
}