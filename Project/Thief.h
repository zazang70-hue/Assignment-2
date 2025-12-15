#pragma once
#include "player.h"

class Thief : public player
{
public:
	Thief(string Nickname);
	void attack() override;                        
};