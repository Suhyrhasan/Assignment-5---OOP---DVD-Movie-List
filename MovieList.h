/******************************************************************************
 * AUTHOR		 : Suhyr Hasan
 * STUDENT ID 	 : 1022520
 * Assignment #5 : DVD Movie List Intro to OOP
 * CLASS 		 : CS1B
 * SECTION 		 : MW 7:30p - 9:50p
 * DUE DATE		 : 12/16/2019
 *****************************************************************************/
#ifndef MOVIELIST_H_
#define MOVIELIST_H_
#include "myheader.h"
#include "stacklist.h"
/****************************************************************
 * MovieList Class
 * This class represents an MovieList object.
 ***************************************************************/
class MovieList: public StackList // derived class
{
public:
	/******************************
	 ** CONSTRUCTOR & DESTRUCTOR **
	 ******************************/

	/****************************************************************
	 * MovieList();
	 * Constructor; Initialize class attributes
	 * Parameters: none
	 * Return: none
	 ***************************************************************/
	MovieList ();

	/****************************************************************
	 * ~Animal ();
	 * Destructor; does not perform any specific function
	 * Parameters: none
	 * Return: none
	 ***************************************************************/
	~MovieList ();

	/****************
	 ** MUTATORS **
	 ****************/

	/*******************************************************************
	 * void CreateList (ifstream &inFile);
	 *
	 * Mutator; This method will create the linked list
	 *------------------------------------------------------------------
	 * Parameter: inFile (ifstream)  // IN - Input File
	 *------------------------------------------------------------------
	 * Return: none
	 *******************************************************************/
	void CreateList (ifstream &inFile); // creates the linked list

	/***************
	 ** ACCESSORS **
	 ***************/

	/*******************************************************************
	 * 	void OutputList (ofstream &out) const;
	 *
	 * Accessor;This method will print all of stack list's details
	 *------------------------------------------------------------------
	 * Parameters: out (ofstream)  // OUT - Output File
	 *------------------------------------------------------------------
	 * Return: none
	 *******************************************************************/
	void OutputList (ofstream &out) const; //print all of stack's details

protected:
	string WordWarp(string synopsis) const; // format the output of the synopsis
	void TitleWrap(ofstream &out,string title, int maxLength) const;
	// format the output of the title
	string PrinterHeader(string asName, int asNum , char asType)const;
	//format the output of the header
};
#endif /* MOVIELIST_H_ */
