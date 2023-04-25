#include <stdio.h>


int main(){
    long long int n,n1,r;
    while (scanf("%lli %lli",&n,&n1) != EOF)
    {
        r = n - n1;
        if(r < 0)
            r = r * -1; 
        printf("%lli\n", r);
    }
    
}