#include <stdio.h>

void simplifica(int *num);

int main(){
    int n;
    char op[3];
    int num[4];
    int res[2];
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d %c %d %c %d %c %d",&num[0], &op[0], &num[1],
        &op[1], &num[2], &op[2], &num[3]);
        if(op[1] == '+'){
            res[0] = (num[0]*num[3] + num[2]*num[1]);
            res[1] = num[1]*num[3];
        }
        else if(op[1] == '-'){
            res[0] = num[0]*num[3] - num[2]*num[1];
            res[1] = num[1]*num[3];
        }
        else if(op[1] == '*'){
            res[0] = num[0] * num[2];
            res[1] = num[1] * num[3];
        }
        else if(op[1] == '/'){
            res[0] = num[0] * num[3];
            res[1] = num[1] * num[2];
        }
        printf("%d/%d = ",res[0], res[1]);
        simplifica(res);

    }
}

void simplifica(int *num){
    int maior;
    if(num[0] > num[1]){
        maior = num[0];
    }
    else{
        maior = num[1];
    }
    for(maior; maior > 0; maior--){
        if(num[0] % maior == 0 && num[1] % maior == 0){
            printf("%d/%d\n", num[0]/maior,num[1]/maior);
            return;
        }
    }
}