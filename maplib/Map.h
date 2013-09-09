#ifndef _MAP_H_
#define _MAP_H_

#include "Common.h"
#include "Actor.h"

class Map
{

private:
	std::string _name;
	std::string _desc;
	int _version;
	int _type;
	typedef std::vector<Actor*> ActorList;
	ActorList actors;

public:
	std::string getName() { return _name; }
	std::string getDescription() { return _desc; }
	int getVersion() { return _version; }
	int getType() { return _type; }
	ERRORCODE addActor(Actor* actor);
	ERRORCODE removeActor(Actor* actor);
};

#endif