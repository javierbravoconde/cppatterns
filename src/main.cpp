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

#include "policy_driven/HostPolicyClasses.h"


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
	std::cout << "running: runStrategyBoost" << std::endl;

	strategy_boostfunc::HostClass aHostClass;
	strategy_boostfunc::BehaviorA aBehaviourA;
	strategy_boostfunc::BehaviorB aBehaviourB;

	aHostClass._specificBehavior = boost::bind(&strategy_boostfunc::BehaviorA::getValueBehaviorA, &aBehaviourA);
	aHostClass.printSomething();
	aHostClass._specificBehavior = boost::bind(&strategy_boostfunc::BehaviorB::getValueBehaviorB, &aBehaviourB);
	aHostClass.printSomething();

}

void runPolicyDriven()
{
	std::cout << "running: runPolicyDriven" << std::endl;
    typedef policy_driven::HelloWorld<policy_driven::OutputPolicyWriteToCout, policy_driven::LanguagePolicyEnglish> HelloWorldEnglish;
    HelloWorldEnglish hello_world;
    hello_world.run(); // prints "Hello, World!"


    typedef policy_driven::HelloWorld<policy_driven::OutputPolicyWriteToCout, policy_driven::LanguagePolicyGerman> HelloWorldGerman;
    HelloWorldGerman hello_world2;
    hello_world2.run(); // prints "Hallo Welt!"

}

int main() {
	runPimp();
	runPimpScoped();
	runStrategyBoost();
	runPolicyDriven();
	return 0;
}
