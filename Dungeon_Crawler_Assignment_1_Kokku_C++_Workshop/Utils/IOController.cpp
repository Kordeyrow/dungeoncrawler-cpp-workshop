#include "IOController.h"

const string STYLIZATION_USER_PREFIX = "   : ";
const string STYLIZATION_PREFIX = "  >>  ";
const string STYLIZATION_POSFIX = "";

string IOController::ReadUserInput() {
	cout << STYLIZATION_USER_PREFIX;
	string input;
	getline(cin, input);
	return input;
}

void IOController::ShowMessageToUser(string text, bool stylized, bool newline) {
	string finalText = "";
	finalText = (stylized ? STYLIZATION_PREFIX : "") + text + (stylized ? STYLIZATION_POSFIX : "") + (newline ? "\n" : "");
	cout << finalText;
}