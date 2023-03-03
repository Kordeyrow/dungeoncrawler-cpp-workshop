#pragma once

#include <iostream>
#include <string>
using namespace std;

class IOController
{
public: 
	void Write(string text);
	void WriteLine(string text);
	string Read();
};

