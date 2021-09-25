/*
 * =====================================================================================
 *
 *       Filename:  ADD.hpp
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

#ifndef ADD_HPP
#define ADD_HPP
#include "Instruction.hpp"
#include <string>

using namespace std;
class ADD: public Instruction 
{
	private:
		int operand1;
		int operand2;
	public:
		ADD();
		ADD(string theName, int theCode, int theOperand1, int theOperand2);
		int getOperand1();
		int getOperand2();


};
#endif
