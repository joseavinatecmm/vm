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

#ifndef INSTRUCTION_HPP
#define INSTRUCTION_HPP
#include <string>

using namespace std;
class Instruction 
{
	private:
		string name;
		int code;

	public:
		Instruction();
		Instruction(string theName, int theCode);
		string getName();
		int getCode();
};
#endif
