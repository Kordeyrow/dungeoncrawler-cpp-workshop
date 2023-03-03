#include "GameFlowManager.h"
#include "../../../GameConfig/UserMessages.h"

string characterName;

void GameFlowManager::StartGame()
{
	Get_BattleSetup_FromUser();
	_gameStarted = true;
}

void GameFlowManager::Get_BattleSetup_FromUser()
{
	_IOController.ShowMessageToUser(UserMessages::InputRequest::PLAYER_CHARACTER_NAME);
	characterName = _IOController.ReadUserInput();
	_IOController.ShowMessageToUser(UserMessages::InputConfirmation::PlayerCharacterName(characterName));
	_IOController.Stall();
}
