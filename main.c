#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "LINKEDLIST.H"
#include "HELPER.H"
#include "REPLACE.H"
#include "DATABASE.H"

#include "LINKEDLIST.C"
#include "HELPER.C"
#include "REPLACE.C"
#include "DATABASE.C"

int main(int argc, char const *argv[])
{

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
            puts(ANSI_COLOR_RED Bold "SYNTAX ERROR:" ANSI_COLOR_RESET ANSI_COLOR_RED "THERE ARE NO FILES IN THIS COMMAND.\a" ANSI_COLOR_RESET);
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

        if ((strcmp(argv[i], "--") != 0) && (optList_maker(argv[i]) == 1))
        {
        }
        else
        {
            i = argc - 1;
        }
    };
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
    nOfopts = nOf_b + nOf_f + nOf_i + nOf_l;
    if ((dashIndex - nOfopts) != 3)
    {
        if ((dashIndex - nOfopts) == 0)
        {
            puts(ANSI_COLOR_RED Bold "SYNTAX ERROR:" ANSI_COLOR_RESET ANSI_COLOR_RED "THERE ARE NO 'FROM AND 'TO' WORDS.\a" ANSI_COLOR_RESET);
        }
        else if ((dashIndex - nOfopts) < 3)
        {
            puts(ANSI_COLOR_RED Bold "SYNTAX ERROR:" ANSI_COLOR_RESET ANSI_COLOR_RED "THERE ARE NO 'TO' WORD.\a" ANSI_COLOR_RESET);
        }
        else if ((dashIndex - nOfopts) > 3)
        {
            puts(ANSI_COLOR_RED Bold "SYNTAX ERROR:" ANSI_COLOR_RESET ANSI_COLOR_RED "THERE ARE ALOTS OF 'FROM' AND 'TO' WORDS.\a" ANSI_COLOR_RESET);
        }
        exit(0);
    }

    fromToassin(argv[dashIndex - 2], argv[dashIndex - 1]);

    ;
    ;
    ;
    ;
    ;
    ;

    puts(ANSI_COLOR_GREEN Bold "OPTIONS" ANSI_COLOR_RESET);
    printf(ANSI_COLOR_GREEN "NUMBER OF OPTS = %d\n" ANSI_COLOR_RESET, nOfopts);

    while (head_opt != NULL)
    {
        printf(ANSI_COLOR_GREEN "%s\n" ANSI_COLOR_RESET, head_opt->part);
        head_opt = head_opt->next;
    }

    puts(ANSI_COLOR_YELLOW Bold "from---to" ANSI_COLOR_RESET);

    printf(ANSI_COLOR_YELLOW "%s\t%s\n" ANSI_COLOR_RESET, from, to);

    puts(ANSI_COLOR_CYAN Bold "FILES" ANSI_COLOR_RESET);
    printf(ANSI_COLOR_CYAN "INDEX OF \"--\" = %d\n" ANSI_COLOR_RESET, dashIndex);

    while (head_file_list != NULL)
    {
        printf(ANSI_COLOR_CYAN "%s\n" ANSI_COLOR_RESET, head_file_list->file);
        head_file_list = head_file_list->next;
    }

    return 0;
}
