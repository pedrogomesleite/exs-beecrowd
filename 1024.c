#include <stdio.h>
#include <string.h>


int main(){
    char palavra[1001], final[1001];
    int n;
    int cont = 0, index;
    scanf("%d", &n);
    for( int i = 0; i < n; i++){
        memset(palavra, '\0', 1001);
        memset(final, '\0', 1001);
        fflush(stdin);
        fgets(palavra, 1000, stdin);

        // mover letras 3 para direita  e pagar tamanho da string
        for( int j = 0; j < 1001; j++){
            if (palavra[j] == ' '){
                continue;
            }
            else if (palavra[j] == 0){
                break;
            }
            if ( (palavra[j] >= 65 && palavra[j] <= 90) || (palavra[j] <= 122 && palavra[j] >= 97)){
                palavra[j] = palavra[j] + 3;
            }
            cont++;
        }
        cont--;
        // reverte e muda da meta pra frente em -1
        index = (cont / 2);

        
        for ( int k = 0; k < 1001; k++){
            
            if ( cont < 0){
                break;
            }
            if ( k > index ){
                final[k] = palavra[cont] - 1;
                printf("%c", final[k]);
                cont--;
            }
            else{
                final[k] = palavra[cont];
                printf("%c", final[k]);
                cont--;
            }
            
        }
        printf("\n");


    }
}