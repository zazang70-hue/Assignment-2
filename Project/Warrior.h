#pragma once
#include "player.h"

class Warrior : public player
{
public:
	Warrior(string Nickname);
	void attack() override; // override는 “이 함수가 부모 클래스의 가상 함수를 정확히 
                            // 정확히 재정의하고 있음을 컴파일러가 검사하도록 하는 안전장치”이다.
};