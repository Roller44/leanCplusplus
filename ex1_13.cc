#include <iostream>
int main()
{
	int v1 = 0, v2 = 0, sum = 0;

	for (int i = 50; i <= 100; ++i)
	{
		sum += i;
	}
	std::cout << "The result of exercise 1.9 within for loop is: " << sum << std::endl;

	for (int i = 10; i >= 0; i--)
	{
		std::cout << "The result of exercise 1.10 within for loop is: " << i << std::endl;
	}

	std::cout << "Please enter two numbers(The first one must smaller than the last one): " << std::endl;
	std::cin >> v1 >> v2;
	for (int i = v1+1; i < v2; i++)
	{
		std::cout << "The result of exercise 1.11 within for loop is: " << i << std::endl;
	}

	return 0;
}
