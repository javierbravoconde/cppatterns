//============================================================================
// Name        : myproject.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Person.h"

#include "../pimp_scoped/PersonScoped.h"
using namespace std;

void runPimp()
{
	std::cout << "running: runPimp" << std::endl;
	pimp::Person aPerson;
	aPerson.setAge(5);
	std::cout << aPerson.getAge() << std::endl;

}

void runPimpScoped()
{
	std::cout << "running: runPimpScoped" << std::endl;
	pimpScoped::Person aPerson;
	aPerson.setAge(6);
	std::cout << aPerson.getAge() << std::endl;

}

int main() {
	runPimp();
	runPimpScoped();
	return 0;
}
