#pragma once
#include "player.h"

class Magician : public player
{
public:
	Magician(string Nickname);
	void attack() override;
	
};