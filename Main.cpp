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
	// MOV move("MOVE", 50, 3, "AL",100);
	// move.display();


	Instruction start("START", 50, 1);
	Instruction stop("STOP", 51, 1);
	ADD add("ADD", 80, 3, 60, 12);
	
	Program program;

	program.addInstruction(start,0);
	program.addInstruction(add,1);
	program.addInstruction(stop,2);

	cout << program.getInstruction(0).getName() << endl;
	cout << program.getInstruction(1).getName() << endl;
	cout << program.getInstruction(2).getName() << endl;

        // Basis for the CU and Machine Cycle 
	/*CU cu("fecth");

	Instruction theInstruction;
	for(int pos=0; pos < 3; pos++) {
		theInstruction = cu.fetch(program, pos);
		int theCode = cu.decode(theInstruction);
		cu.execute(theCode);
	}*/

        // Generic array of instructions
	Instruction* instructions[4];

	instructions[0]=&start;
	instructions[1]=&add;

	ADD* ptr_add = static_cast<ADD*>(instructions[1]);
       	cout << ptr_add->getOperand1() << endl;	
        cout << ptr_add->getOperand2() << endl;	
	
        // inline assembly
        // Adding straightforwardly

        register int total;
	
	__asm__( "addl %%ebx, %%eax;"
		 : "=a" (total)
		 : "a" (ptr_add->getOperand1()), "b" (ptr_add->getOperand2())
        );

	printf("sum = %i\n", total);


        // Moving to resgisters and then, adding
	
	MOV mov1("MOVE", 17, "eax");
        MOV mov2("MOVE", 21, "ebx");
	
	instructions[2]=&mov1;
	instructions[3]=&mov2;
	
	MOV* m1 = static_cast<MOV*>(instructions[2]);
	MOV* m2 = static_cast<MOV*>(instructions[3]);

        cout << mov1.getValue() << endl;
        cout << mov2.getValue() << endl;

        __asm__( "movl %1, %%eax;"  
	         "movl %2, %%ebx;"  
	         "addl %%ebx, %%eax;" : "=a" (total) : "g" (m1->getValue()), "g" (m2->getValue()) 
	);

	printf("sum = %i\n", total);

         

       	return EXIT_SUCCESS;
}

