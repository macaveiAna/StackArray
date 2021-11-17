//=================================================================
// @author:     Ana Macavei
// @version:    1.2
//
//  Demonstrates: Stack LL class definition for stack implemented 
//  with a linked list.
//
//=================================================================
#include<iostream>
#include "intStack.h"

int main()
{
	
	intStack numStack;

	std::cout << "Empty: " << numStack.empty() << "\n";
	std::cout << "Full: " << numStack.full() << "\n";

	for (int x = 1; x <= 15; x++)
		std::cout << numStack.push(x) << ' ';

	std::cout << '\n';
	std::cout << "Empty: " << numStack.empty() << "\n";
	std::cout << "Full: " << numStack.full() << "\n";

	int num;
	while (numStack.pop(num)) {
		std::cout << num << "\n";
	}

	std::cout << "Empty: " << numStack.empty() << "\n";
	std::cout << "Full: " << numStack.full() << "\n";


}