#include "GameSession.h"

int GameSession::addPlayer(Player* player)
{
	this->players[player->getId()] = player;

	return ERROR_NONE;
}

int GameSession::removePlayer(int player_id)
{
	this->players.erase(player_id);

	return ERROR_NONE;
}

int GameSession::start()
{
	this->session_started = true;

	return ERROR_NONE;
}