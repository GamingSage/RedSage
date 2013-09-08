#ifndef _MAP_COMPONENT_H_
#define _MAP_COMPONENT_H_

#include "Common.h"

class MapComponent
{
private:
	std::string _name;
	int32 _type;

public:
	std::string getName() { return _name; }
	int32 getType() { return _type; }
}

#endif