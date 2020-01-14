/******************************************************************************
 * AUTHOR		 : Suhyr Hasan
 * STUDENT ID 	 : 1022520
 * Assignment #5 : DVD Movie List Intro to OOP
 * CLASS 		 : CS1B
 * SECTION 		 : MW 7:30p - 9:50p
 * DUE DATE		 : 12/16/2019
 *****************************************************************************/
#include "myheader.h"
#include "stacklist.h"
/******************************************************************************
 * Method Size : Class StackList
 * ____________________________________________________________________________
 *  This method will return the number of people in the stack.
 *
 * PRE-CONDITIONS
 * 	  The following parameters need to have a defined value prior to calling
 * 	  the function:
 *
 * POST-CONDITIONS
 * 	  This function will return the number of people in the stack.
 ******************************************************************************/
int StackList::Size() const
{
	// returns the number of
	// movies in the list
	return stackCount;
}
