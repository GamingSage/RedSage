#ifndef _COMPONENT_H_
#define _COMPONENT_H_

#include "Common.h"

class Component
{
private:
	std::string _name;
	int _id;
	int _scriptId;

public:
	std::string getName() { return _name; }
	int getId() { return _id; }
	int getScriptId() { return _scriptId; }
};

#endif