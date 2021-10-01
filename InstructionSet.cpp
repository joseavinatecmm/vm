/*
 * =====================================================================================
 *
 *       Filename:  InstructionSet.cpp
 *
 *    Description: Implementation 
 *
 *        Version:  1.0
 *        Created:  09/21/2021 12:09:46
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include "InstructionSet.hpp"

InstructionSet::InstructionSet()
{
	index = 0;
}


void InstructionSet::addInstruction(Instruction theInstruction)
{
	set[index++] = theInstruction;
}


Instruction InstructionSet::getInstruction(short int pos)
{
	return set[pos];
}

