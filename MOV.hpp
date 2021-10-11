/*
 * =====================================================================================
 *
 *       Filename:  MOV.hpp
 *
 *    Description: Interface 
 *
 *        Version:  1.0
 *        Created:  09/21/2021 12:29:20
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include "Instruction.hpp"

#ifndef MOV_HPP
#define MOV_HPP
#include <string>

using namespace std;

class MOV: public Instruction
{
	private:
		string regist;
		string address;
		int value;
	public:
		MOV();
		MOV(string name, short int code,short int length, string theRegister, string theAddress);
		MOV(string name, int theValue, string theRegister);
		int getValue();
		void display();
};

#endif


