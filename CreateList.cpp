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
#include "movielist.h"
/******************************************************************************
 * Method CreateList : Class MovieList
 * ____________________________________________________________________________
 *  This method will create a linked list – returns nothing.
 *
 * PRE-CONDITIONS
 * 	  The following parameters need to have a defined value prior to calling
 * 	  the function:
 * 	               inFile = Input File
 *
 * POST-CONDITIONS
 * 	  This function will create a linked list – returns nothing.
 ******************************************************************************/
void MovieList::CreateList (ifstream &inFile) // IN - Input File
{
	DVDNode  newDVD; // CALC - new movie being read in
	// For Loop to read in movies from file
	while(inFile)
	{
		getline(inFile, newDVD.title);
		getline(inFile, newDVD.leadingActor);
		getline(inFile, newDVD.supportingActor);
		getline(inFile, newDVD.genre);
		getline(inFile, newDVD.alternateGenre);
		inFile >> newDVD.year;
		inFile >> newDVD.rating;
		inFile.ignore(10000, '\n');
		getline(inFile, newDVD.synopsis);
		inFile.ignore(10000, '\n');

		// Push - Method from class StackList to add a node
		Push(newDVD);
	}
}
