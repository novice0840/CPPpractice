#include <iostream>
#include "chapter03.h"
#include <format>


struct Point {
	int xpos;
	int ypos;

	void MovePos(int x, int y) {
		xpos += x;
		ypos += y;
	}

	void AddPoint(const Point& pos) {
		xpos += pos.xpos;
		ypos += pos.ypos;
	}

	void ShowPosition() {
		std::cout << "[" << xpos <<" ," << ypos << "]" << std::endl;
	}
};

void problem03_1() {
	Point pos1 = { 12, 4 };
	Point pos2 = { 20, 30 };

	pos1.MovePos(-7, 10);
	pos1.ShowPosition();

	pos1.AddPoint(pos2);
	pos1.ShowPosition();
}

class Calculator {
private:
	int addCount;
	int minCount;
	int mulCount;
	int divCount;
public:

	void Init() {
		addCount = 0;
		minCount = 0;
		mulCount = 0;
		divCount = 0;
	}

	float Add(float x, float y) {
		addCount += 1;
		return x + y;
	}

	float Min(float x, float y) {
		minCount += 1; 
		return x - y;
	}

	float Mul(float x, float y) {
		mulCount += 1;
		return x * y;
	}

	float Div(float x, float y) {
		divCount += 1;
		return x / y;
	}

	void ShowOpCount() {
		std::string result = std::format("µ¡¼À: {} »¬¼À: {} °ö¼À: {} ³ª´°¼À: {}", addCount, minCount, mulCount, divCount);

		std::cout << result << std::endl;
	}

};

void problem03_2() {
	Calculator cal;
	cal.Init();
	std::cout << "3.2 + 2.4 = " << cal.Add(3.2, 2.4) << std::endl;
	std::cout << "3.5 / 1.7 = " << cal.Div(3.5, 1.7) << std::endl;
	std::cout << "2.2 - 1.5 = " << cal.Min(2.2, 1.5) << std::endl;
	std::cout << "4.9 / 1.2 = " << cal.Div(4.9, 1.2) << std::endl;
	cal.ShowOpCount();
}