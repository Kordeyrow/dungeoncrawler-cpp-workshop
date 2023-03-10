#include "GameFlowManager.h"

void GameFlowManager::Stall() {
	cout << UserMessages::GameOver::KEY_PRESS_END_GAME;
	system("pause > nul");
}

void GameFlowManager::Run()
{
	_gameStarted = true;
	BattleManager battleManager;
	battleManager.Run();
	Stall();
}