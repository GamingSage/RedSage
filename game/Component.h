#ifndef _COMPONENT_H_
#define _COMPONENT_H_

#include "Common.h"

class Component
{
private:
	std::string _name;
	int _id;

public:
	std::string getName() { return _name; }
	int getId() { return _id; }
};

#endif