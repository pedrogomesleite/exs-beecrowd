#include <stdio.h>
#include <string.h>

int main(){
    int n ,x;
    int res[2001];

    for(int i = 0; i <= 2001 ; i++){
        res[i] = 0;
    }

    scanf("%d", &n);

    for (int i = 0; i < n; i++){
        scanf("%d", &x);
        res[x] = res[x] + 1;
    }
    for(int i = 0; i < 2001; i++){
        if(res[i] != 0){
            printf("%d aparece %d vez(es)\n", i, res[i]);
        }
    }

    
}