#ifndef __LINKEDLIST_H_
#define __LINKEDLIST_H_
int dashIndex;

/**
 * Struct opt
 * 
 * is structure for opts in the command
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
 * Take pointer of THE HEAD FILES LIST
 * 
 * return void
 * 
*/
void filesList_maker(char const *);





/**
 * Struct fileContain
 * 
 * IS STRUCT FOR WORDS IN THE FILES
 * 
 * WOLRD IS THE WORD IN THE FILE 
 * 
*/
typedef struct fileContain
{

    char word[44];
    struct fileContain *next;
    struct fileContain *prev ;
} fileContain;

fileContain *head_fileContain = NULL;
fileContain *tail_fileContain = NULL ;
fileContain *new_fileContain = NULL;
fileContain *current_fileContain = NULL;








/**
 * FUNCTION: fileContain_maker
 * 
 * USED FOR creating LIST OF WORDS
 * 
 * Take pointer of THE WORLD
 * 
 * return void
 * 
*/
void fileContain_maker(char * ) ;

#endif
