#include <stdio.h>
#include <string.h>

int main(){
    int n, indice, cont = 0;
    char c;
    int e[31], d[31];
    while(scanf("%d", &n) != EOF){
        cont = 0;

        for(int i = 0; i < 31; i++){
            e[i] = 0;
            d[i] = 0;
        }
        
        for (int i = 0; i < n; i++){

            scanf("%d %c", &indice, &c);
            if (c == 'D'){
                d[indice - 30] = d[indice - 30] + 1;
            } 
            else if (c == 'E'){
                e[indice - 30] = e[indice - 30] + 1;
            }

        }
        for (int i = 0; i < 31; i++){
                if (e[i] < d[i]){
                    cont = e[i] + cont;
                }
                else {
                    cont = d[i] + cont;
                }
            }
        printf("%d\n", cont);
        
    }
}