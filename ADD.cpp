/*
 * =====================================================================================
 *
 *       Filename:  ADD.cpp
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

#include "ADD.hpp"

ADD::ADD(){}

ADD::ADD(string theName, int theCode, int theLength, int theOperand1, int theOperand2): Instruction(theName, theCode, theLength)
{
	operand1 = theOperand1;
	operand2 = theOperand2;
}

int ADD::getOperand1()
{
	return operand1;
}

int ADD::getOperand2()
{
	return operand2;
}

