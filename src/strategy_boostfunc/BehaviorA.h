/*
 * BehaviorA.h
 *
 *  Created on: Jun 12, 2016
 *      Author: javier
 */

#ifndef STRATEGY_BOOSTFUNC_BEHAVIORA_H_
#define STRATEGY_BOOSTFUNC_BEHAVIORA_H_

#include <string>

namespace strategy_boostfunc
{

class BehaviorA {
public:
	BehaviorA(){}
	virtual ~BehaviorA(){}
	std::string getValueBehaviorA(){return "valueA";}
};

}

#endif /* STRATEGY_BOOSTFUNC_BEHAVIORA_H_ */
