// ************************************************************************** //
//                                                                            //
//                		Contact.Class.cpp for 42 School			              //
//                Created on  : Thu Feb 24 13:45:02 2022                      //
//                Last update : Thu Feb 24 13:45:02 2022                      //
//                Made by : Theodore "tnave" Nave <tnave@student.42.fr>       //
//                                                                            //
// ************************************************************************** //

#include "Contact.hpp"

// ************************************************************************** //
//                         Constructor / Destructor                           //
// ************************************************************************** //

Contact::Contact(void) {

    this->_index = 0;
    return ;
}

Contact::~Contact(void) {

    return ;
}

// ************************************************************************** //
//                               Member function                              //
// ************************************************************************** //

int Contact::add_in_phonebook(int i) {

    this->_index = i + 1;
    std::cout << "Enter first name : ";
    std::getline(std::cin, this->_first_name);
    std::cout << "Enter last name : ";
    std::getline(std::cin, this->_last_name);
    std::cout << "Enter nickname name : ";
    std::getline(std::cin, this->_nickname);
    std::cout << "Enter phone number : ";
    std::getline(std::cin, this->_phone_number);
    std::cout << "Enter Darkest secret : ";
    std::getline(std::cin, this->_darkest_secret);
    std::cout << "New contact added !" << std::endl;
    return 1;

}

void Contact::print_values(void) {

    if (this->_index != 0)
    {
        int size[3];
        int i;
        std::string mot[3];
        i = 0;
        mot[0] = this->_first_name;
        mot[1] = this->_last_name;
        mot[2] = this->_nickname;
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
        if (this->_index == 1)
            std::cout << "⟅-------------------------------------------⟅" << std::endl;
        std::cout << "|" <<std::setfill (' ') << std::setw (10) << this->_index << "|";
        std::cout << std::setfill (' ') << std::setw (10) << mot[0] << "|";
        std::cout << std::setfill (' ') << std::setw (10) << mot[1] << "|";
        std::cout << std::setfill (' ') << std::setw (10) << mot[2] << "|" << std::endl;
        std::cout << "⟅-------------------------------------------⟅" << std::endl;

    }
}

void Contact::print_contact(void) {

    std::cout << "First_name = " << this->_first_name << std::endl;
    std::cout << "Last_name = " << this->_last_name << std::endl;
    std::cout << "Nickname = " << this->_nickname << std::endl;
    std::cout << "Phone_number = " << this->_phone_number << std::endl;
    std::cout << "Darkest_secret = " << this->_darkest_secret << std::endl;

}

// ************************************************************************** //
//                               Static Variables                             //
// ************************************************************************** //

int Contact::_id = 0;
