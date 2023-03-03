#pragma once

#include <iostream>
#include <string>
using namespace std;

class IOController
{
public: 
	void ShowMessageToUser(string text, bool stylized = true, bool newline = true);
	string ReadUserInput();
	void Stall();
};

