#ifndef _ACTOR_H_
#define _ACTOR_H_

#include "OpenGL.h"
#include "Common.h"
#include "Component.h"

#define ACTOR_STATE_DEAD 0
#define ACTOR_STATE_ALIVE 1
#define ACTOR_STATE_RESPAWN 3

#define ACTOR_FLAG_INVINCIBLE 1
#define ACTOR_FLAG_HIDDEN 2

class Actor : public Component
{
private:
	int _modelId;
	int _factionId;
	int _scriptId;
	int _state;
	int _currentMapInstanceId;

	POSITION _position;
	GLfloat	_orientation;

public:
	int getModelId()
	{
		return _modelId;
	}

	int getFactionId()
	{
		return _factionId;
	}

	POSITION getPosition()
	{
		return _position;
	}

	GLfloat getOrientation()
	{
		return _orientation;
	}

	ERRORCODE kill();
	ERRORCODE spawn(POSITION pos);
};

#endif