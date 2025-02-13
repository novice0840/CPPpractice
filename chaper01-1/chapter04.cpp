#include <iostream>
#include <map>

class Point {
private: 
	int xpos, ypos;
public: 

	void Init(int x, int y) {
		xpos = x;
		ypos = y;
	}

	void ShowPointInfo() const {
		std::cout << "[" << xpos << ", " << ypos << "]" << std::endl;
	}
};

class Ring: public Point {
public:
	void Init(int firstX, int firstY, int firstRadius, int secondX, int secondY, int secondRadius) 
	{

	}

	void ShowRingInfo() {

	}
};

void problem04_1() {
	Ring ring;
	ring.Init(1, 1, 4, 2, 2, 9);
	ring.ShowRingInfo();
}

enum COMP_POS {
	CLERK,
	SENIOR,
	ASSIST,
	MANAGER
};

std::map<COMP_POS, std::string> posToString = {
	{CLERK, "���"},
	{SENIOR, "����"},
	{ASSIST, "�븮"},
	{MANAGER, "����"}
};


class NameCard {
private:
	std::string name;
	std::string companyName;
	std::string phoneNumber;
	COMP_POS position;

public:
	NameCard(std::string name, std::string companyName, std::string phoneNumber, COMP_POS position)
	:name(name), companyName(companyName), phoneNumber(phoneNumber), position(position)
	{}

	void ShowNameCardInfo() {
		std::cout << "�̸�: " << name << std::endl;
		std::cout << "ȸ��: " << companyName << std::endl;
		std::cout << "��ȭ��ȣ: " << phoneNumber << std::endl;
		std::cout << "����: " << posToString[position] << std::endl << std::endl;
	}
};

void problem04_3_2() {
	NameCard manClerk("Lee", "ABCEng", "010-1111-2222", COMP_POS::CLERK);
	NameCard manSENIOR("Hong", "OrangeEng", "010-3333-4444", COMP_POS::SENIOR);
	NameCard manAssist("Kim", "SoGoodComp", "010-5555-6666", COMP_POS::ASSIST);
	manClerk.ShowNameCardInfo();
	manSENIOR.ShowNameCardInfo();
	manAssist.ShowNameCardInfo();
}