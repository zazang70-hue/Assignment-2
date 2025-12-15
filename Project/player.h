#pragma once
#include <string>

using namespace std;

class player {
public:
	player(string Nickname);

	virtual void attack() = 0;
	void printPlayerStatus();

	//getter 설정
	string getJob_name();
	string getNickname();

	int getLevel();
	int getHP();
	int getMP();
	int getPower();
	int getDefance();
	int getAccuracy();
	int getSpeed();

	//setter 설정
	void setNickname(string Nickname);
	void setHP(int HP);
	void setMP(int MP);
	void setPower(int Power);
	void setDefance(int Defance);
	void setAccuracy(int Accuracy);
	void setSpeed(int Speed);

protected:           //
	string Job_name;
	string Nickname;
	int Level;
	int HP;
	int MP;
	int Power;
	int Defance;
	int Accuracy;
	int Speed;
};