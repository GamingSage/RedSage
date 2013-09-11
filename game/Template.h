#ifndef _TEMPLATE_H_
#define _TEMPLATE_H_

#include "Common.h"
#include "Instance.h"

class Template
{
private:
	int _id;
	std::string _name;

public:
	std::string getName() { return _name; }
	int getId() { return _id; }
	
	Instance* createInstance();
}

#endif