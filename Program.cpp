/*
 * =====================================================================================
 *
 *       Filename:  Program.cpp
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
#include "Program.hpp"

Program::Program(){}

void Program::addInstruction(Instruction theInstruction, int thePosition)
{
	instructions[thePosition] = theInstruction;
}

Instruction Program::getInstruction(int thePosition)
{
	return instructions[thePosition];

}

