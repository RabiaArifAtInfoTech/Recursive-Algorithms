#include<iostream>


//Euclidean algorithm

int GCD(int a, int b)
{
	if (a == 0)
		return b;
	else
	{
		return GCD(b % a, a);
	}
}

int main()
{
	int a, b;

	std::cout << "Enter value of 'a': ";
	std::cin >> a;

	std::cout << "\nEnter value of 'b': ";
	std::cin >> b;

	std::cout << "\nGCD(" << a << " , " << b << " ) = " << GCD(a, b);

	std::cout << "\n\n\n";
	return 0;
}
