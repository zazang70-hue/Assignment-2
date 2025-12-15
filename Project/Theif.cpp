#include "Thief.h"
#include <iostream>

using namespace std;

Thief::Thief(string Nickname) : player(Nickname)
{
	Job_name = "워리어";
	cout << "워리어로 전직하였습니다." << endl;
	Level = 10;
	HP = 60;
	MP = 40;
	Power = 50;
	Defance = 35;
	Accuracy = 60;
	Speed = 80;
}

void Thief::attack()
{
	cout << "서든 어택" << endl;
}