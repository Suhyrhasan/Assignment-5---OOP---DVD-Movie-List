/******************************************************************************
 * AUTHOR		 : Suhyr Hasan
 * STUDENT ID 	 : 1022520
 * Assignment #5 : DVD Movie List Intro to OOP
 * CLASS 		 : CS1B
 * SECTION 		 : MW 7:30p - 9:50p
 * DUE DATE		 : 12/16/2019
 *****************************************************************************/
#include "myheader.h"
#include "StackList.h"
/****************************************************************
 * StackList()
 * Constructor; Initialize class attributes
 * Parameters: none
 * Return: none
 ***************************************************************/
StackList::StackList()
{
	head = NULL;
	stackCount = 0;
}
/****************************************************************
 * ~StackList()
 * Destructor; Clears the linked list
 * Parameters: none
 * Return: none
 ***************************************************************/
StackList::~StackList()
{
	while (stackCount != 0)
	    {
	        Pop();
	        stackCount--;
	    }
}
