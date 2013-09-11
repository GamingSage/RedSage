#ifndef _GAME_H_
#define _GAME_H_

#include "Map.h"

#define GAMESTATE_NONE 0
#define GAMESTATE_LOADING 1
#define GAMESTATE_STARTED 2
#define GAMESTATE_STOPPING 3
#define GAMESTATE_STOPPED 4

class Game
{
private:
	Map* _currentMap;
	int _gameState;

public:
	int startGame();
	int endGame();
	int update();
	Map* getCurrentMap() { return _currentMap; }
	int setMap(int mapId);
	int load();
};

#endif