#include "GameFlowManager.h"
#include "../../BattleSystem/Managers/BattleManager.h"

void GameFlowManager::Init()
{
	_gameStarted = true;
	BattleManager battleManager;
	battleManager.Init();
}