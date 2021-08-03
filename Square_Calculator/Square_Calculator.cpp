#include <iostream>

int main()
{
	int number{ 0 };		// 숫자를 저장할 변수
	int square{ 0 };		// 제곱한 값을 저장할 변수

	while (number < 100)
	{
		square = number * number;
		std::cout << "pow(" << number << ") = " << square << std::endl;
		number++;
	}

	number = square = 0;

	return 0;
}