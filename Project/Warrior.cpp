#include "Warrior.h"
#include <iostream>

using namespace std;

Warrior::Warrior(string Nickname) : player(Nickname)
{
	Job_name = "워리어";
	cout << "워리어로 전직하였습니다." << endl;
	Level = 10;
	HP = 80;
	MP = 20;
	Power = 60;
	Defance = 60;
	Accuracy = 40;
	Speed = 25;

}

void Warrior::attack() 
{
	cout << "파워 슬레쉬" << endl;
}