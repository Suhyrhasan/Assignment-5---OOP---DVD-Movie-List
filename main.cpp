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
 * DVD Movie List Intro to OOP
 * ----------------------------------------------------------------------------
 * This program will allows a user to track/search their DVDs.At the start of
 * the program, it will ask the user to specify the input and output file they
 * would like to use. There's also an option for the user to use a default file.
 * ----------------------------------------------------------------------------
 *	INPUT:
 *	      inp_file  = The name of the input file
 *	      out_file  = The name of the output file
 *	      option    = The menu option
 *	OUTPUT:
 *****************************************************************************/
int main()
{
	// In & Out file.
	ifstream inFile;
	ofstream out;

	string inp_file;  // IN - The name of the input file
	string out_file;  // IN - The name of the output file
	int option;       // IN - The menu option
	MovieList movies; // CALC - list of movies

	// Output header to console
	cout << PrinterHeader("DVD Movie List Intro to OOP", 5 , 'A');
	/**************************************************************************
	 * INPUT: The program will ask the user which input and output file they
	 *        would like to use. Then it will use an If Statement if the
	 *        user inputed a valid file or not.
	 *
	 * Example: What input file would you like to use?  : InFile.txt
	 *          What output file would you like to use? : OutFile.txt
	 **************************************************************************/
	cout << "\nWhat input file would you like to use (type d for default file)?  ";
	getline(cin, inp_file);

	cout << "What output file would you like to use (type d for default file)? ";
	getline(cin, out_file);

	// IF statement will check the user's input, if user inputs
	//  'd' the program will automatically open the default file
	if ( inp_file == "d")
	{
		inFile.open("InputFile.txt");
		inp_file = "InputFile.txt";
	}
	else
	{
		inFile.open(inp_file.c_str());
	}
	if (inFile.fail())
	{

		cout << "Unable to open input file" << endl;
		return -1;
	}
	// IF statement will check the user's input, if user inputs
	//  'd' the program will automatically open the default file
	if( out_file == "d")
	{
		out.open("OFile.txt");
		out_file = "OFile.txt";
	}
	else
	{
		out.open(out_file.c_str());
	}
	// Creating Linked List
	cout << "\nCreating list from file " << inp_file<< "...\n";
	movies.CreateList(inFile);
	cout << "List Created!";
	/**************************************************************************
	 * INPUT: Using a while loop the program will display a menu to the user.
	 *        Then it will the ask the user to input their choice. Using an
	 *        If Statement, the program will validate the user's input by making
	 *        sure the user input is an int and not a char. After, the program
	 *        will use a switch statement.
	 *
	 * Example: DVD MENU OPTIONS
	 *          1.Add A Movie
	 *          2.Remove A Movie
	 *          3.Is the stack empty?
	 *          4.What Movie is on top?
	 *          5.How Many Movies Are There?
	 *          0.to Exit
	 *          Enter an option (0 to exit):
	 **************************************************************************/
	while(1)
	{
		// Enumating Menu Items
		enum menu {EXIT,PUSH,POP,ISEMPTY,PEEK,SIZE, OUTPUT};
		// MENU OPTION
		cout << "\n\nDVD MENU OPTIONS" << endl;
		cout << "1 – Add A Movie" << endl;
		cout << "2 – Remove A Movie" << endl;
		cout << "3 – Is the stack empty?" << endl;
		cout << "4 – What Movie is on top?"<< endl;
		cout << "5 – How Many Movies Are There?"<< endl;
		cout << "6 – Output Entire Movie List"<< endl;
		cout << "0 - EXIT" << endl;
		cout << "Enter an option (0 to exit): ";

		//If Statement
		if (!(cin >> option))
		{
			cin.clear();
			cin.ignore(1000, '\n');
			cout << "\n*** Please input a number between 0 and 6   ****\n";
		}
		else
		{
			cin.ignore(1000, '\n');
			switch (option) {
			/***********************************************************************
			 * Case PUSH: This case will create a DVDNode, add a DVDNode in the
			 *            stack, by adding to the front of the linked List – returns
			 *            nothing.
			 ***********************************************************************/
			case PUSH: {
				// uses the function GetNode() to get the node
				movies.Push(GetNode());
				cout << "\nYour movie has been added to the list.";
			} break;
			/***********************************************************************
			 * Case POP: This case will return the DVDNode in the top of the
			 *           stack, and then remove the DVDNode from the stack, delete
			 *           the DVDNode – returns nothing.
			 ***********************************************************************/
			case POP:{
				if(movies.Size() == 0)
				{
					cout << "\nThere is nothing to Pop! - The list is empty.";
				}
				else
				{
					cout << "\nPopping " << movies.Pop().title << "...\n";
					cout << "Success!";
				}
			} break;
			/***********************************************************************
			 * Case ISEMPTY: This case will check if stack is empty–returns boolean.
			 ***********************************************************************/
			case ISEMPTY:{
				if(movies.IsEmpty())
				{
					cout << "\nThe list is empty.";
				}
				else
				{
					cout << "\nThe list is NOT empty.";
				}
			}break;
			/***********************************************************************
			 * Case PEEK: This case will return the DVDNode at the top of the stack.
			 ***********************************************************************/
			case PEEK: {
				if(movies.Size() == 0)
				{
					cout << "\nThere is nothing to Peek at.";
				}
				else
				{
					cout << "\nPeeking at: "<< endl;
					cout << "Title:            " << movies.Peek().title << endl;
					cout << "Leading Actor:    " << movies.Peek().leadingActor
							<< endl;
					cout << "Supporting Actor: " << movies.Peek().supportingActor
							<< endl;
					cout << "Genre:            " << movies.Peek().genre << endl;
					cout << "Alternate Genre:  " << movies.Peek().alternateGenre
							<< endl;
					cout << "Year:             " << movies.Peek().year << endl;
					cout << "Rating:           " << movies.Peek().rating << endl;
				}
			}break;
			/***********************************************************************
			 * Case SIZE: This case will return the number of people in the stack.
			 ***********************************************************************/
			case SIZE: {
				if(movies.Size() == 0)
				{
					cout << "\nThere are no movies in the list!";
				}
				else
				{
					cout << "\nThere are " <<movies.Size() << " movies on the list.\n";
				}
			}break;
			/***********************************************************************
			 * Case OUTPUT: This case will output a list of movies to a file.
			 ***********************************************************************/
			case OUTPUT: {
				cout << "\nOutputting List to " << out_file << "...\n";
				movies.OutputList(out);
			}break;
			/***********************************************************************
			 * Case 0 - When the user inputs '0' the program will end.
			 *
			 * Case default - If the user inputs an int less than 0 or greater then
			 *                5 the program will output an error message.
			 ***********************************************************************/
			case EXIT: exit(1);
			default:
				cout << "\n****The number " << option << " is an invalid entry     "
				"****"<< endl;
				cout << "****Please input a number between 0 and 6 ****";
				cout << endl;
			}// END OF SWITCH STATEMENT
		}// END OF IF STATEMENT
	}// END OF WHILE LOOP
	// CLOSE InFile & OFile
	inFile.close();
	out.close();
	return 0;
}
