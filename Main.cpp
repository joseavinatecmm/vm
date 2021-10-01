/*
 * =====================================================================================
 *
 *       Filename:  Main.cpp
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
#include <stdlib.h>
#include <iostream>

#include "Instruction.hpp"
#include "InstructionSet.hpp"
#include "Program.hpp"
#include "MOV.hpp"
#include "CU.hpp"
#include "ADD.hpp"

using namespace std;
int main(void)
{
        // Instruction
	Instruction i1;
	Instruction i2("MOV", 50, 3);

	//i1.display();
	//i2.display();

	// Instruction Set
	InstructionSet instructionSet;
	instructionSet.addInstruction(i2);
	i1 = instructionSet.getInstruction(0);
	
	i1.display();

        //MOV
        MOV move("MOVE", 70, 3, "AL","6");
	move.display();


	Instruction start("START", 50, 1);
	Instruction stop("STOP", 51, 1);
	ADD add("ADD", 80, 3, 10, 12);
	
	Program program;

	program.addInstruction(start,0);
	program.addInstruction(add,1);
	program.addInstruction(stop,2);

	cout << program.getInstruction(0).getName() << endl;
	cout << program.getInstruction(1).getName() << endl;
	cout << program.getInstruction(2).getName() << endl;

        // Basis for the CU and Machine Cycle 
	CU cu("fecth");

	Instruction theInstruction;
	for(int pos=0; pos < 3; pos++) {
		theInstruction = cu.fetch(program, pos);
		int theCode = cu.decode(theInstruction);
		cu.execute(theCode);
	}

        // Generic array of instructions
	Instruction* instructions[3];

	instructions[0]=&start;
	instructions[1]=&add;

	auto* ptr_add = static_cast<ADD*>(instructions[1]);
       	cout << ptr_add->getOperand1() << endl;	
        cout << ptr_add->getOperand2() << endl;	

       	return EXIT_SUCCESS;
}

