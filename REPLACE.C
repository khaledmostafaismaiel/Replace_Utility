#include "REPLACE.H"

int command_checker(void)
{
}

void opt_filler(utility *head)
{

    utility *cursor = head;
    while (cursor != NULL)
    {
        if (strcmp(cursor->part, "--") == 0)
        {
            return;
        }
        else if ((strcmp(cursor->part, "_B") == 0) || (strcmp(cursor->part, "_b") == 0))
        {
            ++nOf_b;
        }
        else if ((strcmp(cursor->part, "_F") == 0) || (strcmp(cursor->part, "_f") == 0))
        {
            ++nOf_f;
        }
        else if ((strcmp(cursor->part, "_L") == 0) || (strcmp(cursor->part, "_l") == 0))
        {
            ++nOf_l;
        }
        else if ((strcmp(cursor->part, "_I") == 0) || (strcmp(cursor->part, "_i") == 0))
        {
            ++nOf_i;
        }

        cursor = cursor->next;
    }
}

int fileTypeChecker(char *file)
{
    int numOfliters;
    for (int i = 0; file[i] != '\0'; ++i)
    {
        ++numOfliters;
    }
    if (numOfliters < 5)
    {
        puts(ANSI_COLOR_RED "TYPE OF FILES ARE NOT SUPPORTE, '.txt' FILES ONLY ARE SUPPORTED." ANSI_COLOR_RESET);
        exit(0);
    }
    for (int i = numOfliters - 1; i != (numOfliters - 5); --i)
    {

        if ((file[numOfliters - 1] == 't') || ((file[numOfliters - 1] == 'T')))
        {

            // continue;
        }
        else
        {
            puts(ANSI_COLOR_RED "TYPE OF FILES ARE NOT SUPPORTE, '.txt' FILES ONLY ARE SUPPORTED, .tx* ." ANSI_COLOR_RESET);
            exit(0);
        }

        if ((file[numOfliters - 2] == 'x') || ((file[numOfliters - 2] == 'X')))
        {
            //   continue;
        }
        else
        {
            puts(ANSI_COLOR_RED "TYPE OF FILES ARE NOT SUPPORTE, '.txt' FILES ONLY ARE SUPPORTED, .t*t ." ANSI_COLOR_RESET);
            exit(0);
        }
        if ((file[numOfliters - 3] == 't') || ((file[numOfliters - 1] == 'T')))
        {

            // continue;
        }
        else
        {
            puts(ANSI_COLOR_RED "TYPE OF FILES ARE NOT SUPPORTE, '.txt' FILES ONLY ARE SUPPORTED, .*xt ." ANSI_COLOR_RESET);
            exit(0);
        }
        if (file[numOfliters - 4] == '.')
        {

            //  continue;
        }
        else
        {
            puts(ANSI_COLOR_RED "TYPE OF FILES ARE NOT SUPPORTE, '.txt' FILES ONLY ARE SUPPORTED.5, *txt ." ANSI_COLOR_RESET);
            exit(0);
        }
    }

    return 1;
}

void dashcounter(char *part)
{
    if (strcmp(part, "--") == 0)
    {
        ++nOf__;
    }
}

void dashValidity(void)
{
    if (nOf__ < 1)
    {
        puts(ANSI_COLOR_RED "UNVALID NUMBER OF '--' ,AT MIN YOU CAN USE ONLY 1 '--' ." ANSI_COLOR_RESET);
        exit(0);
    }
    else if (nOf__ > 3)
    {
        puts(ANSI_COLOR_RED "UNVALID NUMBER OF '--' ,AT MAX YOU CAN USE 3 '--' ." ANSI_COLOR_RESET);
        exit(0);
    }

    return;
}