#include "REPLACE.H"

#define _txt 5

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
            puts(ANSI_COLOR_RED Bold "SYNTAX ERROR:" ANSI_COLOR_RESET ANSI_COLOR_Bright_Yellow "YOUR COMMAND NOT ALLOWED TO CONTAIN MORE THAN ONE \"-b\".\a" ANSI_COLOR_RESET);
            exit(0);
        }
        return 1;
    }
    else if ((strcmp(opt, "-f") == 0))
    {
        ++nOf_f;
        if (nOf_f == 2)
        {
            puts(ANSI_COLOR_RED Bold "SYNTAX ERROR:" ANSI_COLOR_RESET ANSI_COLOR_Bright_Yellow "YOUR COMMAND NOT ALLOWED TO CONTAIN MORE THAN ONE \"-f\".\a" ANSI_COLOR_RESET);
            exit(0);
        }
        return 1;
    }
    else if ((strcmp(opt, "-l") == 0))
    {
        ++nOf_l;
        if (nOf_l == 2)
        {
            puts(ANSI_COLOR_RED Bold "SYNTAX ERROR:" ANSI_COLOR_RESET ANSI_COLOR_Bright_Yellow "YOUR COMMAND NOT ALLOWED TO CONTAIN MORE THAN ONE \"-l\".\a" ANSI_COLOR_RESET);
            exit(0);
        }
        return 1;
    }
    else if ((strcmp(opt, "-i") == 0))
    {
        ++nOf_i;
        if (nOf_i == 2)
        {
            puts(ANSI_COLOR_RED Bold "SYNTAX ERROR:" ANSI_COLOR_RESET ANSI_COLOR_Bright_Yellow "YOUR COMMAND NOT ALLOWED TO CONTAIN MORE THAN ONE \"-i\".\a" ANSI_COLOR_RESET);
            exit(0);
        }
        return 1;
    }

    return 0;
}

void fileTypeChecker(char const *file)
{
    int numOfliters = 0;
    for (int i = 0; file[i] != '\0'; ++i)
    {
        ++numOfliters;
    }
    if (numOfliters < _txt)
    {
        puts(ANSI_COLOR_RED Bold "TYPE FILE ERORR:" ANSI_COLOR_RESET ANSI_COLOR_Bright_Yellow "'.txt' FILES ONLY ARE SUPPORTED.\a" ANSI_COLOR_RESET);
        exit(0);
    }

    if ((file[numOfliters - 1] != 't') && ((file[numOfliters - 1] != 'T')))
    {
        puts(ANSI_COLOR_RED Bold "TYPE FILE ERORR:" ANSI_COLOR_RESET ANSI_COLOR_Bright_Yellow "'.txt' FILES ONLY ARE SUPPORTED, .tx* .\a" ANSI_COLOR_RESET);
        exit(0);
    }

    if ((file[numOfliters - 2] != 'x') && ((file[numOfliters - 2] != 'X')))
    {

        puts(ANSI_COLOR_RED Bold "TYPE FILE ERORR:" ANSI_COLOR_RESET ANSI_COLOR_Bright_Yellow "'.txt' FILES ONLY ARE SUPPORTED, .t*t .\a" ANSI_COLOR_RESET);
        exit(0);
    }

    if ((file[numOfliters - 3] != 't') && ((file[numOfliters - 1] != 'T')))
    {
        puts(ANSI_COLOR_RED Bold "TYPE FILE ERORR:" ANSI_COLOR_RESET ANSI_COLOR_Bright_Yellow "'.txt' FILES ONLY ARE SUPPORTED, .*xt .\a" ANSI_COLOR_RESET);
        exit(0);
    }

    if (file[numOfliters - 4] != '.')
    {

        puts(ANSI_COLOR_RED Bold "TYPE FILE ERORR:" ANSI_COLOR_RESET ANSI_COLOR_Bright_Yellow "'.txt' FILES ONLY ARE SUPPORTED.5, *txt .\a" ANSI_COLOR_RESET);
        exit(0);
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
        readMe();
        exit(0);
    }

    if (nOf__ < 1)
    {
        readMe();
        exit(0);
    }
    else if (nOf__ > 2)
    {
        readMe();
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
        puts(ANSI_COLOR_RED Bold "LOGICAL ERORR:" ANSI_COLOR_RESET ANSI_COLOR_Bright_Yellow "YOUR \"FROM\" AND \"TO\" ARE THE SAME.\a" ANSI_COLOR_RESET);
        exit(0);
    }
}

void readMe(void)
{
    puts(ANSI_COLOR_RESET Bold "Specification of the replace Utility");
    puts("");
    puts(Bold ANSI_COLOR_RESET "NAME");
    puts("");
    puts(ANSI_COLOR_Bright_Black "replace" ANSI_COLOR_RESET
                                 " -looks for all occurances of string <from> and replace it with string <to>.");
    puts("it is possible to specify one or more files on which performe the replace operation(s) in a single replace command.");
    puts("");
    puts(ANSI_COLOR_RESET Bold "SYNOPSIS");
    puts("");
    puts(ANSI_COLOR_Bright_Black "replace opt <from> <to> -- <filename.txt> [<filename.txt>]*" ANSI_COLOR_RESET);
    puts("");
    puts(ANSI_COLOR_RESET "where opt can be zero or 4");
    puts(ANSI_COLOR_Bright_Black "o -b" ANSI_COLOR_RESET);
    puts(ANSI_COLOR_Bright_Black "o -f" ANSI_COLOR_RESET);
    puts(ANSI_COLOR_Bright_Black "o -l" ANSI_COLOR_RESET);
    puts(ANSI_COLOR_Bright_Black "o -i" ANSI_COLOR_RESET);
    puts("");
    puts(ANSI_COLOR_RESET Bold "COMMAND LINE ARGUMENTS AND OPTIONS");
    puts("");
    puts(ANSI_COLOR_Bright_Black "from" ANSI_COLOR_RESET
                                 ":string to be replaced with string " ANSI_COLOR_Bright_Black "to.");
    puts(ANSI_COLOR_Bright_Black "to" ANSI_COLOR_RESET
                                 ":string that will replace with string " ANSI_COLOR_Bright_Black "from.");
    puts(ANSI_COLOR_Bright_Black "filename" ANSI_COLOR_RESET
                                 ":the file(s) on which the replace operation has to be performed.");
    puts(ANSI_COLOR_Bright_Black "-b" ANSI_COLOR_RESET
                                 ": if specified, the " ANSI_COLOR_Bright_Black "replace" ANSI_COLOR_RESET
                                 " utility creates a backup copy of each file on which a replace operations is performed before modifing it.");
    puts(ANSI_COLOR_Bright_Black "-f" ANSI_COLOR_RESET
                                 ": if specified, the " ANSI_COLOR_Bright_Black "replace" ANSI_COLOR_RESET
                                 " utility only replace the first occurance of string " ANSI_COLOR_Bright_Black "from in each file.");
    puts(ANSI_COLOR_Bright_Black "-l" ANSI_COLOR_RESET
                                 ": if specified, the " ANSI_COLOR_Bright_Black "replace" ANSI_COLOR_RESET
                                 " utility only replace the lastt occurance of string " ANSI_COLOR_Bright_Black "from in each file.");
    puts(ANSI_COLOR_Bright_Black "-i" ANSI_COLOR_RESET
                                 ": if specified, the " ANSI_COLOR_Bright_Black "replace" ANSI_COLOR_RESET
                                 " utility performe the search for string " ANSI_COLOR_Bright_Black "from in a case insensitive way.");
}

void fromAndtoCases(void)
{

    nOfopts = nOf_b + nOf_f + nOf_i + nOf_l;

    if ((dashIndex - nOfopts) != 3)
    {
        if ((dashIndex - nOfopts) == 0)
        {
            puts(ANSI_COLOR_RED Bold "SYNTAX ERROR:" ANSI_COLOR_RESET ANSI_COLOR_Bright_Yellow "THERE ARE NO 'FROM AND 'TO' WORDS.\a" ANSI_COLOR_RESET);
        }
        else if ((dashIndex - nOfopts) < 3)
        {
            puts(ANSI_COLOR_RED Bold "SYNTAX ERROR:" ANSI_COLOR_RESET ANSI_COLOR_Bright_Yellow "THERE ARE NO 'TO' WORD.\a" ANSI_COLOR_RESET);
        }
        else if ((dashIndex - nOfopts) > 3)
        {
            puts(ANSI_COLOR_RED Bold "SYNTAX ERROR:" ANSI_COLOR_RESET ANSI_COLOR_Bright_Yellow "THERE ARE ALOTS OF 'FROM' AND 'TO' WORDS.\a" ANSI_COLOR_RESET);
        }

        exit(0);
    }
}
