#include <iostream>

int main()
{
	int number{ 0 };		// ���ڸ� ������ ����
	int square{ 0 };		// ������ ���� ������ ����

	while (number < 100)
	{
		square = number * number;
		std::cout << "pow(" << number << ") = " << square << std::endl;
		number++;
	}

	number = square = 0;

	return 0;
}