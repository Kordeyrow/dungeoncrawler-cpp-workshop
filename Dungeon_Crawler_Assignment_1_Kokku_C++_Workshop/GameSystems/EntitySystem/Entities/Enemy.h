#pragma once

#include "../Attributes/Health.h"
#include "../Attributes/Size.h"
#include "../Actions/Attack.h"

class Enemy
{
	// Atributes
	Size _size;
	Health _health;
	// Actions
	Attack _attack;
public:
	Enemy(Size size, int maxHealthValue);
	Size GetSize() const { return _size; };
	Health GetHealth() const { return _health; };
	Attack GetAttack() const { return _attack; };
};
