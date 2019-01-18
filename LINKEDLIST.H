#ifndef __LINKEDLIST_H_
#define __LINKEDLIST_H_

/**
 * Struct utilty
 * 
 * is structure for command line parts
 * 
 * char part[50] this is part from comand line
 * 
*/
typedef struct utility
{
    char part[50];
    struct utility *next;
} utility;

utility *head_command = NULL;
utility *new_command = NULL;
utility *current_command = NULL;

/**
 * FUNCTION: command_maker
 * 
 * USED FOR LINKE COMMAND PARTS TO EACH OTHER
 * 
 * TAKE ARRAY OF CHAR WHICH WILL BE IN LINKING
 * 
 * return void
 * 
*/
void command_maker(char[]);




/**
 * Struct file_list
 * 
 * is structure for files in the command
 * 
 * char file[50] this is he file  from comand line
 * 
*/
typedef struct file_list
{
    char file[50];
    struct file_list *next;
} file_list;

file_list *head_file_list = NULL;
file_list *new_file_list = NULL;
file_list *current_file_list= NULL;



/**
 * FUNCTION: filesList_maker
 * 
 * USED FOR creating list of files
 * 
 * Take pointer of head utilty
 * 
 * return void
 * 
*/
void filesList_maker(char *);


#endif