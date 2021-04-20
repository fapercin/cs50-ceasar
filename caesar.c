#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    if(argc != 2)
    {
        printf("Usage: ./caesar key \n");
        return 1;
    }
    else {
        int key = atoi(argv[1]);
        key %= 26;
        string plaintext;
        string ciphertext;
    
        plaintext = get_string("plaintext: ");
        for(int i = 0; i < strlen(plaintext); i++)
        {
            // checking if the plaintext+key is bigger than 122
            // if it is, i need to add 230 to go back to 97. in order to start 
            // counting from 'a' again.
            // the reason why i add 230 is: after 122, there are 5 characters and
            // after 127, char goes to -128.
            if(plaintext[i] + key > 122)
            {
                plaintext[i] += (230 + key);
            }
            else 
            {
                plaintext[i] += key;
            }
            
           
        }
        printf("ciphertext: %s\n", plaintext);
    }
    
}
