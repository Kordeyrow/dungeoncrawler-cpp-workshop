#pragma once

#include "../../../Utils/IOController.h"
#include "../../../GameConfig/UserMessages.h"
#include "../../EntitySystem/Entities/Enemy.h"
#include <vector>

class BattleManager
{
	IOController _IOController;
	int _enemiesAmount;
	string _playerCharacterName;
	vector<Enemy> enemies;
public:
	void Run();
private:
	void GetSetupFromUser();
	void GenerateEnemies();
};

