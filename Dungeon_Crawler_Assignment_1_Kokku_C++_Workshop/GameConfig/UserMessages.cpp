#include "UserMessages.h"

// InputRequest 
const string UserMessages::InputRequest::ERROR = 
	"Insert Valid Input";

const string UserMessages::InputRequest::PLAYER_CHARACTER_NAME = 
	"Hello new player! What will be the name of your character?";

const string UserMessages::InputRequest::ENEMIES_AMOUNT = 
	"Now, tell us how many enemies your character will be fighting against.";


// InputConfirmation 
string UserMessages::InputConfirmation::PlayerCharacterName(string name) 
	{ return "You chose the following name: " + name; }


// GameOver 
const string UserMessages::GameOver::KEY_PRESS_END_GAME =
	"Press any key to end game. . .";
