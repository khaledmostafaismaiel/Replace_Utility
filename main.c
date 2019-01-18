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

    dashValidity();

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
    }

    for (int i = 0; i < argc; ++i)
    {
        command_maker(argv[i]);
        // printf(ANSI_COLOR_CYAN "%s" ANSI_COLOR_RESET, argv[i]);
    }

    //printf(ANSI_COLOR_YELLOW "b=%d\nf=%d\nl=%d\ni=%d\n", nOf_b, nOf_f, nOf_l, nOf_i);
    //opt_filler(head_command);
    //      printf(ANSI_COLOR_White "b=%d\nf=%d\nl=%d\ni=%d\n", nOf_b, nOf_f, nOf_l, nOf_i);

    /*if (command_checker() == 0)
    {
        puts(ANSI_COLOR_RED "COMMAND LINE SYNTAX ERROR" ANSI_COLOR_RESET);
        return 0;
    }
*/

    puts("COMMAND");
    while (head_command != NULL)
    {
        printf(ANSI_COLOR_YELLOW "%s ", head_command->part);
        head_command = head_command->next;
    }
    puts("\nFILES");
    while (head_file_list != NULL)
    {
        printf(ANSI_COLOR_RED "%s\n", head_file_list->file);
        head_file_list = head_file_list->next;
    }

    return 0;
}
