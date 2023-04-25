#include <stdio.h>
#include <string.h>

int main(){
    int n;
    int number [150];
    int sum = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        memset(number, '\0', 150);
        scanf("%s", number);
        printf("%s\n", number);
        sum = 0;
        for( int j = 0; j < 150; j++){
            if(number[j]== '\0'){
                break;
            }
            else if(number[j]== '1'){
                sum = sum + 2;
            }
            else if(number[j]== '2'){
                sum = sum + 5;
            }
            else if(number[j]== '3'){
                sum = sum + 5;
            }
            else if(number[j]== '4'){
                sum = sum + 4;
            }
            else if(number[j]== '5'){
                sum = sum + 5;
            }
            else if(number[j]== '6'){
                sum = sum + 6;
            }
            else if(number[j]== '7'){
                sum = sum + 3;
            }
            else if(number[j]== '8'){
                sum = sum + 7;
            }
            else if(number[j]== '9'){
                sum = sum + 6;
            }
            else if(number[j]== '0'){
                sum = sum + 6;
            }
        }
        printf("%d leds", sum);
    }
}