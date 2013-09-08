#ifndef _GAMESESSION_H_
#define _GAMESESSION_H_

#include "Common.h"
#include "Player.h"

class GameSession
{

private:
	int session_id;
	int session_type;
	int game_type;
	int maxPlayers;
	int minPlayers;

	int selectedMap;

	bool session_started;

	std::map<int, Player*> players;

public:

	int getSessionId() { return session_id; }
	int getSessionType() { return session_type; }
	int getGameType() { return game_type; }
	int getMaxPlayers() { return maxPlayers; }
	int getMinPlayers() { return minPlayers; }

	bool hasStarted() { return session_started; }

	int start();
	int end();
	int addPlayer(Player* player);
	int removePlayer(int player_id);
	int selectMap(int mapId);
	int selectGameType(int mapId);
	int selectSessionType(int session_type);
};

#endif