#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"

class Dog : public Animal {
	public:
		// Constructors
		Dog( void );
		Dog( const Dog& copy );
		
		// Destructors
		virtual ~Dog( void );

		// Operators
		Dog&	operator=( const Dog& copy );

		// Functions
		void	makeSound( void ) const;
};

#endif