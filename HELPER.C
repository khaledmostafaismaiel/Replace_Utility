#include "HELPER.H"

char *type_casting(char *word)
{

    for (int i = 0; word[i] != '\0'; ++i)
    {
        word[i] = tolower(word[i]);
    }
    return word;
}