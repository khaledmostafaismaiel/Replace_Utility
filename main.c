//THIS PROGRAM IS A REPLACE UTILITY
//USED TO REPLACE STRING WITH OTHER STRING
//        replace opt <from> <to> -- <filename.txt> [<filename.txt>]*
//"where opt can be zero or 4"
//"o -b"
//"o -f"
//"o -l"
//"o -i"
//"COMMAND LINE ARGUMENTS AND OPTIONS");
//from:string to be replaced with string "to"string that will replace with string " ANSI_COLOR_Bright_Black "from.
//"filename":the file(s) on which the replace operation has to be performed.");
//"-b": if specified, the replace utility creates a backup copy of each file on which a replace operations is performed before modifing it.
//"-f": if specified, the replace utility only replace the first occurance of string from in each file.
//"-l": if specified, the replace utility only replace the lastt occurance of string from in each file.
//"-i": if specified, the replace utility performe the search for string from in a case insensitive way.
//AUTHOR : KHALED MOSTAFA
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "LINKEDLIST.H"
#include "HELPER.H"
#include "REPLACE.H"
#include "DATABASE.H"


#define indexOfreplace 1


#include "LINKEDLIST.C"
#include "HELPER.C"
#include "REPLACE.C"
#include "DATABASE.C"


int main(int argc, char const *argv[])
{

    if (argc == indexOfreplace)
    {
        //NO ARGUMENT IN THIS COMMAND
        readMe();
        exit(0);
    }

    for (int i = 0; i < argc; ++i)
    {
        dashcounter(argv[i]);
    }

    dashValidity(argv[1]); //TO CHECK IF THERE ARE NO OPTS ,<FROM> AND <TO>

    //LOOP FROM THE END OF THE ARGV ARRAY TO SAVE THE FILES IN THE filesList_maker
    for (int i = argc - 1; i != 0; --i)
    {
        if (strcmp(argv[argc - 1], "--") == 0)
        {
            puts(ANSI_COLOR_RED Bold "SYNTAX ERROR:" ANSI_COLOR_RESET ANSI_COLOR_Bright_Yellow "THERE ARE NO FILES IN THIS COMMAND.\a" ANSI_COLOR_RESET);
            exit(0);
        }
        if (strcmp(argv[i], "--") != 0)
        {
            filesList_maker(argv[i]);
        }
        else
        {
            i = 1; //stoping condition
        }
    }

    //LOOP FROM THE START OF THE ARGV ARRAY TO SAVE THE OPTS IN THE optsList_maker

    for (int i = 1; i < argc; ++i)
    {

        if ((strcmp(argv[i], "--") != 0) && (optList_maker(argv[i]) == 1))
        {
        }
        else
        {
            i = argc - 1; //stoping condition
        }
    }

    //LOOP TO ASIN THE dashIndex
    for (int i = argc - 1; i >= 0; --i)
    {
        if (strcmp(argv[i], "--") == 0)
        {
            dashIndex = i;
            i = 1;
        }
    }

    //CALCULATE NUMBER OF <FROM> AND <TO> STRINGS

    fromAndtoCases();

    fromToassin(argv[fromIndex], argv[toIndex]);

    optImplement(head_file_list);

    return 0;
}
