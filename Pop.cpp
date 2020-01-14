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
 * Method Pop : Class StackList
 * ____________________________________________________________________________
 *  This method will return the DVDNode in the top of the stack, and then
 *  remove the DVDNode from the stack, delete the DVDNode – returns nothing.
 *
 * PRE-CONDITIONS
 * 	  The following parameters need to have a defined value prior to calling
 * 	  the function:
 *
 *
 * POST-CONDITIONS
 * 	 This function will return the DVDNode in the top of the stack, and then
 *  remove the DVDNode from the stack, delete the DVDNode – returns nothing.
 ******************************************************************************/
DVDNode StackList::Pop()
{
    DVDNode *perPtr;    // CALC - node to be deleted
    DVDNode topNode;    // CALC - copy of node to be deleted

    // stores the head to be returned
    topNode = *head;

    // removes the head
    perPtr  = head;
    head = perPtr->next;
    delete perPtr;

    // decrement count of movies in the stack
    stackCount--;

    // returns copy node to be deleted
    return topNode;
}
