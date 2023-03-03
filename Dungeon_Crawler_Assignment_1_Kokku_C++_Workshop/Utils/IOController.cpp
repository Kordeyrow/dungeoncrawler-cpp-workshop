#include "IOController.h"

string IOController::Read() {
	string input;
	cin >> input;
	return input;
}

void IOController::Write(string text) {
	cout << text;
}

void IOController::WriteLine(string text) {
	cout << text << "\n";
}
