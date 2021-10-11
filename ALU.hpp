/*
 * =====================================================================================
 *
 *       Filename:  ALU.hpp
 *
 *    Description: Interfac
 *
 *        Version:  1.0
 *        Created:  09/30/2021 21:19:48
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */


#ifndef ALU_HPP
#define ALU_HPP

class ALU 
{
	private:
		short int operand1;
		short int operand2;

	public:
		ALU();
		ALU(short int theOperand1, short int theOperand2);
		short int add(short int theOperand1, short int theOperand2);
};

#endif

