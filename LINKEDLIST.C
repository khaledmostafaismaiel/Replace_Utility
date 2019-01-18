#include <stdlib.h>
#include <string.h>
#include "LINKEDLIST.H"
#include "HELPER.H"

void command_maker(char part[])
{

    new_command = (utility *)malloc(sizeof(utility));

    if (new_command == NULL)
    {
        puts(ANSI_COLOR_RED "HEAP IS UNDERFLOW CAN'T CREAT COMMAND LINKED LIST." ANSI_COLOR_RESET);
        return;
    }

    if (head_command == NULL)
    {
        head_command = new_command;
        strcpy(new_command->part, part);
        new_command->next = NULL;
        current_command = new_command;
    }
    else
    {
        strcpy(new_command->part, part);
        new_command->next = NULL;
        current_command->next = new_command;
        current_command = new_command;
    }
}

void filesList_maker(char *arr)
{

    new_file_list = (file_list *)malloc(sizeof(file_list));

    if (new_file_list == NULL)
    {
        puts(ANSI_COLOR_RED "HEAP IS UNDERFLOW CAN'T CREAT FILES LINKEDLIST." ANSI_COLOR_RESET);
        return;
    }

    if (head_file_list == NULL)
    {
        head_file_list = new_file_list;
        if (fileTypeChecker(arr))
        {
            strcpy(new_file_list->file, arr);
        }
        new_file_list->next = NULL;
        current_file_list = new_file_list;
    }
    else
    {
        if (fileTypeChecker(arr))
        {
            strcpy(new_file_list->file, arr);
        }
        new_file_list->next = NULL;
        current_file_list->next = new_file_list;
        current_file_list = new_file_list;
    }
}
