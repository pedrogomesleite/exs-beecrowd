#include <stdio.h>
#include <string.h>

int main(){
    int n,n1,aux;
    char j;
    char tes[13] = "             ";
    scanf("%d %d",&n,&n1);
    for(int i = 12; i >=0 ; i--){
        if(n == 0){
            break;
        }
        aux = n % 10;
        j = aux + '0';
        
        tes[i] = j;
        /*if(i % 4 == 0 && i != 0){
            tes[i] = ',';
            continue;
        }
        else{
            tes[i] = j;
        }*/

        n = n - aux;
        n = n / 10;
        printf("%d\n",aux);
        printf("%d\n",n);
        
    }
    printf("\n%s\n",tes);
    if(n1 < 10)
        printf("$%s.0%d",tes,n1);
    else
        printf("$%s.%d",tes,n1);
}