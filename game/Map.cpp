#include "Map.h"

int Map::addActor(Actor* actor)
{
	for(ActorList::const_iterator itr = _actors.begin(); itr != _actors.end(); ++itr)
	{
		if((*itr) == actor)
		{
			return ERROR_CONTAINS;
		}
	}

	this->_actors.push_back(actor);

	return ERROR_NONE;
}

int Map::removeActor(Actor* actor)
{
	for(ActorList::const_iterator itr = _actors.begin(); itr != _actors.end(); ++itr)
	{
		if((*itr) == actor)
		{
			_actors.erase(itr);

			return ERROR_NONE;
		}
	}

	return ERROR_NOTFOUND;
}

int Map::update()
{
	return ERROR_NONE;
}