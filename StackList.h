/******************************************************************************
 * AUTHOR		 : Suhyr Hasan
 * STUDENT ID 	 : 1022520
 * Assignment #5 : DVD Movie List Intro to OOP
 * CLASS 		 : CS1B
 * SECTION 		 : MW 7:30p - 9:50p
 * DUE DATE		 : 12/16/2019
 *****************************************************************************/
#ifndef STACKLIST_CPP_
#define STACKLIST_CPP_
#include "myheader.h"
/****************************************************************
 * StackList
 * This class represents an stack list object.
 ***************************************************************/
class StackList // Base Class - Using linked list implementation
{
public:
	/******************************
	 ** CONSTRUCTOR & DESTRUCTOR **
	 ******************************/
	/****************************************************************
	 * StackList ();
	 * Constructor; Initialize class attributes
	 * Parameters: none
	 * Return: none
	 ***************************************************************/
	StackList ();

	/****************************************************************
	 * ~StackList ();
	 * Destructor; Clears the linked list
	 * Parameters: none
	 * Return: none
	 ***************************************************************/
	~StackList ();

	/****************
	 ** MUTATORS **
	 ****************/

	/*******************************************************************
	 * void Push(DVDNode newDVD);
	 *
	 * Mutator; This method will create a DVDNode, add a DVDNode in the
	 *           stack, by adding to the front of the linked List
	 *------------------------------------------------------------------
	 * Parameter: newDVD (DVDNode)  // IN - new node
	 *------------------------------------------------------------------
	 * Return: none
	 *******************************************************************/
	void Push(DVDNode newDVD); // create a new DVDNode

	/*******************************************************************
	 * DVDNode Pop();
	 *
	 * Mutator; This method will return the DVDNode in the top of the
	 *          stack, remove the DVDNode from the stack, delete the
	 *          DVDNode
	 *------------------------------------------------------------------
	 * Parameter: none
	 *------------------------------------------------------------------
	 * Return: perPtr (DVDNode)  / OUT -DVDNode in the top of the stack
	 *******************************************************************/
	DVDNode Pop(); // deletes the DVDNode in the top of the stack

	/***************
	 ** ACCESSORS **
	 ***************/

	/****************************************************************
	 * bool IsEmpty() const;
	 *
	 * Accessor; This method will check if stack is empty
	 * --------------------------------------------------------------
	 * Parameters: none
	 * --------------------------------------------------------------
	 * Return: boolean expression
	 *******************************************************************/
	bool IsEmpty() const; // check if stack is empty

	/*******************************************************************
	 * DVDNode Peek() const;
	 *
	 * Accessor; This method will return the DVDNode at the top of
	 *           the stack
	 *------------------------------------------------------------------
	 * Parameters: none
	 *------------------------------------------------------------------
	 * Return: perPtr (DVDNode)  / OUT -DVDNode in the top of the stack
	 *******************************************************************/
	DVDNode Peek() const; // return the DVDNode at the top of the stack

	/*******************************************************************
	 * 	int Size() const;
	 *
	 * Accessor; This method will return the number of people
	 *           in the stack
	 *------------------------------------------------------------------
	 * Parameters: none
	 *------------------------------------------------------------------
	 * Return: stackCount (int) - Total number of persons in the stack
	 *******************************************************************/
	int Size() const; // return the number of people in the stack

protected:
	DVDNode *head;  // head pointer for stack
	int stackCount; // total number of persons in the stack
};
#endif /* STACKLIST_CPP_ */
