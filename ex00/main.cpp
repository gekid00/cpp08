#include "easyfind.hpp"
#include <iostream>
#include <vector>

int main()
{
	std::vector<int> vec = {1, 2, 3, 4, 5};

	try
	{
		std::vector<int>::iterator it = easyfind(vec, 3);
		std::cout << "Value found: " << *it << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		std::vector<int>::iterator it = easyfind(vec, 6);
		std::cout << "Value found: " << *it << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}