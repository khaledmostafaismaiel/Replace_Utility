#include <stdio.h>

#include "LINKEDLIST.H"
#include "HELPER.H"
#include "REPLACE.H"
#include "DATABASE.H"

#include "LINKEDLIST.C"
#include "HELPER.C"
#include "REPLACE.C"
#include "DATABASE.C"

int main(int argc, char *argv[])
{

    /*
char word[] = "pneumonoultramicroscopicsilicovolcanoconiosis";
for(int i=1;word[i]!=NULL;++i){
    printf("%d\n",i);
}
*/
    for (int i = 0; i < argc; ++i)
    {
        dashcounter(argv[i]);
    }

    dashValidity(argv[1]);

    ;
    ;
    ;
    ;
    ;
    ;
    for (int i = argc - 1; i != 0; --i)
    {
        if (strcmp(argv[argc - 1], "--") == 0)
        {
            puts(ANSI_COLOR_RED "COMMAND LINE SYNTAX ERROR,THERE ARE NO FILES IN THIS COMMAND." ANSI_COLOR_RESET);
            exit(0);
        }
        if (strcmp(argv[i], "--") != 0)
        {
            filesList_maker(argv[i]);
        }
        else
        {
            i = 1;
        }
    };
    ;
    ;
    ;
    ;
    ;
    for (int i = 1; i < argc; ++i)
    {

        if (strcmp(argv[i], "--") != 0)
        {
            if (optList_maker(argv[i]) == 1)
            {
            }
            else
            {
                i = argc - 1;
            }
        }
        else
        {
            i = argc - 1;
        }
    }

    ;
    ;
    ;
    ;
    ;
    ;
    for (int i = argc - 1; i >= 0; --i)
    {
        if (strcmp(argv[i], "--") == 0)
        {
            dashIndex = i;
            i = 1;
        }
    }

    if ((dashIndex - nOfopts) != 3)
    {
        if ((dashIndex - nOfopts) == 0)
        {
            puts(ANSI_COLOR_RED "COMMAND LINE SYNTAX ERROR,THERE ARE NO 'FROM AND 'TO' WORDS." ANSI_COLOR_RESET);
        }
        else if ((dashIndex - nOfopts) < 3)
        {
            puts(ANSI_COLOR_RED "COMMAND LINE SYNTAX ERROR,THERE ARE NO 'TO' WORD." ANSI_COLOR_RESET);
        }
        else if ((dashIndex - nOfopts) > 3)
        {
            puts(ANSI_COLOR_RED "COMMAND LINE SYNTAX ERROR,THERE ARE ALOTS OF 'FROM' AND 'TO' WORDS." ANSI_COLOR_RESET);
        }
        exit(0);
    }

    fromToassin(argv[dashIndex - 2], argv[dashIndex - 1]);
    ;
    ;
    ;
    ;

    puts(ANSI_COLOR_YELLOW "from---to" ANSI_COLOR_RESET);

    printf(ANSI_COLOR_YELLOW "%s\t%s\n" ANSI_COLOR_RESET, from, to);

    puts(ANSI_COLOR_GREEN "OPTIONS" ANSI_COLOR_RESET);
    printf(ANSI_COLOR_GREEN "%d\n" ANSI_COLOR_RESET, nOfopts);

    while (head_opt != NULL)
    {
        printf(ANSI_COLOR_GREEN "%s\n" ANSI_COLOR_RESET, head_opt->part);
        head_opt = head_opt->next;
    }

    puts(ANSI_COLOR_RED "\nFILES" ANSI_COLOR_RESET);
    printf(ANSI_COLOR_RED "%d\n" ANSI_COLOR_RESET, dashIndex);

    while (head_file_list != NULL)
    {
        printf(ANSI_COLOR_RED "%s\n" ANSI_COLOR_RESET, head_file_list->file);
        head_file_list = head_file_list->next;
    }

    return 0;
}
