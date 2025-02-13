#include <iostream>
#include <string>
#include "chapter01.h"

using namespace std;

void problem1_1_1() {
	int num1, num2, num3, num4, num5;
	int sum = 0;

	cout << "1번째 정수 입력: ";
	cin >> num1;
	cout << "2번째 정수 입력: ";
	cin >> num2;
	cout << "3번째 정수 입력: ";
	cin >> num3;
	cout << "4번째 정수 입력: ";
	cin >> num4;
	cout << "5번째 정수 입력: ";
	cin >> num5;

	sum += num1 + num2 + num3 + num4 + num5;

	cout << sum;
}

void problem1_1_2() {
	string name;
	string phoneNumber;

	cout << "이름을 입력하세요: ";
	cin >> name;
	cout << "전화번호를 입력하세요: ";
	cin >> phoneNumber;
	cout << "이름: " << name << endl << "전화번호: " << phoneNumber;
}

void problem1_1_3() {
	int num;

	cout << "숫자를 입력하세요: ";
	cin >> num;

	for (int i = 1; i <= 9; i++) {
		cout << num * i << endl;
	}
}


void problem1_1_4() {

	while (true) {
		int sales;
		float salary;

		cout << "판매 금액을 만원 단위로 입력(-1 to end): ";
		cin >> sales;

		if (sales == -1) {
			cout << "프로그램을 종료합니다.";
			break;
		}

		salary = 50 + sales * 0.12;
		cout << "이번 달 급여: " << salary << "만원" << endl;
	}
}

void swap(int* num1, int* num2) {
	int tmp = *num1;
	*num1 = *num2;
	*num2 = tmp;
}

void swap(char* ch1, char* ch2) {
	char tmp = *ch1;
	*ch1 = *ch2;
	*ch2 = tmp;
}

void swap(double* dbl1, double* dbl2) {
	double tmp = *dbl1;
	*dbl1 = *dbl2;
	*dbl2 = tmp;
}

void problem1_2() {
	int num1 = 20, num2 = 30;
	swap(&num1, &num2);
	std::cout << num1 << ' ' << num2 << std::endl;

	char ch1 = 'A', ch2 = 'Z';
	swap(&ch1, &ch2);
	std::cout << ch1 << ' ' << ch2 << std::endl;

	double dbl1 = 1.111, dbl2 = 5.555;
	swap(&dbl1, &dbl2);
	std::cout << dbl1 << ' ' << dbl2 << std::endl;
	
}

int BoxVolume(int length, int width, int height) {
	return length * width * height; 
}

int BoxVolume(int length, int width) {
	return length * width;
}

int BoxVolume(int length) {
	return length;
}

void problem1_3() {
	std::cout << "[3, 3, 3] : " << BoxVolume(3,3,3) << std::endl;
	std::cout << "[5, 5, D] : " << BoxVolume(5, 5) << std::endl;
	std::cout << "[7, D, D] : " << BoxVolume(7) << std::endl;
	// std:cout << "[7, D, D] : " << BoxVolume() << std::endl;
}

