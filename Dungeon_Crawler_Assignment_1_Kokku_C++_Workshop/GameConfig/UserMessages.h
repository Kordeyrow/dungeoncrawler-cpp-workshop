#pragma once

#include <string>
using namespace std;

class UserMessages
{
public:
	class InputRequest
	{
	public:
		// BattleSystem
		static const string PLAYER_CHARACTER_NAME;
		static const string ENEMIES_AMOUNT;
		static const string ERROR;
	};

	class InputConfirmation
	{
	public:
		// BattleSystem
		static string PlayerCharacterName(string name);
	};

	class GameOver
	{
	public:
		// BattleSystem
		static const string KEY_PRESS_END_GAME;
	};
};

