/*
 * Person.h
 *
 *  Created on: Jun 12, 2016
 *      Author: javier
 */

#ifndef PERSON_H_
#define PERSON_H_

#include <string>

namespace pimp
{

class Person {
public:
	Person();
	virtual ~Person();

	void setAge(int iAge);
	void setName(std::string& iName);
	int getAge() const;
	const std::string& getName() const;

private:

	struct Impl;
	Impl* _pImpl;
};

}
#endif /* PERSON_H_ */
