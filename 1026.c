#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
    unsigned long long int x, y, z = 0;
    int xr[33], yr[33], res[33];
    int i;
    while (scanf("%lld %lld", &x, &y) != EOF){

        //resetando os vetores
        for (int j = 0; j < 33; j++){
            res[j] = 0;
            xr[j] = 0;
            yr[j] = 0;
        }

        //formando número binário
        i = 0;
        while(x > 0){
            if (x == 2){
                xr[i] = x % 2;
                xr[i + 1] = 1;
                x = 0;
                continue;
            }
            xr[i] = x % 2;
            x = x / 2;
            i++;
        }
        i = 0; 
        while(y > 0){
            if (y == 2){
                yr[i] = y % 2;
                yr[i + 1] = 1;
                y = 0;
                continue;
            }
            yr[i] = y % 2;
            y = y / 2;
            i++;
        }

        //teste
        

        //fazendo o vetor res
        for (int j = 0; j < 33; j++){
            if (xr[j] == yr[j]){
                res[j] = 0;
            }
            else{
                res[j] = 1;
            }
        }

        //teste 2
        

        //resposta 
        z = 0;
        for (int j = 0; j < 33; j++){
            if (res[j] == 1){
                z = z + pow(2, j);
                
            }
        }
        printf("%lld\n", z);

    }

}