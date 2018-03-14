/*
 * COP3503termp.cpp
 *  Created on: Mar 10, 2018
 *      Author: Dave
 *      This is simply a trial of creating the supermarket database portion of the Term Project,
 *      using a file input stream.
 *      Take note of the different classes (.h files), especially class <Items>
 *
 *      READ ALL THE COMMENTS in this .cpp file!!!
 */
#include <iostream>
#include <sstream>
#include <string>
#include <fstream>
#include <vector>
#include <iomanip>

#include "Store.h"

using namespace std;

string line;

int main(){

cout<< fixed << setprecision(2);	//Sets cout to output numbers with 2 decimal places

Store supermarket = Store();		//Creates object <supermarket>

ifstream productDataFile;			//Initializes productDataFile as a istream object
productDataFile.open("FOOD.txt");	//Data will be streamed from the <FOOD.txt> file

// Saves one line of the text file into "line", until eof (end of file) is reached.
while(getline(productDataFile, line)){


	vector<string> lineVec;			//<lineVec> is a vector that will be used to store the split strings
									//from the string "line"
	istringstream iss(line);		//create a string stream "iss" to operate on the string line.

//While-loop will split "line" by the spaces it contains.  It will store the splitted strings into "lineVec"
	while( iss >> line )
	    lineVec.push_back(line);


//The following bool expressions check what sections the each entry belongs to.
	if (lineVec.at(1).compare("produce") == 0){
			supermarket.addProduce(lineVec.at(0), lineVec.at(2), stod(lineVec.at(3)));
			supermarket.addItems(lineVec.at(0), lineVec.at(1), lineVec.at(2), stod(lineVec.at(3)));
		}
	else if (lineVec.at(1).compare("meat") == 0){
			supermarket.addMeat(lineVec.at(0), lineVec.at(2), stod(lineVec.at(3)));
			supermarket.addItems(lineVec.at(0), lineVec.at(1), lineVec.at(2), stod(lineVec.at(3)));
	}

	lineVec.clear();
}
	productDataFile.close();	//Closes the stream of productDataFile when the eof has been reached.


////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////

	//INSERT DIFFERENT <STORE> CLASS-GETTERS TO SEE RESULTS HERE!
	/*Study the difference between the <Items> class versus the <Produce> && <Meats> classes!
	 *We may not want to have a different class for each aisle.  Conceptually, an instance a supermarket can be an item,
	 *with the aisle (in this code, aisle is called section) being a field of the instance.
	 *The <Items> class uses this process, opposed to the  <Meats> and <Produce> classes.
	*/
	supermarket.listInfoItems();

////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////

	return 0;
}

//											 Future GOALS
/*
 * Create an error check on bad lines in the input-text-file, items that have already been created, and items with names of multiple words.
 *		Differentiate with underscore instead of <spaces> for multiple worded items?
 *			Test a different data structure other than vector as a container for the aisles (section)....?
 * Add additional "aisle" classes, or create super-classes for <Items>
 * Create a search engine
 * Add images/create GUI
 * 										CONTINUE TO BRAINSTORM
*/
