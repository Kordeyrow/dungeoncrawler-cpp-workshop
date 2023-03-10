#pragma once
#include "Components/Health.h"

enum class Size { Small, Medium, Big };

class Enemy
{
	Size _size;
	Health _health;
public:
	Enemy(Size size, int maxHealthValue);
};

