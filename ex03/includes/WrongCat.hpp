#ifndef WRONG_CAT_HPP
#define WRONG_CAT_HPP

#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
	public:
		// Constructors
		WrongCat( void );
		WrongCat( const WrongCat& copy );

		// Destructors
		~WrongCat( void );
		
		// Operators
		WrongCat&	operator=( const WrongCat& copy );

		// Functions
		void	makeSound( void ) const;
};

#endif