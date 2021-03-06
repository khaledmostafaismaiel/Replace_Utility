#ifndef __REPLCAE_H_
#define __REPLACE_H_


#define LONGESTWORDINTHEWORLD 44



/**
 * FUNCTION: command_checker
 * 
 * USED FOR CHICKING THE SYNTAX OF THE COMMAND LINE
 * 
 * CALL OTHER SUB FUNCTIONS WHICH USED IN THE SAME PERPUSE BUT IN SMALL SCALE
 * 
 * return 1 IF THE COMMCND LINE SYNTAX IS TRUE
 * return 0 IF THE COMMAND LINE SYNATX IS FALSE
*/
int command_checker(void);

int nOf_b;
int nOf_f;
int nOf_l;
int nOf_i;
int nOf__;
int nOfopts;

/**
 * FUNCTION: optTypeChecker
 * 
 *  USED TO TURN THE FLAGS OF THE OPTS ON IF THERE ARE 
 * 
 * TAKE THE command_head OF THE COMMAND AS A PARAMETER
 * 
 * RETURN 1 IF THE PARAMETER WAS OPT
*/
int optTypeChecker(char const *);

/**
 * FUNCTION: fileTypeChecker
 * 
 * USED FOR CHECKING THE TYPE OF THE FILE
 * 
 * TAKE POINTER TO THE ARRAY OF THE STRING
 * 
 * return void
 * 
*/
void fileTypeChecker(char const *);

/**
 * FUNCTION: dashcounter 
 * 
 * USED TO COUNT NUMBER OF DASHES
 * 
 * TAKE THE command_head OF THE COMMAND AS A PARAMETER
 * 
 * RETURN void

*/
void dashcounter(char const *);

/**
 * FUNCTION: dashValidity
 * 
 * USED FOR CHECKING THE THE VALIDITY OF -- IN THE COMMAND
 * 
 * TAKE THE SECOND ELEMENT IN THE ARGV AS PRAMETER
 * 
 * return void
 * 
*/
void dashValidity(char const *);

/*
char word[] = "pneumonoultramicroscopicsilicovolcanoconiosis";
for(int i=1;word[i]!=NULL;++i){
    printf("%d\n",i);
}
*/

char from[LONGESTWORDINTHEWORLD];
char to[LONGESTWORDINTHEWORLD];

/**
 * FUNCTION: fromToassin
 * 
 * USED TO ASSIN 'FROM' AND 'TO' VALUES
 * 
 * 
 * return void
 * 
*/
void fromToassin(char const *, char const *);



/**
 * FUNCTION: readMe
 * 
 * USED FOR GIVE A SHORT NOTE FOR THE REPLCAE UTILITY USAGE
 * 
 * RETURN VOID
*/
void readMe(void);






/**
 * FUNCTION: fromAndtoCases
 * 
 * USED TO CHECK VALIDITY OF FROM AND TO STRINGS
 * 
 * RETURN VOID
*/
void fromAndtoCases(void);
#endif
