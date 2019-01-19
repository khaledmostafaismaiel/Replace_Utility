#ifndef __LINKEDLIST_H_
#define __LINKEDLIST_H_
int dashIndex;

/**
 * Struct utilty
 * 
 * is structure for command line parts
 * 
 * char part[50] this is part from comand line
 * 
*/
typedef struct opt
{
    char part[50];
    struct opt *next;
} opt;

opt *head_opt = NULL;
opt *new_opt = NULL;
opt *current_opt = NULL;

/**
 * FUNCTION: opt_maker
 * 
 * USED FOR LINKE opts PARTS TO EACH OTHER
 * 
 * TAKE ARRAY OF CHAR WHICH WILL BE IN LINKING
 * 
 * return 0 in case of un success
 * 
*/
int optList_maker(char const *);

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
file_list *current_file_list = NULL;

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
void filesList_maker(char const *);

/**
 * FUNCTION: optListcorector
 * 
 * USED FOR CORRECTING THE OPT LIST FILE
 * 
 * 
 * return void
 * 
*/



#endif