#include <iostream>
#include "player.h"

using namespace std;

player::player(string Nickname)
{
	this->Nickname = Nickname;
}

void player::printPlayerStatus() {
	cout << "===================================================" << endl;
	cout << "직업" << Job_name << endl;
	cout << "* 현재 능력치 *" << endl;
	cout << "닉네임: " << Nickname << endl;
	cout << "Lv: " << Level << endl;
	cout << "HP: " << HP <<endl;
	cout << "MP: " << MP << endl;
	cout << "공격력: " << Power << endl;
	cout << "방어력: " << Defance << endl;
	cout << "정확도: " << Accuracy << endl;
	cout << "속도: " << Speed << endl;
	cout << "====================================================" << endl;
}

string player::getJob_name()
{
	return Job_name;
}

string player::getNickname()
{
	return Nickname;
}

int player::getLevel()
{
	return Level;
}

int player::getHP()
{
	return HP;
}

int player::getMP()
{
	return MP;
}

int player::getPower()
{
	return Power;
}

int player::getDefance()
{
	return Defance;
}

int player::getAccuracy()
{
	return Accuracy;
}

int player::getSpeed()
{
	return Speed;
}

void player::setNickname(string Nickname)
{
	this->Nickname = Nickname;
}

void player::setHP(int HP)
{
	this->HP = HP;
}

void player::setMP(int MP)
{
	this->MP = MP;
}

void player::setPower(int Power)
{
	this->Power = Power;
}

void player::setDefance(int Defance)
{
	this->Defance = Defance;
}

void player::setAccuracy(int Accuracy)
{
	this->Accuracy = Accuracy;
}

void player::setSpeed(int Speed)
{
	this->Speed = Speed;
}