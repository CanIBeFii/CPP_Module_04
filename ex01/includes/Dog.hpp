#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

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
		// Getters
		Brain	*getBrain( void ) const;

		// Setters
		void	setBrain( Brain *brain );

		void	makeSound( void ) const;

	private:
		Brain	*_brain;
};

#endif