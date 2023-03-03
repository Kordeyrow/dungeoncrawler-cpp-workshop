#pragma once

#include "../../../Utils/IOController.h"

class GameFlowManager
{
	IOController _IOController;
	bool _gameStarted;
public:
	void StartGame();
private:
	void Get_BattleSetup_FromUser();
};

