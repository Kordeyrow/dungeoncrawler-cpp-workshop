#pragma once

enum class Size { Small, Medium, Big };

class Enemy
{
	Size size;
	public:
		Enemy(Size size);
};

