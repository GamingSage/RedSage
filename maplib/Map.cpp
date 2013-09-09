#include "Map.h"

ERRORCODE Map::addActor(Actor* actor)
{
	for(ActorList::const_iterator itr = actors.begin(); itr != actors.end(); ++itr)
	{
		if((*itr) == actor)
		{
			return ERROR_DUPLICATE;
		}
	}

	this->actors.push_back(actor);

	return ERROR_NONE;
}

ERRORCODE Map::removeActor(Actor* actor)
{
	for(ActorList::const_iterator itr = actors.begin(); itr != actors.end(); ++itr)
	{
		if((*itr) == actor)
		{
			actors.erase(itr);

			return ERROR_NONE;
		}
	}

	return ERROR_NOTFOUND;
}