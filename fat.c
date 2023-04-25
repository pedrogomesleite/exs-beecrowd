#include <stdio.h>
#include <math.h>

long long int fact(int x){
    long long int res = 1;
    if(x == 0){
        return 1;
    }
    else{
        for(x; x > 0; x--){
            res = res * x;
        }
        return res;
    }
    
}

int main(){
    int n, n1;
    while (scanf("%d %d", &n, &n1) != EOF)
    {
        printf("%lld\n", fact(n) + fact(n1));
    }
    
}