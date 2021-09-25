/*
 * =====================================================================================
 *
 *       Filename:  Instruction.cpp
 *
 *    Description: Implementation 
 *
 *        Version:  1.0
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  J. Aviña
 *   Organization:  
 *
 * =====================================================================================
 */
#include "Instruction.hpp"

Instruction::Instruction(){}

Instruction::Instruction(string theName, int theCode)
{
	name = theName;
	code = theCode;
}

string Instruction::getName()
{
	return name;
}


int Instruction::getCode()
{
	return code;
}


