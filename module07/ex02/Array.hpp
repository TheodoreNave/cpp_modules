#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <string>
#include <iostream>
#include <exception>

template <typename T>

class Array {

	public :

		Array<T>( void ) : _n(0), _tab(new T[0]) { }

		Array<T>( unsigned int n )  : _n(n), _tab(new T[n]) { }


		Array<T>( Array const &src ) : _n(src._n), _tab(new T[_n]) {

				for (int i = 0 ; i < _n ; i++)
					_tab[i] = src._tab[i];
		 }

		~Array<T>( void ) {

			delete [] _tab;
		}

		Array<T> &operator=( Array const &rhs ) {

			if (_tab != NULL)
				delete [] _tab;
			_n = rhs._n;
			_tab = new T[_n];

			for (int i = 0 ; i < _n ; i++ )
				_tab[i] = new rhs._tab[i];

			return (*this);
		}

		T &operator[](unsigned int i) {

			if (i >= n)
					throw(AbortTemplate());
			else
				return (_tab[i]);
		}

		class AbortTemplate :: public std::exception {

			virtual const char *what() const throw()
			{
				return("Abort Template");
			}
		};


		unsigned int size( void ) {

			return (this->_n);
		}

	private:
		unsigned int _n;
		T *_tab;
};

#endif