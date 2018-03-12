/*
 * COP3503termp.h
 *
 *  Created on: Mar 5, 2018
 *      Author: User
 */

#ifndef STARSHIP_H_
#define STARSHIP_H_

#include <iostream>
#include <string>
using namespace std;


class Starship{
private:
	int starshipHealth;
	int phasorPower;
	int numOfMissles;
	string pilotName;

public:
	Starship(string pilotName);
	//~Starship();
	int getPhasorPower();
	int getNumOfMissles();
	string getPilotName();

};

Starship::Starship(string pilotName){
	this -> numOfMissles = 5;
	this -> phasorPower = 500;
	this -> pilotName = pilotName;
	this -> starshipHealth = 1000;
}

int Starship::getPhasorPower(){
	return this-> phasorPower;
}

int Starship::getNumOfMissles(){
	return this-> numOfMissles;
}

string Starship::getPilotName(){
	return this->pilotName;
}





#endif /* STARSHIP_H_ */
