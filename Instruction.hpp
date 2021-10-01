/*
 * =====================================================================================
 *
 *       Filename:  Instruction.hpp
 *
 *    Description: Instruction 
 *
 *        Version:  1.0
 *        Created:  09/21/2021 11:33:56
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
		short int code;
		short int length;
	public:
		Instruction();
		Instruction(string theName, short int theCode, short int theLength);
		void display();
		int getCode();
		string getName();
};
#endif










