// ************************************************************************** //
//                                                                            //
//                		Contact.Class.cpp for 42 School			              //
//                Created on  : Thu Feb 24 13:45:02 2022                      //
//                Last update : Thu Feb 24 13:45:02 2022                      //
//                Made by : Theodore "tnave" Nave <tnave@student.42.fr>       //
//                                                                            //
// ************************************************************************** //

#include "Contact.class.hpp"

int Contact::_id = 0;

Contact::Contact(void) {

    this->index = 0;
    return ;

}

Contact::~Contact(void) {

    return ;
}

int Contact::add_in_phonebook(int i) {

    this->index = i + 1;
    std::cout << "Enter first name : ";
    std::getline(std::cin, this->first_name);
    std::cout << "Enter last name : ";
    std::getline(std::cin, this->last_name);
    std::cout << "Enter nickname name : ";
    std::getline(std::cin, this->nickname);
    std::cout << "Enter phone number : ";
    std::getline(std::cin, this->phone_number);
    std::cout << "Enter Darkest secret : ";
    std::getline(std::cin, this->darkest_secret);
    std::cout << "New contact added !" << std::endl;
    return 1;
}

void Contact::print_values(void) {

    if (this->index != 0)
    {
        int size[3];
        int i;
        std::string mot[3];
        i = 0;
        mot[0] = this->first_name;
        mot[1] = this->last_name;
        mot[2] = this->nickname;
        size[0] = mot[0].size();
        size[1] = mot[1].size();
        size[2] = mot[2].size();
        while (i < 3)
        {
            if (size[i] > 10)
            {
                mot[i].resize (9);
                mot[i].resize (10, '.');
            }
            i++;
        }
        if (this->index == 1)
            std::cout << "⟅-------------------------------------------⟅" << std::endl;
        std::cout << "|" <<std::setfill (' ') << std::setw (10) << this->index << "|";
        std::cout << std::setfill (' ') << std::setw (10) << mot[0] << "|";
        std::cout << std::setfill (' ') << std::setw (10) << mot[1] << "|";
        std::cout << std::setfill (' ') << std::setw (10) << mot[2] << "|" << std::endl;
        std::cout << "⟅-------------------------------------------⟅" << std::endl;
    }
}

void Contact::print_contact(void) {

    std::cout << "First_name = " << this->first_name << std::endl;
    std::cout << "Last_name = " << this->last_name << std::endl;
    std::cout << "Nickname = " << this->nickname << std::endl;
    std::cout << "Phone_number = " << this->phone_number << std::endl;
    std::cout << "Darkest_secret = " << this->darkest_secret << std::endl;

}