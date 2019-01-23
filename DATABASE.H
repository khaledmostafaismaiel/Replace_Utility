#ifndef __DATABASE_H_
#define __DATABASE_H_

FILE *pFile;

/**
 * FUNCTION: fileOccurance
 * 
 * USED FOR CHECKING THE OCCURANCE OF THE .txt FILES IN THIS DIRECTORY
 * 
 * TAKE POINTER TO THE FILE NAME
 * 
 * return  void
 * 
*/
void fileOccurance(char const *);

/**
 * FUNCTION: optImplement
 * 
 * USED FOR CALL -i -b -f -l IF THERE ARE
 *  
 * TAKE FILE NAME AS POINTER
 * 
 * return  void
 * 
*/
void optImplement(file_list *);

/**
 * FUNCTION: b_Implemit
 * 
 * USED FOR implement -b
 *  
 * TAKE FILE NAME AS A POINTER
 * 
 * return  void
 * 
*/
void b_Implemit(char *);

/**
 * FUNCTION: f_Implemit
 * 
 * USED FOR implement -f
 *
 * TAKE FILE NAME AS POINTER
 * 
 * TAKE FILE CONTAIN LINKED LIST HEAD AS A SECOND PARA
 * 
 * return  void
 * 
*/
void f_Implemit(char *, fileContain *);

/**
 * FUNCTION: l_Implemit
 * 
 * USED FOR CALL -l
 * 
 * TAKE FILE NAME AS POINTER
 * 
 * TAKE FILE CONTAIN LINKED LIST HEAD AS A SECOND PARA
 *  
 * return  void
 * 
*/
void l_Implemit(char *, fileContain *);

/**
 * FUNCTION: fileEmpty
 * 
 * USED FOR CHECKING THE FILES ARE EMPTY OR NOT
 * 
 * TAKE THE FILE NAME AS POINTER
 *  
 * return  void
 * 
*/
void fileEmpty(char const *);

/**
 * FUNCTION: DB_convertor
 * 
 * USED TO CONVERT DATABASE TO LINKED LIST
 * 
 * TAKE THE FILE NAME AS POINTER
 * TAKE HEAD FILE CONTAIN LINKED LIST
 *  
 * return  void
 * 
*/
void DB_convertor(char *, fileContain *);

/***
 * FUNCTION:fileUpdate
 * 
 * TAKE FILE NAME AS PRAM
 * 
 * TAKE HEAD OF FILE CONTAINE LINKED LIST AS SECOND PARAM
 */
void fileUpdate(char *, fileContain *);

/* FUNCTION: clearBits
 * 
 * USED TO CLEAR ALL STRING BITS
 * 
 * TAKE A POINTER TO THE WORD
 * 
 * RETURN POINTER TO THE WORD 
 */
char *clearBits(char *);
#endif
