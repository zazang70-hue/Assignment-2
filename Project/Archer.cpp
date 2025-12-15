#include "Archer.h"
#include <iostream>

using namespace std;

Archer::Archer(string Nickname) : player(Nickname)
{
	Job_name = "워리어";
	cout << "워리어로 전직하였습니다." << endl;
	Level = 10;
	HP = 50;
	MP = 50;
	Power = 45;
	Defance = 30;
	Accuracy = 80;
	Speed = 50;

}

void Archer::attack()
{
	cout << "파워 샷" << endl;
}