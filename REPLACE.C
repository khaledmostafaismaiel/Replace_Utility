#include "REPLACE.H"

int command_checker(void)
{
}

int optTypeChecker(char const *opt)
{

    if ((strcmp(opt, "-b") == 0))
    {
        ++nOf_b;
        if (nOf_b == 2)
        {
            puts(ANSI_COLOR_RED Bold "SYNTAX ERROR:" ANSI_COLOR_RESET ANSI_COLOR_RED "YOUR COMMAND NOT ALLOWED TO CONTAIN MORE THAN ONE \"-b\".\a" ANSI_COLOR_RESET);
            exit(0);
        }
        return 1;
    }
    else if ((strcmp(opt, "-f") == 0))
    {
        ++nOf_f;
        if (nOf_f == 2)
        {
            puts(ANSI_COLOR_RED Bold "SYNTAX ERROR:" ANSI_COLOR_RESET ANSI_COLOR_RED "YOUR COMMAND NOT ALLOWED TO CONTAIN MORE THAN ONE \"-f\".\a" ANSI_COLOR_RESET);
            exit(0);
        }
        return 1;
    }
    else if ((strcmp(opt, "-l") == 0))
    {
        ++nOf_l;
        if (nOf_l == 2)
        {
            puts(ANSI_COLOR_RED Bold "SYNTAX ERROR:" ANSI_COLOR_RESET ANSI_COLOR_RED "YOUR COMMAND NOT ALLOWED TO CONTAIN MORE THAN ONE \"-l\".\a" ANSI_COLOR_RESET);
            exit(0);
        }
        return 1;
    }
    else if ((strcmp(opt, "-i") == 0))
    {
        ++nOf_i;
        if (nOf_i == 2)
        {
            puts(ANSI_COLOR_RED Bold "SYNTAX ERROR:" ANSI_COLOR_RESET ANSI_COLOR_RED "YOUR COMMAND NOT ALLOWED TO CONTAIN MORE THAN ONE \"-i\".\a" ANSI_COLOR_RESET);
            exit(0);
        }
        return 1;
    }

    return 0;
}

void fileTypeChecker(char const *file)
{
    int numOfliters;
    for (int i = 0; file[i] != '\0'; ++i)
    {
        ++numOfliters;
    }
    if (numOfliters < 5)
    {
        puts(ANSI_COLOR_RED Bold "TYPE FILE ERORR:" ANSI_COLOR_RESET ANSI_COLOR_RED "'.txt' FILES ONLY ARE SUPPORTED.\a" ANSI_COLOR_RESET);
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
            puts(ANSI_COLOR_RED Bold "TYPE FILE ERORR:" ANSI_COLOR_RESET ANSI_COLOR_RED "'.txt' FILES ONLY ARE SUPPORTED, .tx* .\a" ANSI_COLOR_RESET);
            exit(0);
        }

        if ((file[numOfliters - 2] == 'x') || ((file[numOfliters - 2] == 'X')))
        {
            //   continue;
        }
        else
        {
            puts(ANSI_COLOR_RED Bold "TYPE FILE ERORR:" ANSI_COLOR_RESET ANSI_COLOR_RED "'.txt' FILES ONLY ARE SUPPORTED, .t*t .\a" ANSI_COLOR_RESET);
            exit(0);
        }
        if ((file[numOfliters - 3] == 't') || ((file[numOfliters - 1] == 'T')))
        {

            // continue;
        }
        else
        {
            puts(ANSI_COLOR_RED Bold "TYPE FILE ERORR:" ANSI_COLOR_RESET ANSI_COLOR_RED "'.txt' FILES ONLY ARE SUPPORTED, .*xt .\a" ANSI_COLOR_RESET);
            exit(0);
        }
        if (file[numOfliters - 4] == '.')
        {

            //  continue;
        }
        else
        {
            puts(ANSI_COLOR_RED Bold "TYPE FILE ERORR:" ANSI_COLOR_RESET ANSI_COLOR_RED "'.txt' FILES ONLY ARE SUPPORTED.5, *txt .\a" ANSI_COLOR_RESET);
            exit(0);
        }
    }

    return;
}

void dashcounter(char const *part)
{
    if (strcmp(part, "--") == 0)
    {
        ++nOf__;
    }
}

void dashValidity(char const *argv)
{

    if (strcmp(argv, "--") == 0)
    {
        puts(ANSI_COLOR_RED Bold "SYNTAX ERROR:" ANSI_COLOR_RESET ANSI_COLOR_RED "'--' POSTION ERORR.\a" ANSI_COLOR_RESET);
        exit(0);
    }

    if (nOf__ < 1)
    {
        puts(ANSI_COLOR_RED Bold "SYNTAX ERROR:" ANSI_COLOR_RESET ANSI_COLOR_RED "UNVALID NUMBER OF '--' ,AT MIN YOU CAN USE ONLY 1 '--' .\a" ANSI_COLOR_RESET);
        exit(0);
    }
    else if (nOf__ > 3)
    {
        puts(ANSI_COLOR_RED Bold "SYNTAX ERROR:" ANSI_COLOR_RESET ANSI_COLOR_RED "UNVALID NUMBER OF '--' ,AT MAX YOU CAN USE 3 '--' .\a" ANSI_COLOR_RESET);
        exit(0);
    }

    return;
}

void fromToassin(char const *fromm, char const *too)
{

    strcpy(from, fromm);
    strcpy(to, too);
    if (strcmp(from, to) == 0)
    {
        puts(ANSI_COLOR_RED Bold "LOGICAL ERORR:" ANSI_COLOR_RESET ANSI_COLOR_RED "YOUR \"FROM\" AND \"TO\" ARE THE SAME.\a" ANSI_COLOR_RESET);
        exit(0);
    }
}
