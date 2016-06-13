/*
 * HostClass.h
 *
 *  Created on: Jun 12, 2016
 *      Author: javier
 */

#ifndef STRATEGY_BOOSTFUNC_HOSTCLASS_H_
#define STRATEGY_BOOSTFUNC_HOSTCLASS_H_

#include <iostream>
#include <string>
#include <boost/function.hpp>

class HostClass {
public:
	HostClass(){}
	virtual ~HostClass(){}
	void printSomething()
	{
		std::cout<< "this is common behavior" << std::endl;
		std::cout<< "this is specific behavior" << _specificBehavior() << std::endl;
	}

	boost::function<std::string()> _specificBehavior;
};

#endif /* STRATEGY_BOOSTFUNC_HOSTCLASS_H_ */
