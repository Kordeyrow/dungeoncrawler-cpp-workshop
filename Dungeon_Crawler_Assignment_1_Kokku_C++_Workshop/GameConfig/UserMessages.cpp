#include "UserMessages.h"

const string UserMessages::InputRequest::PLAYER_CHARACTER_NAME = "Hello new player! What will be the name of your character?";
string UserMessages::InputConfirmation::PlayerCharacterName(string name) { return "You chose the following name: " + name; }