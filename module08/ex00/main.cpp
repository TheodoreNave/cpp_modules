#include "easyfind.hpp"

int main ( void ) {

	std::cout << "Test with int" << std::endl;
	{
		std::vector<int> vec;
		std::vector<int>::iterator it;

		vec.push_back(0);
		vec.push_back(24);
		vec.push_back(54);
		vec.push_back(999);
		vec.push_back(1);

		it = easyfind(vec, 54);

		if (it != vec.end())
			std::cout << "Found !" << std::endl;
		else
			std::cout << "Doesn't exist" << std::endl;
	}

	std::cout << "Test with float" << std::endl;
	{
		std::vector<float> vec;
		std::vector<float>::iterator it;

		vec.push_back(10.45f);
		vec.push_back(24.546f);
		vec.push_back(54.5468f);
		vec.push_back(42.0f);
		vec.push_back(1.0f);

		it = easyfind(vec, 42.0f);

		if (it != vec.end())
			std::cout << "Found !" << std::endl;
		else
			std::cout << "Doesn't exist" << std::endl;
	}
}