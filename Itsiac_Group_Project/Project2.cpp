//************************************  PROGRAM IDENTIFICATION  ***************************************
//*                                                                                                   *
//*   PROGRAM FILE NAME:  Project2.cpp          ASSIGNMENT #:  2            Grade: _________          *
//*                                                                                                   *
//*   PROGRAM AUTHOR:     _______________________          _________________________                  *
//*                           Brendan Ochs           &         Micaiah Skolnick                       *
//*                                                                                                   *
//*   COURSE #:  CSC 4060 11                            DUE DATE:  May 5, 2017                        *
//*                                                                                                   *
//*****************************************************************************************************
//***********************************  PROGRAM DESCRIPTION  *******************************************
//*                                                                                                   *
//*   PROCESS:                 NEED TO FILL THIS IN ******************************************************** *
//*                                                                                                   *
//*   USER DEFINED                                                                                    *
//*    MODULES     : newPage - Prints a blank line for each blank space left on the page              *
//*                  Footer - Prints a footer to signify end of program output                        *
//*                  Header - Prints a header to signify start of program output                      *
//*                  getData - Data from the input file is read into the program                      *
//*                  main - Variables are declared, functions are called, and headers are printed     *
//*                  processData - Read each Op code character and perform the subsequent action.     *
//*                                                                                                   *
//*****************************************************************************************************
#include <iostream>
#include <fstream>
#include <iomanip>
#include <ctype.h>
#include <string>
#include <sstream>
#include "GlobalVariables.h"
using namespace std;
//*****************************************************************************************************
void newPage(ofstream&dataOUT) {
		// Receives � the output file
		// Task - Insert blank lines to fill the rest of the current page
		// Returns - Nothing
		//Insert line ends until the end of page is reached
	while (lineCount < MAXLINECOUNT) {
		dataOUT << endl;
		lineCount++;
	}
	lineCount = 0; // Reset the line count to 0 for next page.
}
//*************************************  FUNCTION HEADER  *********************************************
void Header(ofstream &Outfile)
{       // Receives � the output file
		// Task - Prints the output preamble
		// Returns - Nothing
	Outfile << setw(35) << "Brendan and Micaiah";
	Outfile << setw(17) << "Class goes here";
	Outfile << setw(15) << "Section 11" << endl;
	Outfile << setw(27) << "Spring 2017";
	Outfile << setw(30) << "Assignment #2";
	Outfile << setw(35) << "---------------------------------- - ";
	Outfile << setw(35) << "---------------------------------- - " << endl << endl;
	lineCount += 4;
	return;
}
//************************************* END OF FUNCTION HEADER  ***************************************
//*************************************  FUNCTION FOOTER  *********************************************
void Footer(ofstream &Outfile){
		// Receives � the output file
		// Task - Prints the output salutation
		// Returns - Nothing
	Outfile << endl;
	Outfile << setw(35) << "-------------------------------- - " << endl;
 // Micaiah's change #2

	Outfile << setw(35) << "-------------------------------- - " << endl;
	lineCount += 4;
	return;
}
//*****************************************************************************************************
struct processType {
	int tArrival, pTime; // Need to add a lot more values for each structure
};
//*****************************************************************************************************
void getData(ifstream &dataIN) {


	int newItem = 0;


	while (newItem > 0) { //Read in integers until the last negative value is reached


		
	}
}
//************************************* END OF FUNCTION FOOTER  ***************************************

int main() {


		//Initialize local variables
	lineCount = 0;
	MAXLINECOUNT = 54;
	//processList = processList[50];


	// Receives � Nothing
	// Task - Call each necessary function of the program in order
	// Returns - Nothing
		//Initialize variables used in program.		
	lineCount = 0;
	MAXLINECOUNT = 54; //Set the max number of lines which fit on a page
	ifstream dataIN("Data_in.txt"); //Open the file containing data.
	ofstream dataOUT("dataOUT.txt"); //Create and open the file to write data to.		
	Header(dataOUT);// Print data header.
	getData(dataIN); //Retrieve data from input file
	//processData(dataOUT, dataIN); // Process each section of data from the input file.
	newPage(dataOUT); //Insert a page break before the footer
	Footer(dataOUT); //Print footer. 
	dataIN.close(); //Close input data file. 
	dataOUT.close(); //Close output data file.


	return 0;
}
