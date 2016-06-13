/*
 * Person.h
 *
 *  Created on: Jun 12, 2016
 *      Author: javier
 */

#ifndef PERSONSCOPED_H_
#define PERSONSCOPED_H_

#include <string>
#include <boost/scoped_ptr.hpp>

namespace pimpScoped
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
	boost::scoped_ptr<Impl> _pImpl;
};

}
#endif /* PERSONSCOPED_H_ */
