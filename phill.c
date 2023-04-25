#include <stdio.h>


int main(){
    long long int p[17];
    int n;
    for(int i = 0; i < 17; i++){
        if(i == 0)
            p[i] = 0;
        else if(i == 1)
            p[i] = 1;
        else if(i % 2 == 0)
            p[i] = p[i-2] + p[i-1];
        else if(i % 2 != 0)
            p[i] = p[i-2] * p[i-1]; 
    }

    while (scanf("%d",&n) != EOF)
    {
        printf("\n%lli", p[n-1]);
    }
    
    return 0;
}