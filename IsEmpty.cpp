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
 * Method IsEmpty : Class StackList
 * ____________________________________________________________________________
 *  This method will check if stack is empty  – returns boolean.
 *
 * PRE-CONDITIONS
 * 	  The following parameters need to have a defined value prior to calling
 * 	  the function:
 *
 * POST-CONDITIONS
 * 	  This function will check if stack is empty  – returns boolean.
 ******************************************************************************/
bool StackList::IsEmpty() const
{
    if(stackCount == 0)
    {
        // boolean if stack is empty
        return true;
    }
    else
    {
        // boolean if stack is not empty
        return false;
    }

}
