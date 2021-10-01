/*
 * =====================================================================================
 *
 *       Filename:  Instruction.cpp
 *
 *    Description: Implementation 
 *
 *        Version:  1.0
 *        Created:  09/21/2021 11:39:49
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include "Instruction.hpp"
#include <iostream>

Instruction::Instruction() {}


Instruction::Instruction(string theName, short int theCode, short int theLength) 
{
	name = theName;
	code = theCode;
	length = theLength;
}


void Instruction::display()
{
	cout << name <<"," << code << "," << length << endl;
}

int Instruction::getCode()
{
	return code;
}

string Instruction::getName()
{
	return name;
}





