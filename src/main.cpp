//============================================================================
// Name        : myproject.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "pimp/Person.h"
#include "pimp_scoped/PersonScoped.h"

#include <boost/bind.hpp>
#include "strategy_boostfunc/BehaviorA.h"
#include "strategy_boostfunc/BehaviorB.h"
#include "strategy_boostfunc/HostClass.h"


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

void runStrategyBoost()
{
	HostClass aHostClass;

	BehaviorA aBehaviourA;
	BehaviorB aBehaviourB;

	aHostClass._specificBehavior = boost::bind(&BehaviorA::getValueBehaviorA, &aBehaviourA);
	aHostClass.printSomething();
	aHostClass._specificBehavior = boost::bind(&BehaviorB::getValueBehaviorB, &aBehaviourB);
	aHostClass.printSomething();

}

int main() {
	runPimp();
	runPimpScoped();
	runStrategyBoost();
	return 0;
}
