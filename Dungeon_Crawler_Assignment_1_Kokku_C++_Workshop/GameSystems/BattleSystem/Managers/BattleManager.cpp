#include "BattleManager.h"

void BattleManager::Init()
{
	Get_BattleSetup_FromUser();
}

void BattleManager::Get_BattleSetup_FromUser()
{
	_IOController.ShowMessageToUser(UserMessages::InputRequest::PLAYER_CHARACTER_NAME);
	_playerCharacterName = _IOController.ReadUserInput();
	_IOController.ShowMessageToUser(UserMessages::InputConfirmation::PlayerCharacterName(_playerCharacterName));
	_IOController.Stall();
}