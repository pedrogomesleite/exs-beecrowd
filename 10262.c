#include <stdio.h>


int main(){
    unsigned long int x, y;
    while (scanf("%ld %ld", &x, &y)){
        printf("%ld", x^y);
    }
    
}