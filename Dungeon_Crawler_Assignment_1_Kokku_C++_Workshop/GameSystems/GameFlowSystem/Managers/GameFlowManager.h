#pragma once

#include "../../BattleSystem/Managers/BattleManager.h"
#include "../../../GameConfig/UserMessages.h"

class GameFlowManager
{
	bool _gameStarted;
public:
	void Run();
private:
	void Stall();
};

