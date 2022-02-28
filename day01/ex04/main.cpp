#include <iostream>
#include <string>
#include <fstream>


int main (int ac, char **av)
{
	size_t pos = 0;

	std::ifstream filename(av[1]);
	std::string recup = av[1];

	std::string s1 = av[2];
	std::string s2 = av[3];

	std::string str;

	std::ofstream outfile (recup.append(".replace"));

	std::getline(filename, str, '\0');

	std::cout << str;

	std::cout << str.length() << std::endl;

	while (1)
	{
		pos = str.find(s1);
		std::cout << "pos = "<< pos << std::endl;
		std::cout << str.length() << std::endl;

		if (pos == std::string::npos)
			break;
		str.erase(pos, s1.length());
		str.insert(pos, s2);
		std::cout << str;
	}
	// outfile << str;
	outfile.close();
}