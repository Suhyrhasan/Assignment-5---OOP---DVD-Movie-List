/******************************************************************************
 * AUTHOR		 : Suhyr Hasan
 * STUDENT ID 	 : 1022520
 * Assignment #5 : DVD Movie List Intro to OOP
 * CLASS 		 : CS1B
 * SECTION 		 : MW 7:30p - 9:50p
 * DUE DATE		 : 12/16/2019
 *****************************************************************************/
#ifndef MYHEADER_H_
#define MYHEADER_H_
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <sstream>
#include<cstdlib>
using namespace std;

// DVDNODE Struct
struct DVDNode {
	string title;           // store movie's title
	string leadingActor;    // store leading actor/actress
	string supportingActor; // store supporting actor/actress
	string genre;           // store movie’s genre
	string alternateGenre;  // store movie’s alternate genre
	int year;               // store movie’s release year
	int rating;             // store movie’s rating
	string synopsis;        // store movie’s synopsis
	DVDNode *next;          // linked list next pointer
};

string PrinterHeader(string asName, int asNum , char asType);
/**************************************************************************
 * Function PrinterHeader - This function receives an assignment name, type
 * 						    and number then outputs the appropriate class
 * 						    heading. asType is defaulted to Lab as there
 * 						    are more labs than Assignments. ==> returns
 * 						    nothing - This will output the class heading.
 *************************************************************************/

DVDNode GetNode();
/*******************************************************************************
 * Function GetNode - This function ask the user information about a new movie
 *                   and then stores it in the linked list.
 ******************************************************************************/
#endif /* MYHEADER_H_ */
