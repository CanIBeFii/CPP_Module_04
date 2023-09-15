#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"

class Dog : public Animal {
	public:
		// Orthodox Cannonical Form
		Dog( void );
		Dog( const Dog& copy );
		Dog&	operator=( const Dog& copy );
		virtual ~Dog( void );

		// Functions
		void	makeSound( void ) const;
};

#endif