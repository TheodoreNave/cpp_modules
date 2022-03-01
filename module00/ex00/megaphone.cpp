// ************************************************************************** //
//                                                                            //
//                		megaphone.cpp for 42 School			                  //
//                Created on  : Thu Feb 24 13:45:02 2022                      //
//                Last update : Thu Feb 24 13:45:02 2022                      //
//                Made by : Theodore "tnave" Nave <tnave@student.42.fr>       //
//                                                                            //
// ************************************************************************** //

#include <iostream>

int main(int ac, char **av) {
    int i;
    int j;

    i = 1;
    j = 0;
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    if (ac > 1) {
        while (av[i]) {
            while (av[i][j]) {
                std::cout << static_cast<char>(std::toupper(av[i][j]));
                j++;
            }
            j = 0;
            if (!(av[i + 1] == NULL))
                std::cout << " ";
            i++;
        }
    }
    std::cout << std::endl;
    return 0;
}
