/*
 * =====================================================================================
 *
 *       Filename:  ALU.cpp
 *
 *    Description: Implementation 
 *
 *        Version:  1.0
 *        Created:  09/30/2021 21:20:10
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include "ALU.hpp"

ALU::ALU() {}

ALU::ALU(short int theOperand1, short int theOperand2)
{
	operand1 = theOperand1;
	operand2 = theOperand2;
}

short int ALU::add(short int theOperand1, short int theOperand2)
{
	return theOperand1 + theOperand2;
}


