#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(){
    printf("O hai! How much change is owed?\n");
    
    float valor = round(get_float() * 100);
    
    while(valor <= 0 ){
        printf("How much change is owed?\n");
        valor = round(get_float() * 100);
    }
    
    int nCoins = 0;
    
    while(valor > 0){
        if(valor >= 25){
            valor -= 25;
            nCoins++;
        }
        else if(valor >= 10){
            valor -= 10;
            nCoins++;
        }
        else if(valor >= 5){
            valor -= 5;
            nCoins++;
        }
        else{
            valor -= 1;
            nCoins++;
        }
    }

    printf("%i\n", nCoins);
}