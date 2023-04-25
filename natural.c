#include <stdio.h>

double sum(long long int x,long long int y){
    long long int som = (( x + y) * (y - x + 1)) / 2 ;
    
    return som;
}

int main(){
    long long int x, y;
    scanf("%lld %lld",&x, &y);
    printf("%.0lf\n", sum(x,y));
}