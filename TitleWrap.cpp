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
 * Method TitleWrap : Class MovieList
 * ____________________________________________________________________________
 *  This method will word wrap the title to make sure it does not pass the
 *  character limit.
 * ____________________________________________________________________________
 * PRE-CONDITIONS
 * 	  The following parameters need to have a defined value prior to calling
 * 	  the function:
 * 	               out = Output File
 * 	               title = The title of the movie.
 * 	               maxLength = The max length of characters
 * 	                           the title can have.
 *
 * POST-CONDITIONS
 * 	  This function will not return anything.
 ******************************************************************************/
void MovieList::TitleWrap(ofstream &out, // OUT  - Output File
		                  string title,  // IN   - The title of the movie.
		                  int maxLength) const// CALC - The max length of characters
                                              //        the title can have.
{
	string newTitle;
	// IF statement will determine if the program should output
	// the whole title or cut off some of the characters and instead
	// include "..."
	if (title.size() > 46)
	{
		newTitle = title.substr(0, maxLength);
		out << newTitle << "... ";
	}
	else if (title.size() <= 47)
	{
		out << title;
	}
}
