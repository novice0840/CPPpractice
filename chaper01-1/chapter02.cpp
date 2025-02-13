#include <iostream>
#include "chapter02.h"


void plusOne(int& num) {
	num += 1;
}

void changeSign(int& num) {
	num *= -1;
}

void problem02_1_1() {
	int num = 10;
	plusOne(num);
	std::cout << num << std::endl;
	changeSign(num);
	std::cout << num << std::endl;
}

void SwapPointer(int* ptr1, int* ptr2) {
	int tmp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = tmp;
}

void problem02_1_3() {
	int num1 = 5;
	int* ptr1 = &num1;
	int num2 = 10;
	int* ptr2 = &num2;

	SwapPointer(ptr1, ptr2);

	std::cout << *ptr1 << " " << *ptr2;
}

void problem02_2() {
	const int num = 12;
	const int* ptr = &num;
	const int* (&ref) = ptr;

	std::cout << *ptr << std::endl;
	std::cout << *ref << std::endl;
}

typedef struct __Point {
	int xpos;
	int ypos;
} Point;

Point& PntAdder(const Point& p1, const Point& p2) {
	Point *p3 = new Point{p1.xpos + p2.xpos, p1.ypos + p2.ypos };
	return *p3;
}

void problem02_3() {
	Point* p1 = new Point{1, 2};
	Point* p2 = new Point{3, 4};

	Point& p3 = PntAdder(*p1, *p2);

	std::cout << "Sum: (" << p3.xpos << ", " << p3.ypos << ")" << std::endl;

	delete p1;
	delete p2;
	delete &p3;
}