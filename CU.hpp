/*
 * =====================================================================================
 *
 *       Filename:  Instruction.hpp
 *
 *    Description: Interface 
 *
 *        Version:  1.0
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#ifndef CU_HPP
#define CU_HPP
#include <string>
#include <iostream>
#include "Instruction.hpp"
#include "Program.hpp"

using namespace std;
class CU 
{
	private:
		string status;

	public:
		CU();
		CU(string theStatus);
		Instruction fetch(Program theProgram, int thePosition);
		int decode(Instruction theInstruction);
		void execute(int theCode);
};
#endif
