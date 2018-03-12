/*
 * COP3503termp.cpp
 *  Created on: Mar 10, 2018
 *      Author: Dave
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
			supermarket.addProduce(lineVec.at(0), lineVec.at(1), lineVec.at(2), stod(lineVec.at(3)));
		}
	else if (lineVec.at(1).compare("meat") == 0){
			supermarket.addMeat(lineVec.at(0), lineVec.at(1), lineVec.at(2), stod(lineVec.at(3)));
	}

	lineVec.clear();
}
	productDataFile.close();	//Closes the stream of productDataFile when the eof has been reached.

	supermarket.listInfo();
	return 0;
}

//create an error check on bad lines
//add additional "aisle" classes
//create a search engine
//add images/create gui
