#ifndef CONVERT_HPP
# define CONVERT_HPP

#include <iostream>
#include <limits>
#include <string>
#include <cmath>
#include <sstream>

class Convert {

	private:

		char 	_char;
		int 	_int;
		float 	_float;
		double 	_double;

		std::string 	char_str;
		std::string 	int_str;
		std::string 	float_str;
		std::string 	double_str;

		int		is_char;
		int		is_int;
		int		is_float;
		int		is_double;


		int 	not_print_int;
		int		not_print_float;
		int 	stoi;

		int 	error;
		std::string _value;

	public:

		Convert();
		Convert( std::string conv );
		Convert( Convert const &src );
		~Convert();


		void overflow();
		long ft_stoi( std::string s );
		bool ValueConvertor();
		void checkWhichConvert();
		void convert_char();
		void convert_int();
		void convert_float();
		void convert_double();

		void conv_str();
		bool checkIsInt();
		bool checkIsNanOrInf();
		bool CheckIsCharacter();
		bool CheckIsFloat_Double();


		void print_function();
		void print_function_two();

		Convert &operator=(Convert const &rhs);
		char getChar();
		int getInt();
		float getFloat();
		double getDouble();
		int ft_atoi( std::string str );
		int	check_sign( std::string str, long int *i, int sign );


};


#endif