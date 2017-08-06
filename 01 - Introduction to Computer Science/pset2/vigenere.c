#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[]) {
    if (argc != 2) {
        printf("Usage: ./vigenere k");
        return 1;
    }
    
    string keyword = argv[1];
    int keywordlength = strlen(keyword);
    
    for (int i = 0; i < keywordlength; i++)
    {   
        if (isalpha(keyword[i]) == false)
        {
            printf("Keyword must only contain letters A-Z and a-z\n");
            return 1;
        }
    } 
    
    printf("plain text: ");
    string s = get_string();
    printf("ciphertext: ");

    // Key Codes
    int keycodes[keywordlength];
    for(int i = 0; i < keywordlength;i++)
    {
        keycodes[i] = toupper(keyword[i]) - 65;
    }
    
    int index = 0;
    
    for(int i = 0, n = strlen(s); i < n; i++) {
        
        if(!isalpha(s[i])) {
           printf("%c", s[i]); 
        }
        else {
            
            if (index == keywordlength) {
                index = 0;
            }
            
            
            if(islower(s[i])) {
                printf("%c", ((((s[i] - 97) + keycodes[index]) % 26) + 97));
            }
            else if(isupper(s[i])) {
                printf("%c", ((((s[i] - 65) + keycodes[index]) % 26) + 65));
            }
                
            else {
                printf("%c", s[i]);
            }

            index++;
        }

    }
        
    printf("\n");    
    return 0;
}
