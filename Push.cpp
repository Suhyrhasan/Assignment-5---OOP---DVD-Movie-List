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
 * Method Push : Class StackList
 * ____________________________________________________________________________
 *  This method will create a DVDNode, add a DVDNode in the stack, by adding
 *  to the front of the linked List – returns nothing.
 *
 * PRE-CONDITIONS
 * 	  The following parameters need to have a defined value prior to calling
 * 	  the function:
 * 	                newDVD - New Node
 *
 * POST-CONDITIONS
 * 	  This function will create a DVDNode, add a DVDNode in the stack, by adding
 *    to the front of the linked List – returns nothing.
 ******************************************************************************/
void StackList::Push(DVDNode newDVD) // IN - New Node
{
    DVDNode *perPtr;  // CALC - new node to be added

    perPtr = new DVDNode;

    if (perPtr == NULL)
    {
        cout << "Sorry, out of memory";
    }
    else
    {
        // adds the new node
        perPtr->title           = newDVD.title;
        perPtr->leadingActor    = newDVD.leadingActor;
        perPtr->supportingActor = newDVD.supportingActor;
        perPtr->genre           = newDVD.genre;
        perPtr->alternateGenre  = newDVD.alternateGenre;
        perPtr->year            = newDVD.year;
        perPtr->rating          = newDVD.rating;
        perPtr->synopsis        = newDVD.synopsis;
        perPtr->next            = head;

        head = perPtr;
        perPtr  = NULL;

        // increments count of movies in list
        stackCount++;
    }
}
