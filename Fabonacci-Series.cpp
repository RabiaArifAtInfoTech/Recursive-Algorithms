#include<iostream>

int fabonacciNumber(int num)
{
	int tempNum = num;
	if (tempNum == 0)
		return 0;
	else if (tempNum == 1 || tempNum == 2)
	{
		return 1;
	}
	else
	{
		return fabonacciNumber(tempNum - 1) + fabonacciNumber(tempNum - 2);
	}
}

void fabonacciSeries(int num)
{
	for (int i = 0; i < num; i++)
	{
		std::cout << fabonacciNumber(i) << " ";
	}
}

int main()
{
	int num;

	std::cout << "Enter a number: ";
	std::cin >> num;

	fabonacciSeries(num);

	std::cout << "\n\n\n";
	return 0;
}
