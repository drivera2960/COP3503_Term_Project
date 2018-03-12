/*
 * COP3503termp.cpp
 *  Created on: Mar 8, 2018
 *      Author: Dave
 */
#include <iostream>
#include <sstream>
#include <string>
#include <fstream>
#include <vector>

#include "Store.h"
using namespace std;

string line;

int main(){

cout<< fixed << setprecision(2); //Sets cout to output numbers with 2 decimal places

Store supermarket = Store();	//Creates object <supermarket>

ifstream productDataFile;
productDataFile.open("FOOD.txt");

// Saves one line of the text file into "line", and checks if eof has been reached.
while(getline(productDataFile, line)){

	vector<string> lineVec;
	istringstream iss(line);

	while( iss >> line )
	    lineVec.push_back(line);

	if (lineVec.at(1).compare("produce") == 0){
			supermarket.addProduce(lineVec.at(0), lineVec.at(1), lineVec.at(2), stod(lineVec.at(3)));
		}
	else if (lineVec.at(1).compare("meat") == 0){
			supermarket.addMeat(lineVec.at(0), lineVec.at(1), lineVec.at(2), stod(lineVec.at(3)));
	}

	lineVec.clear();
}
	productDataFile.close();

	supermarket.listInfo();
	return 0;
}

//create an error check on bad lines
//alphabetize the objects
//create a search engine
//add images
