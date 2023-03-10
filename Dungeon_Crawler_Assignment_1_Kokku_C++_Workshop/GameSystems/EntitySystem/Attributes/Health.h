#pragma once

#include <algorithm>
#include <iostream>
using namespace std;

class Health
{
	int _maxValue;
	int _currentValue;
public:
	Health(int maxValue);
	void ReceiveDamage(int value);
	bool IsDead();
	void Print();
	__event void OnDeath();
};

