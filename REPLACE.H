#ifndef __REPLCAE_H_
#define __REPLACE_H_

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




int nOf_b ;
int nOf_f ;
int nOf_l ;
int nOf_i ;
int nOf__ ;


/**
 * FUNCTION: opt_filler
 * 
 *  USED TO TURN THE FLAGS OF THE OPTS ON IF THERE ARE 
 * 
 * TAKE THE command_head OF THE COMMAND AS A PARAMETER
 * 
 * RETURN VOID
*/
void opt_filler(utility *);



/**
 * FUNCTION: fileTypeChecker
 * 
 * USED FOR CHECKING THE TYPE OF THE FILE
 * 
 * TAKE POINTER TO THE ARRAY OF THE STRING
 * 
 * return 1 IN SUCCESS
 * 
*/
int fileTypeChecker(char *) ;




/**
 * FUNCTION: dashcounter 
 * 
 * USED TO COUNT NUMBER OF DASHES
 * 
 * TAKE THE command_head OF THE COMMAND AS A PARAMETER
 * 
 * RETURN void

*/
void dashcounter(char *) ;



/**
 * FUNCTION: dashValidity
 * 
 * USED FOR CHECKING THE THE VALIDITY OF -- IN THE COMMAND
 * 
 * return void
 * 
*/
void dashValidity(void) ;

#endif
