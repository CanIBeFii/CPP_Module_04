#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"

class Cat : public Animal {
	public:
		// Constructors
		Cat( void );
		Cat( const Cat& copy );

		// Destructors
		virtual ~Cat( void );
		
		// Operators
		Cat&	operator=( const Cat& copy );

		// Functions
		void	makeSound( void ) const;
};

#endif