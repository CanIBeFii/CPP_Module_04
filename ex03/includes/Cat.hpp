#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal {
	public:
		// Constructors
		Cat( void );
		Cat( const Cat& copy );

		// Destructors
		virtual ~Cat( void );
		
		// Operators
		Cat&	operator=( const Cat& copy );

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