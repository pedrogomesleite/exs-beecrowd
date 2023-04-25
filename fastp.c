#include <stdio.h>
#include <math.h>

int prim(long int x){
    if (x == 2){
        return 1;
    }
    else{
        for(int i = 2; i < sqrt(x); i++){
            if(x % i == 0){
                return 0;
            }
            
        }
        return 1;
    }
}

int main(){
    long int n, x;
    scanf("%ld", &n);
    for(int i = 0; i < n; i++){
        scanf("%ld", &x);
        if(prim(x) == 1){
            printf("Prime\n");
        }
        else{
            printf("Not Prime\n");
        }
    }
}