/**
 * robot.c
 *
 * A file that contains the supporting functions for main() in the
 * ~/robots example source for Software Engineering.
 *
 * @author Tanya L. Crenshaw, Nathan Schmedake, Kavya Mandla
 * @since August 2013
 *
 */
//@author David Vargas Puga, Kavya Mandla
#include "robot.h"

/**
 * robotPrintMessage
 *
 * This function prints the message, "I really love robots!"
 *
 * @returns none 
 */
void robotPrintMessage(void)
{
  printf("\n\nI really love robots!\n\n");
  return;
}

/**
 * robotPrintAscii
 *
 */
void robotPrintAscii(void)
{
  int i;
  char* blank = "                              ";
  blank = blank +30;
  printf("\n\n"
	 "UWR: Unidentified Wheeled Robot\n"
	 "%s    i_i    \n"
	 "%s   [0_0]   \n"
	 "%s  /|___|\\ \n"
	 "%s   d   b   \n",blank, blank, blank, blank);

  blank = blank - 10;
}

/**
 * dalekPrintAscii
 *
 */
void dalekPrintAscii(void)
{
  int i;
  char* blank = "                              ";
  blank = blank +30;
  printf("\n\n"
	 "I am Dalek, from Dr. Who\n"
	 "%s      <----->      \n" 
<<<<<<< HEAD
         "%s     <  (Q)  >     \n"        
=======
         "%s     <  (A)  >     \n"        
>>>>>>> f43f85e1b2a2dba4b0507b02a47965d280735477
         "%s     |       |     \n"
         "%s    < ------- >    \n"
         "%s    o         o    \n"
         "%s    o  Q  ()  o    \n"
	 "%s   o           o   \n"
   	 "%s o o o o o o o o o \n"
   	 "%s o o o o o o o o o \n"
   	 "%s o o o o o o o o o \n", blank, blank, blank, blank, blank, blank, 
	 blank, blank, blank, blank);
  blank = blank - 10;
}
