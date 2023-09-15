#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {
	public:
		// Orthodox Cannonical Form
		Animal( void );
		Animal( const std::string& type );
		Animal( const Animal& copy );
		Animal&	operator=( const Animal& copy );
		virtual ~Animal( void );

		// Functions
		virtual	void	makeSound( void ) const;

	protected:
		std::string	_type;
};

#endif