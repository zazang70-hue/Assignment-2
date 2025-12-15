#include <iostream>
#include "player.h"
#include "Warrior.h"
#include "Magician.h"
#include "Thief.h"
#include "Archer.h"
using namespace std;

int main() {
	string jobs[] = { "워리어", "메지션", "시프", "아쳐" };
	int job_choice = 0;
	string Nickname;

	player* player = nullptr;

	cout << "* 닉네임을 입력해 주세요: ";
	cin >> Nickname;

	cout << "<전직 시스템>" << endl;
	cout << Nickname << "님을, 환영합니다!" << endl;
	cout << "* 원하시는 직업을 선택해주세요." << endl;
	
	for (int i = 0; i < 4; ++i) {
		cout << (i + 1) << "." << jobs[i] << endl;
	}
	
	cout << "선택: ";
	cin >> job_choice;

	switch (job_choice) {
	case 1:
		player = new Warrior(Nickname);
		break;
	case 2:
		player = new Magician(Nickname);
		break;
	case 3:
		player = new Thief(Nickname);
		break;
	case 4:
		player = new Archer(Nickname);
		break;
	default:
		cout << "잘못된 입력입니다." << endl;
		return 1;
	}
	
	
	player->printPlayerStatus();
	player->attack();
	

	if (player != nullptr)
		delete player;

	return 0;
}
