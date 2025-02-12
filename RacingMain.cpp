#include <iostream>
using namespace std;


class AAA
{
private:
	int num;
public:
	AAA() : num(0) {}
	AAA& CreateInitObj(int n) const
	{
		AAA* ptr = new AAA(n);
		return *ptr;
	}
	void ShowNum() const { cout << num << endl; }
private:
	AAA(int n) : num(n) {}
};

int main()
{
	std::cout << __cplusplus;
}