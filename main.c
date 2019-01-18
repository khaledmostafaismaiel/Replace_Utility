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
    puts("OPTIONS");

    while (head_opt != NULL)
    {
        printf(ANSI_COLOR_GREEN "%s\n" ANSI_COLOR_RESET, head_opt->part);
        head_opt = head_opt->next;
    }

    puts("\nFILES");

    while (head_file_list != NULL)
    {
        printf(ANSI_COLOR_RED "%s\n" ANSI_COLOR_RESET, head_file_list->file);
        head_file_list = head_file_list->next;
    }

    return 0;
}
