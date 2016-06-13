/*
 * BehaviorB.h
 *
 *  Created on: Jun 12, 2016
 *      Author: javier
 */

#ifndef STRATEGY_BOOSTFUNC_BEHAVIORB_H_
#define STRATEGY_BOOSTFUNC_BEHAVIORB_H_

namespace strategy_boostfunc
{

class BehaviorB {
public:
	BehaviorB(){}
	virtual ~BehaviorB(){}
	std::string getValueBehaviorB(){return "valueB";}

};

}
#endif /* STRATEGY_BOOSTFUNC_BEHAVIORB_H_ */
