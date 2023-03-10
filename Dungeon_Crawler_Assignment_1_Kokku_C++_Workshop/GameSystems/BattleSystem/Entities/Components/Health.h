#pragma once

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

