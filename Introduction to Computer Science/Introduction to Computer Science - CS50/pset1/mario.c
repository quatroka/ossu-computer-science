#include <stdio.h>
#include <cs50.h>

int main(){
    printf("Height: ");
    int height = get_int();
    
    while(height < 0 || height > 23){
        printf("Retry: ");
        height = get_int();
    }
    
    for(int i = 1; i <= height; i++){
        int spaces = height - i;
        
        for(int j = 0; j < spaces; j++){
            printf(" ");
        }
        
        for(int k = 0; k < (height - spaces); k++){
            printf("#");
        }
        
        printf("  ");
        
        for(int m = 0; m < (height - spaces); m++){
            printf("#");
        }
        
        printf("\n");

    }

}