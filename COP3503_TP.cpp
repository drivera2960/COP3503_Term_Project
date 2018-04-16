/*
 * COP3503termp.cpp
 *  Created on: Mar 10, 2018
 *      Author: Dave
 */

#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>
#include <algorithm>

#include "Store.h"

std::string line;

int main(){

std::cout<< std::fixed << std::setprecision(2);	//Sets cout to output numbers with 2 decimal places

Store supermarket = Store();		//Creates object <supermarket>

std::ifstream productDataFile;			//Initializes productDataFile as a istream object
productDataFile.open("FOOD.txt");	//Data will be streamed from the <FOOD.txt> file

// Saves one line of the text file into "line", until eof (end of file) is reached.
while(std::getline(productDataFile, line)){

	std::vector<std::string> lineVec;			//<lineVec> is a vector that will be used to store the split strings
									//from the string "line"
	std::istringstream iss(line);		//create a string stream "iss" to operate on the string line.

//While-loop will split "line" by the spaces it contains.  It will store the splitted strings into "lineVec"
	while( iss >> line )
	{
		replace( line.begin(), line.end(), '_', ' ' );
		//line.erase(remove(line.begin(), line.end(), '_'), line.end());	//remove underscores from strings
	    lineVec.push_back(line);
	}
//The following bool expressions check what sections the each entry belongs to.
	if (lineVec.at(0).compare("produce") == 0){
		supermarket.addProduce(lineVec.at(1), lineVec.at(2), stod(lineVec.at(3)));
	}
	else if(lineVec.at(0).compare("meat") == 0){
			supermarket.addMeat(lineVec.at(1), lineVec.at(2), stod(lineVec.at(3)));
	}
    else if(lineVec.at(0).compare("drinks") == 0){
        supermarket.addDrinks(lineVec.at(1), lineVec.at(2), stod(lineVec.at(3)));
	}
    else if(lineVec.at(0).compare("cosmetics") == 0){
		supermarket.addCosmetics(lineVec.at(1), lineVec.at(2), stod(lineVec.at(3)));
	}
    else if(lineVec.at(0).compare("deli") == 0){
    	supermarket.addDeli(lineVec.at(1), stod(lineVec.at(2)), stod(lineVec.at(3)));
    }
    else if(lineVec.at(0).compare("bakery") == 0){
    	supermarket.addBakery(lineVec.at(1), stod(lineVec.at(2)));
    }
    else if(lineVec.at(0).compare("pharmacy") == 0){
    	supermarket.addPharmacy(lineVec.at(1), stod(lineVec.at(2)), stod(lineVec.at(3)));
    }
    else if(lineVec.at(0).compare("snacks") == 0){
    	supermarket.addSnacks(lineVec.at(1), stod(lineVec.at(2)), stod(lineVec.at(3)));
    }
    else if(lineVec.at(0).compare("HotFoods") == 0){
    	supermarket.addHotFoods(lineVec.at(1), stod(lineVec.at(2)));
    }
    else if(lineVec.at(0).compare("FrozenFoods") == 0){
    	supermarket.addHotFoods(lineVec.at(1), stod(lineVec.at(2)));
    }
	lineVec.clear();
}
	productDataFile.close();	//Closes the stream of productDataFile when the eof has been reached.

////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////

	supermarket.listInfo();

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
