// ************************************************************************** //
//                                                                            //
//                		HumanA.Hpp for 42 School			              	  //
//                Created on  : Thu Feb 24 13:45:02 2022                      //
//                Last update : Thu Feb 24 13:45:02 2022                      //
//                Made by : Theodore "tnave" Nave <tnave@student.42.fr>       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include <string>
#include <fstream>

int 	ft_error(int i) {

	if (i == 1)
		std::cout << "Wrong number of arguments" << std::endl;
	else if (i == 2)
		std::cout << "Error on open" << std::endl;
	else if (i == 3)
		std::cout << "Error empty line" << std::endl;
	return (0);
}

int main (int ac, char **av)
{
	size_t pos;
	int i;

	pos = 0;
	i = 0;
	if (ac != 4)
		return (ft_error(1));
	std::ifstream filename(av[1]);
	if (!filename.is_open())
		return (ft_error(2));
	std::string file = av[1];
	file.append(".replace");


	std::string s1 = av[2];
	std::string s2 = av[3];
	if (s1.length() == 0 || s2.length() == 0)
		return (ft_error(3));

	std::string str;

	std::ofstream outfile (file.c_str());
	if (!outfile.is_open())
		return (ft_error(2));

	std::getline(filename, str, '\0');
	// if (!std::getline(filename, str, '\0'))
	// 	return(ft_error(4));

	std::cout << str;
	// std::cout << str.length() << std::endl;

	while (1)
	{
		pos = str.find(s1, i);
		i = pos + s2.length();
		std::cout << "pos = "<< pos << std::endl;
		std::cout << str.length() << std::endl;

		if (pos == std::string::npos)
			break;
		str.erase(pos, s1.length());
		str.insert(pos, s2);
		std::cout << str;
	}
	outfile << str;
	outfile.close();	// protect
	return (0);
}
