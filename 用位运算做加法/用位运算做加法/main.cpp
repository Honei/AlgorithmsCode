#include <iostream>

using namespace std;
int addBinary(int &num1, int &num2);
int main()
{
	int num1 = 10;
	int num2 = 17;
	cout << "使用位运算做加法" << addBinary(num1, num2) << endl;
}

int addBinary(int &num1, int &num2)
{
	
	do
	{
		int num1_ = num1 ^ num2;
		int num2_ = num1 & num2;
		num2_ = num2_ << 1;
		num1 = num1_;
		num2 = num2_;
	} while (num2 != 0);

	return num1;
}