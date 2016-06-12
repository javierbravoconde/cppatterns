//============================================================================
// Name        : myproject.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Person.h"
using namespace std;

void runPimp()
{
	Person aPerson;
	aPerson.setAge(5);
	std::cout << aPerson.getAge() << std::endl;

}

int main() {
	std::cout << "!!!Hello World!!!" << std::endl;
	return 0;
}
