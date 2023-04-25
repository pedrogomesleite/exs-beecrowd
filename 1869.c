#include <stdio.h>
#include <string.h>

int main(){
    unsigned long long int n;
    char res[100];
    int i = 0;
    while (1){
        scanf("%lld", &n);
        if (n == 0){
            printf("%llu\n", n);
            break;
        }
        i = 0;
        do{
            if (n % 32 > 9){
                res[i] = (n % 32) + '7';
            }
            else{
                res[i] = (n % 32) + '0';
            }
            i++;
            n = n / 32;
        } while (n > 0);
        
        for ( i = i - 1 ; i >= 0; i--){
            printf("%c",res[i]);
        }
        printf("\n");
        
    }
    
}
