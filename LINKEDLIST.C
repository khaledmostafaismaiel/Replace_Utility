
#include "LINKEDLIST.H"
#define MAX_NUMBER_OF_OPTS 4

int optList_maker(char const *part)
{

    if (optTypeChecker(part) == 0)
    {
        return 0;
    }

    new_opt = (opt *)malloc(sizeof(opt));

    if (new_opt == NULL)
    {
        puts(ANSI_COLOR_RED Bold "ERORR:" ANSI_COLOR_RESET ANSI_COLOR_RED "HEAP IS UNDERFLOW CAN'T CREAT COMMAND LINKED LIST.\a" ANSI_COLOR_RESET);
        exit(0);
    }

    if (head_opt == NULL)
    {
        head_opt = new_opt;
        strcpy(new_opt->part, part);
        new_opt->next = NULL;
        current_opt = new_opt;
    }
    else
    {
        strcpy(new_opt->part, part);
        new_opt->next = NULL;
        current_opt->next = new_opt;
        current_opt = new_opt;
    }
    return 1;
}

void filesList_maker(char const *arr)
{

    fileTypeChecker(arr);

    fileOccurance(arr);

    new_file_list = (file_list *)malloc(sizeof(file_list));

    if (new_file_list == NULL)
    {
        puts(ANSI_COLOR_RED Bold "ERORR:" ANSI_COLOR_RESET ANSI_COLOR_RED "HEAP IS UNDERFLOW CAN'T CREAT FILES LINKEDLIST.\a" ANSI_COLOR_RESET);
        exit(0);
    }

    if (head_file_list == NULL)
    {
        head_file_list = new_file_list;

        strcpy(new_file_list->file, arr);

        new_file_list->next = NULL;
        current_file_list = new_file_list;
    }
    else
    {

        strcpy(new_file_list->file, arr);

        new_file_list->next = NULL;
        current_file_list->next = new_file_list;
        current_file_list = new_file_list;
    }
}
