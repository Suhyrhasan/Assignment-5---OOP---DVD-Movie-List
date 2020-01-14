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
 * Method OutputList : MovieList
 * ____________________________________________________________________________
 *  This method will output a list of movies to a file.
 *
 * PRE-CONDITIONS
 * 	  The following parameters need to have a defined value prior to calling
 * 	  the function:
 * 	                out = Output File.
 *
 * POST-CONDITIONS
 * 	  This function will output a list of movies to a file.
 ******************************************************************************/
void MovieList::OutputList (ofstream &out) const
{
	// Output header to file
	out << PrinterHeader("DVD Movie List Intro to OOP", 5 , 'A');

	DVDNode *perPtr = head; // CALC & OUT - current node to output
	int counter = 1; // CALC - number of movies
	int line1Width = 10 - head->leadingActor.size();   // CALC - formats setw
	int line2Width = 10 - head->supportingActor.size();// CALC - formats setw

	// If Statement- will make sure
	// to check if the stack if empty first.
	if(head == NULL)
	{
		cout << "\nCan" << '\'' << "t DISPLAY an empty stack!" << endl;
	}
	while( perPtr != NULL)
	{
		out <<"\n************************************";
		out << "***************************************\n";
		out << "Movie#: " << right << setw(2) << counter;
		out << setw(9) << " " << "Title: ";
		TitleWrap(out, perPtr->title, 35);
		out << "\n----------------------------------------";
		out << "-----------------------------------\n";
		out << "Year: " << perPtr->year;
		out << setw(9) << " " << "Rating: " << perPtr->rating<< endl;
		out << "----------------------------------------";
		out << "-----------------------------------\n";
		out << "Leading Actor:    " << left << setw(26) << perPtr->leadingActor;
		out << right << setw(line1Width) << " " <<  "Genre 1: "
				<< perPtr->genre << endl;
		out << "Supporting Actor: " << left << setw(25) <<perPtr->supportingActor;
		out << right << setw(line2Width) << "  " << "Genre 2: "
				<< perPtr->alternateGenre << endl;
		out << "----------------------------------------";
		out << "-----------------------------------\n";
		out << "Plot: " << endl;
		out << WordWarp(perPtr->synopsis) << endl;
		out <<"************************************";
		out << "***************************************" << endl;
		counter++;
		perPtr = perPtr -> next;
	}
}
