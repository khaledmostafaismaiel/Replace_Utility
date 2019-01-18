#ifndef __HELPER_H_
#define __HELPER_H_

#define ANSI_COLOR_RED "\x1b[31m"
#define ANSI_COLOR_GREEN "\x1b[32m"
#define ANSI_COLOR_YELLOW "\x1b[33m"
#define ANSI_COLOR_BLUE "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN "\x1b[36m"
#define ANSI_COLOR_White "\x1b[37m"
#define ANSI_COLOR_Bright_Black "\x1b[90m"
#define ANSI_COLOR_Bright_Red "\x1b[91m"
#define ANSI_COLOR_Bright_Green "\x1b[92m"
#define ANSI_COLOR_Bright_Yellow "\x1b[93m"
#define ANSI_COLOR_Bright_Blue "\x1b[94m"
#define ANSI_COLOR_Bright_Magenta "\x1b[95m"
#define ANSI_COLOR_Bright_Cyan "\x1b[96m"
#define ANSI_COLOR_Bright_Bright_White "\x1b[97m"
#define ANSI_COLOR_RESET "\x1b[0m"
#define Bold "\x1b[1m"




/*
    printf(ANSI_COLOR_RED "This text is RED!" ANSI_COLOR_RESET "\n");
    printf(ANSI_COLOR_GREEN "This text is GREEN!" ANSI_COLOR_RESET "\n");
    printf(ANSI_COLOR_YELLOW "This text is YELLOW!" ANSI_COLOR_RESET "\n");
    printf(ANSI_COLOR_BLUE "This text is BLUE!" ANSI_COLOR_RESET "\n");
    printf(ANSI_COLOR_MAGENTA "This text is MAGENTA!" ANSI_COLOR_RESET "\n");
    printf(ANSI_COLOR_CYAN "This text is CYAN!" ANSI_COLOR_RESET "\n");

    printf(ANSI_COLOR_White "This text is ANSI_COLOR_White!" ANSI_COLOR_RESET "\n");
    printf(ANSI_COLOR_Bright_Black "This text is ANSI_COLOR_Bright_Black!" ANSI_COLOR_RESET "\n");
    printf(ANSI_COLOR_Bright_Red "This text is ANSI_COLOR_Bright_Red!" ANSI_COLOR_RESET "\n");
    printf(ANSI_COLOR_Bright_Green "This text is ANSI_COLOR_Bright_Green!" ANSI_COLOR_RESET "\n");
    printf(ANSI_COLOR_Bright_Yellow "This text is ANSI_COLOR_Bright_Yellow!" ANSI_COLOR_RESET "\n");
    printf(ANSI_COLOR_Bright_Blue "This text is ANSI_COLOR_Bright_Blue!" ANSI_COLOR_RESET "\n");

    printf(ANSI_COLOR_Bright_Magenta "This text is ANSI_COLOR_Bright_Magenta!" ANSI_COLOR_RESET "\n");
    printf(ANSI_COLOR_Bright_Cyan "This text is ANSI_COLOR_Bright_Cyan!" ANSI_COLOR_RESET "\n");
    printf(ANSI_COLOR_Bright_Bright_White "This text is ANSI_COLOR_Bright_Bright_White!" ANSI_COLOR_RESET "\n");
    printf(ANSI_COLOR_RESET "This text is ANSI_COLOR_RESET!" ANSI_COLOR_RESET "\n");
    printf(ANSI_COLOR_Bright_Yellow "This text is MAGENTA!" ANSI_COLOR_RESET "\n");
    printf(ANSI_COLOR_Bright_Blue "This text is CYAN!" ANSI_COLOR_RESET "\n");
    */






/**
 * FUNCTION: type_casting
 * 
 * USED FOR CASTING THE PARTS OF THE COMMAND LINE
 * 
 * TAKE THE command_head OF THE COMMAND LINE AS A STARTING POINT
 * 
 * RETURN POINTER TO THE PARTS AFTER CASTING
*/

char * type_casting(utility *) ;

#endif