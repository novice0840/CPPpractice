#include <iostream>
#include <string>
#include "chapter01.h"

using namespace std;

void problem1_1_1() {
	int num1, num2, num3, num4, num5;
	int sum = 0;

	cout << "1��° ���� �Է�: ";
	cin >> num1;
	cout << "2��° ���� �Է�: ";
	cin >> num2;
	cout << "3��° ���� �Է�: ";
	cin >> num3;
	cout << "4��° ���� �Է�: ";
	cin >> num4;
	cout << "5��° ���� �Է�: ";
	cin >> num5;

	sum += num1 + num2 + num3 + num4 + num5;

	cout << sum;
}

void problem1_1_2() {
	string name;
	string phoneNumber;

	cout << "�̸��� �Է��ϼ���: ";
	cin >> name;
	cout << "��ȭ��ȣ�� �Է��ϼ���: ";
	cin >> phoneNumber;
	cout << "�̸�: " << name << endl << "��ȭ��ȣ: " << phoneNumber;
}

void problem1_1_3() {
	int num;

	cout << "���ڸ� �Է��ϼ���: ";
	cin >> num;

	for (int i = 1; i <= 9; i++) {
		cout << num * i << endl;
	}
}


void problem1_1_4() {

	while (true) {
		int sales;
		float salary;

		cout << "�Ǹ� �ݾ��� ���� ������ �Է�(-1 to end): ";
		cin >> sales;

		if (sales == -1) {
			cout << "���α׷��� �����մϴ�.";
			break;
		}

		salary = 50 + sales * 0.12;
		cout << "�̹� �� �޿�: " << salary << "����" << endl;
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

