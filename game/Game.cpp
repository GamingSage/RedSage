#include "Game.h"

int Game::startGame()
{
	load();

	return ERROR_NONE;
}

int Game::load()
{
	_gameState = GAMESTATE_LOADING;

	return ERROR_NONE;
}

int Game::update()
{
	_currentMap->update();

	return ERROR_NONE;
}