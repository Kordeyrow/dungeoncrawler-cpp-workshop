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
	};
	class InputConfirmation
	{
	public:
		// BattleSystem
		static string PlayerCharacterName(string name);
	};
};

