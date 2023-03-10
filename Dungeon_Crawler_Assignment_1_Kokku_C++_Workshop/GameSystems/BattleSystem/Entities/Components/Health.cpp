#include "Health.h"
#include <algorithm>]
#include <iostream>]
using namespace std;


Health::Health(int maxValue) {
	_maxValue = maxValue;
	_currentValue = maxValue;
	__hook(OnDeath, this, Print);
}

void Health::ReceiveDamage(int value)
{
	// Ignore when dead
	if (IsDead()) return;

	// Ignore healing
	if (value <= 0) return;

	_currentValue = max(0, _currentValue - value);

	if (IsDead()) __raise OnDeath();
}

bool Health::IsDead()
{
	return _currentValue <= 0;
}

void Health::Print()
{
	cout << "worked";
}
