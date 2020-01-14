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
 * Method WordWrap : Class MovieList
 * ____________________________________________________________________________
 *  This method will word wrap the plot to make sure it outputs in the
 *  correct format – returns head.
 *
 * PRE-CONDITIONS
 * 	  The following parameters need to have a defined value prior to calling
 * 	  the function:
 * 	               plot = The plot of the movie
 * POST-CONDITIONS
 * 	  This function will word wrap the plot to make sure it outputs in the
 *    correct format – returns head.
 ******************************************************************************/
string MovieList::WordWarp(string synopsis) const // IN - The plot of the movie
{
	const int maxLength = 75;
	int index;		// CALC - Total characters in the synopsis
	int count;		// CALC - Iterator which determines number of loops.
	string word;    // CALC - current word being processed
	string line;    // CALC - current line being processed
	string plot;	// CALC - synopsis with correct word wrapping

	// Determines how many times to loop
	index = synopsis.length();

	for (count = 0; count < index; count++)
	{
		if(synopsis[count] != ' ')
		{
			word = word + synopsis[count];
		}
		else
		{
			if (line.length() + word.length() > maxLength)
			{
				// ends line if the output line gets too long
				plot = plot + line + '\n';
				line.clear();
			}
			// adds word to the line
			line = line + word + ' ';
			word.clear();
		}
	}
	if (line.length() + word.length() > maxLength)
	{
		// ends line if output line gets too long
		plot = plot + line + '\n';
		line.clear();
	}
	// adds last word to the line
	plot = plot + line + word;
	word.clear();

	// returns the word wrapped string
	return plot;
}
