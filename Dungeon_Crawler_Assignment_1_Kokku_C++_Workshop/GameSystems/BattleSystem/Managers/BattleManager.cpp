#include "BattleManager.h"

void BattleManager::Run()
{
	GetSetupFromUser();
	GenerateEnemies();
}

void BattleManager::GetSetupFromUser()
{
	// _playerCharacterName
	_IOController.ShowMessageToUser(UserMessages::InputRequest::PLAYER_CHARACTER_NAME);
	_playerCharacterName = _IOController.ReadUserInput();
	//_IOController.ShowMessageToUser(UserMessages::InputConfirmation::PlayerCharacterName(_playerCharacterName));

	//TODO: 
	// Use input validator 
	// 
	// _enemiesAmount
	_IOController.ShowMessageToUser(UserMessages::InputRequest::ENEMIES_AMOUNT);
	bool correctInput = false;
	while (correctInput == false) {
		try {
			_enemiesAmount = stoi(_IOController.ReadUserInput());
			break;
		}
		catch (exception& err) {
			_IOController.ShowMessageToUser(UserMessages::InputRequest::ERROR);
		}
	}	
	//_IOController.ShowMessageToUser(UserMessages::InputConfirmation::PlayerCharacterName(_playerCharacterName));
}

void BattleManager::GenerateEnemies() {
	enemies = { 
		Enemy(Size::Small), 
		Enemy(Size::Medium), 
		Enemy(Size::Big) 
	};
}
