#pragma once

#include "../../../Utils/IOController.h"
#include "../../../GameConfig/UserMessages.h"

class BattleManager
{
	string _playerCharacterName;
	IOController _IOController;
public:
	void Init();
private:
	void Get_BattleSetup_FromUser();
};

