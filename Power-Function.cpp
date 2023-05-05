#include <iostream>

template<typename T>
T Power(T num, int pow)
{
	if (pow == 2)
		return num * num;
	return num * Power(num, pow - 1);
}

int main()
{
	std::cout << "4 ^ 4 = " << Power(4, 4);
	std::cout << "\n5 ^ 5 = " << Power(5, 5);
	std::cout << "\n11 ^ 6 = " << Power(11, 6);
	std::cout << "\n3.3 ^ 4 = " << Power(3.3, 4);

	std::cout << "\n\n\n";
	return 0;
}
