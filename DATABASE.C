#include "DATABASE.H"

void fileEmpty(char const *file)
{
    char stilVersion[] = "stilVersion";

    pFile = fopen(file, "r");

    fscanf(pFile, "%[^\n]", stilVersion);

    if (strcmp(stilVersion, "stilVersion") == 0)
    {
        printf(ANSI_COLOR_RED Bold "LOGICAL ERORR:" ANSI_COLOR_RESET ANSI_COLOR_RED " \"%s\" FILE IS EMPTY.\a\n" ANSI_COLOR_RESET, file);
        fclose(pFile);

        exit(0);
    }
    fclose(pFile);
}

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
        printf(ANSI_COLOR_RED Bold "OCCURANCE FILE ERROR:" ANSI_COLOR_RESET ANSI_COLOR_Bright_Yellow
                                   "\"%s\" FILE IS NOT EXIT IN THIS DIRECTORY.\a\n" ANSI_COLOR_RESET,
               file);

        exit(0);
    }
}

void b_Implemit(char *file)
{
    char singelline[1000 * LONGESTWORDINTHEWORLD];
    int pos;

    int size = 0;
    for (int i = 0; file[i] != '.'; ++i)
    {
        ++size;
    }

    char backupfilename[size];

    strncpy(backupfilename, file, size);

    strcat(backupfilename, "1.txt");

    pFile = fopen(backupfilename, "r");
    if (pFile != NULL)
    {
        printf(ANSI_COLOR_Bright_Yellow "\"%s\" IS BACK UP FOR \"%s\".\n" ANSI_COLOR_RESET, backupfilename, file);
        printf(ANSI_COLOR_RED Bold "BACK UP FILE ERROR:" ANSI_COLOR_RESET ANSI_COLOR_Bright_Yellow "THE BACKUPED FILE IS ARREADY EXIST,CHANGE IT'S NAME,PLEASE !.\n\a" ANSI_COLOR_RESET ANSI_COLOR_RED);
        exit(0);
    }
    else
    {

        FILE *pointer;

        pFile = fopen(backupfilename, "w");
        pointer = fopen(file, "r");

        while (fgets(singelline, 1000 * LONGESTWORDINTHEWORLD, pointer) != NULL)
        {
            fprintf(pFile, "%s", singelline);
        }

        fclose(pFile);

        printf(ANSI_COLOR_GREEN "\"%s\" IS BACK UP FOR \"%s\".\n" ANSI_COLOR_RESET, backupfilename, file);
    }
}

void f_Implemit(char *file, fileContain *cursor)
{
    if (nOf_i = 1)
    {
        while (cursor != NULL)
        {
            if (strcmp(type_casting(cursor->word), type_casting(from)) == 0)
            {
                strcpy(cursor->word, to);
                fileUpdate(file, head_fileContain);

                return;
            }
            cursor = cursor->next;
        }
    }
    else
    {
        while (cursor != NULL)
        {
            if (strcmp(cursor->word, from) == 0)
            {
                strcpy(cursor->word, to);
                fileUpdate(file, head_fileContain);

                return;
            }
            cursor = cursor->next;
        }

        printf(Bold ANSI_COLOR_Bright_Red "SHOFT B2A ENK 5AWAL, AL \"%s\" MAFEHO4 \"%s\" YA 5AWAL. :/\n" ANSI_COLOR_RESET, file, from);
    }
}

void l_Implemit(char *file, fileContain *cursor)
{

    if (nOf_i = 1)
    {
        while (cursor != NULL)
        {
            if (strcmp(type_casting(cursor->word), type_casting(from)) == 0)
            {
                strcpy(cursor->word, to);

                fileUpdate(file, head_fileContain);

                return;
            }
            cursor = cursor->prev;
        }
    }
    else
    {
        while (cursor != NULL)
        {
            if (strcmp(cursor->word, from) == 0)
            {
                strcpy(cursor->word, to);

                fileUpdate(file, head_fileContain);

                return;
            }
            cursor = cursor->prev;
        }
    }

    printf(Bold ANSI_COLOR_Bright_Red "SHOFT B2A ENK 5AWAL, AL \"%s\" MAFEHO4 \"%s\" YA 5AWAL. :/\n" ANSI_COLOR_RESET, file, from);
}

void optImplement(file_list *cursor)
{
    while (cursor != NULL)
    {
        DB_convertor(cursor->file, head_fileContain);

        if (nOf_b == 1)
        {
            b_Implemit(cursor->file);
        }
        if (nOf_f == 1)
        {
            f_Implemit(cursor->file, head_fileContain);
        }
        if (nOf_l == 1)
        {
            l_Implemit(cursor->file, tail_fileContain);
        }
        head_fileContain = NULL; // TO INSERT THE NEXT FILE IN THE SAME LINKED LIST
        cursor = cursor->next;
    }
}

char *clearBits(char *word)
{
    for (int i = 0; word[i] != '\0'; ++i)
    {
        word[i] = '\0';
    }
    return word;
}

void DB_convertor(char *file, fileContain *cursor)
{
    char transit[LONGESTWORDINTHEWORLD];
    //char *transit;
    //transit = (char *)malloc(sizeof(test));

    char c;
    int i = 0;
    pFile = fopen(file, "r");

    while ((c = fgetc(pFile)) != EOF)
    {

        if ((c != ' ') && (c != '\n'))
        {
            transit[i] = c;
            ++i;
        }
        else
        {

            fileContain_maker(transit);
            if (c == ' ')
            {
                fileContain_maker(" ");
            }
            else if (c == '\n')
            {
                fileContain_maker("\n");
            }

            i = 0;
            strcpy(transit, clearBits(transit));
        }
    }
    fclose(pFile);
}
void fileUpdate(char *file, fileContain *cursor)
{

    int lno, ctr = 0;
    char ch;
    FILE *fptr1, *fptr2;

    fptr1 = fopen(file, "r");
    fptr2 = fopen("temp.txt", "w");

    while (cursor != NULL)
    {

        fprintf(fptr2, "%s", cursor->word);
        cursor = cursor->next;
    }
    fclose(fptr1);
    fclose(fptr2);
    remove(file);
    rename("temp.txt", file);

    return;
}
