#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[]) {
    if (argc != 2) {
        printf("Usage: ./caesar k");
        return 1;
    }
    
    int key = atoi(argv[1]);
    
    printf("plain text: ");
    string s = get_string();
    printf("ciphertext: ");
    
    for(int i = 0, n = strlen(s); i < n; i++) {
        if(islower(s[i])) {
            printf("%c", ((((s[i] - 97) + key) % 26) + 97));
        }
        else if(isupper(s[i])) {
            printf("%c", ((((s[i] - 65) + key) % 26) + 65));
        }
            
        else {
            printf("%c", s[i]);
        }
    }
        
    printf("\n");    
    return 0;
}
