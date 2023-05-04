#include<iostream>


int factorial(int num)
{
	if (num == 0 || num == 1)
		return 1;
	else
		return num * factorial(num - 1);
}

int main()
{
	int num;

	std::cout << "Enter number: ";
	std::cin >> num;

	std::cout << factorial(num);

	std::cout << "\n\n\n";
	return 0;
}
