#include "DATABASE.H"

void fileOccurance(char const *file)
{

    pFile = fopen(file, "r");

    if (pFile != NULL)
    {
        fclose(pFile);
        return;
    }
    else
    {
        printf(ANSI_COLOR_RED Bold "OCCURANCE FILE ERROR:" ANSI_COLOR_RESET ANSI_COLOR_RED
                                   "\"%s\" FILE IS NOT EXIT IN THIS DIRECTORY.\a\n" ANSI_COLOR_RESET,
               file);

        exit(0);
    }
}