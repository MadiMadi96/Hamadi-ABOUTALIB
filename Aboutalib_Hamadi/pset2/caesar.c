// program that encipher a plaintext

#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    string key, plain_txt;
    int k, swtch = 0;
    key = argv[1];
    if (argc != 2)
    {
        printf("Give me a valid key, please");
    }
    else
    {
        // Converting string to an integer
        k = atoi(key) % 26;

        // Check if it is a valid key
        if (k == 0)
        {
            printf("Your key is invalid, try again please!\n");
        }

        // Getting the plaintext
        plain_txt = get_string();
        if (plain_txt != NULL)
        {

            // Encrypt and print
            for (int i = 0, n = strlen(plain_txt); i < n; i++)
            {

                // Check if text is upper case or lower case, switch to alphabet and encrypt
                if (isupper(plain_txt[i]))
                {

                    swtch = (((int)plain_txt[i] - 65 + k) % 26) + 65;
                    printf("%c", (char) swtch);
                }
                else if (islower(plain_txt[i]))
                {

                    swtch = (((int)plain_txt[i] - 97 + k) % 26) + 97;
                    printf("%c", (char) swtch);
                }
                else
                {
                    printf("%c", plain_txt[i]);
                }
            }
            printf("\n");
        }
    }
}