r/**
 * main.c
 * 
 * The main entrypoint of the "I really love robots" program.  The
 * program prints the phrase "I really love robots!" to the screen.
 *
 * @author Tanya L. Crenshaw
 * @since August 2013
 *
 */
#include "robot.h"
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * main()
 *
 * The main entrypoint of the program.
 * 
 * @param command line arguments.
 * 
 * @returns nothing.
 */
 
 int isNumber(const char *number)
{
    int i = 0;

    //checking for negative numbers
    if (number[0] == '-')
        i = 1;
    for (; number[i] != 0; i++)
    {
        //if (number[i] > '9' || number[i] < '0')
        if (!isdigit(number[i]))
            return 0;
    }
    return 1;
}

int main(int argc, const char * argv[])
{  
  robotPrintAscii();
  
  if(argc>1 && isNumber(argv[1])){
	dalekPrintAscii();
	robotPrintMessage();
  
  }
  return 0;
}
