/*
 * =====================================================================================
 *
 *       Filename:  InstructionSet.hpp
 *
 *    Description: Implementation 
 *
 *        Version:  1.0
 *        Created:  09/21/2021 12:05:32
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#ifndef INSTRUCTIONSET_HPP
#define INSTRUCTIONSET_HPP

#include "Instruction.hpp"

using namespace std;

class InstructionSet
{
	private:
		Instruction set[10];
		short int index;
	
	public:
		InstructionSet();
		void addInstruction(Instruction theInstruction);
		Instruction getInstruction(short int pos);
};

#endif








