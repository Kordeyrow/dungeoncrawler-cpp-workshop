#include "IOController.h"

const string STYLIZING_PREFIX = "  >>  ";
const string STYLIZING_PPOSFIX = "";

string IOController::ReadUserInput() {
	string input;
	cin >> input;
	return input;
}

void IOController::ShowMessageToUser(string text, bool stylized, bool newline) {
	string finalText = "";
	finalText = (stylized ? STYLIZING_PREFIX : "") + text + (stylized ? STYLIZING_PPOSFIX : "") + (newline ? "\n" : "");
	cout << finalText;
}

void IOController::Stall() {
	ShowMessageToUser("Press any key to end. . .", false, false);
	system("pause > nul");
}
