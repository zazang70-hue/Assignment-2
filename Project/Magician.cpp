#include "Magician.h"
#include <iostream>

using namespace std;

Magician::Magician(string Nickname) : player(Nickname)
{
	Job_name = "워리어";
	cout << "워리어로 전직하였습니다." << endl;
	Level = 10;
	HP = 40;
	MP = 80;
	Power = 50;
	Defance = 20;
	Accuracy = 50;
	Speed = 30;

}

void Magician::attack()
{
	cout << "파이어 볼" << endl;
}