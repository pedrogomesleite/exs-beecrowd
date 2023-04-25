#include <stdio.h>
#include <math.h>

int main(){
    int n, x;
    double r = 0, aux;
    unsigned long long int res;
    
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&x);

        /*for (int j = 0; j < x; j++)
        {
            aux = pow(2, j);
            //printf("%lf\n", aux);
            r = r + aux;
        }
        //printf("%lf\n", r);
        r = r / 1000;
        //printf("%lf\n", r);
        res = r / 12;*/

        res = pow(2, x) / 12000;
    
        printf("%lld kg\n", res);
        
    }
    
}