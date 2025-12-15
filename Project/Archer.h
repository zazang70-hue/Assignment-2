#pragma once
#include "player.h"

class Archer : public player
{
public:
	Archer(string Nickname);
	void attack() override;
};