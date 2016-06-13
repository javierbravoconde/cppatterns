/*
 * Person.cpp
 *
 *  Created on: Jun 12, 2016
 *      Author: javier
 */

#include "PersonScoped.h"

namespace pimpScoped
{


struct Person::Impl {
  std::string name;
  int age;
};

Person::Person()
{
	_pImpl.reset(new Impl);
}

Person::~Person()
{
}

void Person::setAge(int iAge)
{
	this->_pImpl->age = iAge;
}

void Person::setName(std::string& iName)
{
	this->_pImpl->name = iName;
}

int Person::getAge() const
{
	return this->_pImpl->age;
}
const std::string& Person::getName() const
{
	return this->_pImpl->name;
}

}
