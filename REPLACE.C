#include "REPLACE.H"

int command_checker(void)
{
}

int optTypeChecker(char *opt)
{

    if ((strcmp(opt, "-b") == 0))
    {
        ++nOf_b;
        return 1;
    }
    else if ((strcmp(opt, "-f") == 0))
    {
        ++nOf_f;
        return 1;
    }
    else if ((strcmp(opt, "-l") == 0))
    {
        ++nOf_l;
        return 1;
    }
    else if ((strcmp(opt, "-i") == 0))
    {
        ++nOf_i;
        return 1;
    }

    return 0;
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

void dashValidity(char *argv)
{

    if (strcmp(argv, "--") == 0)
    {
        puts(ANSI_COLOR_RED "COMMAND LINE SYNTAX ERROR,'--' POSTION ERORR." ANSI_COLOR_RESET);
        exit(0);
    }

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

void fromToassin(char *fromm, char *too)
{

    strcpy(from, fromm);
    strcpy(to, too);
}
