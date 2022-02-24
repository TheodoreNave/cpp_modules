// Copyright 2022 Ecole_42
// Author: tnave

#include "Phonebook.class.hpp"
#include <iostream>
#include <stdio.h>

int main() {

	Phonebook repertoire;
	std::string cmd;
	int i = 0;
	int index = 0;

	while(1) {

		std::cout << "Entrez une commande : ";
		std::getline(std::cin, cmd);
		if (cmd.compare("ADD") == 0)
		{
			if (i == 8)
				i = 0;
			if (i < 8)
			{
				repertoire.all_contacts[i].add_in_phonebook(i);
				i += 1;
			}
		}
		else if (cmd.compare("SEARCH") == 0)
		{
			if (i == 0)
				std::cout << "Empty contacts list, use ADD to add contacts" << std::endl;
			else {
				repertoire.Search_contacts();
				index = repertoire.Look_for_contacts(i);
				printf("index = %d\n", index);
				if (index)
					repertoire.all_contacts[index - 1].print_contact();
			}
		}
		else if (cmd.compare("EXIT") == 0)
			return 0;
		else
			std::cout << "Option not found" << std::endl;
	}
}