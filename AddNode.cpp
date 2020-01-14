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
#include "MovieList.h"
/******************************************************************************
 * Function AddNode
 * ____________________________________________________________________________
 * This function asks the user information about a new movie and then stores
 * it in the linked list.
 * ____________________________________________________________________________
 * PRE-CONDITIONS
 * 	  The following parameters need to have a defined value prior to calling
 * 	  the function:
 *
 * POST-CONDITIONS
 * 	  This function returns the node that the user input
 ******************************************************************************/
DVDNode GetNode()
{
	DVDNode film;   // IN - node to get from the user
	/*******************************************************************************
	 * INPUT - reads in data from the console
	 ******************************************************************************/
	cout << "\nEnter title: ";
	getline(cin, film.title);

	cout << "Enter leading actor: ";
	getline(cin, film.leadingActor);

	cout << "Enter supporting actor: ";
	getline(cin, film.supportingActor);

	cout << "Enter genre: ";
	getline(cin, film.genre);

	cout << "Enter alternate genre: ";
	getline(cin, film.alternateGenre);

	cout << "Enter year: ";
	cin  >> film.year;

	cout << "Enter rating ";
	cin  >> film.rating;
	cin.ignore(1,'\n');

	cout << "Enter synopsis: ";
	getline(cin, film.synopsis);

	// returns data read in from console
	return film;
}
