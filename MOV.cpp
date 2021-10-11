/*
 * =====================================================================================
 *
 *       Filename:  MOV.cpp
 *
 *    Description: Implementation 
 *
 *        Version:  1.0
 *        Created:  09/21/2021 12:40:21
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include "MOV.hpp"
#include <iostream>


MOV::MOV(){}

MOV::MOV(string theName, int theValue, string theRegister)
{
	value = theValue;
}


MOV::MOV(string name, short int code, short int length, string theRegist, string theAddress): Instruction(name, code, length)
{
	regist = theRegist;
	address = theAddress;
}

int MOV::getValue()
{
	return value;
}

void MOV::display()
{
	cout << regist << ", " << address << endl;
}



