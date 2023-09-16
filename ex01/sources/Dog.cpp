#include "Dog.hpp"

// Constructors
Dog::Dog( void ) : Animal( "Dog" ) {
	std::cout << "Default Constructor called of " << CYAN << "Dog" << RESET << std::endl;
}

Dog::Dog( const Dog& copy ) : Animal( copy ) {
	std::cout << "Copy Constructor called of " << CYAN << "Dog" << RESET << std::endl;
	*this = copy;
}

// Destructor
Dog::~Dog( void ) {
	std::cout << "Destructor called of " << CYAN << "Dog" << RESET << std::endl;
}

// Operators
Dog&	Dog::operator=( const Dog& copy ) {
	if ( this != &copy ) {
		Animal::operator=( copy );
	}
	return ( *this );
}

// Functions
void	Dog::makeSound( void ) const {
	std::cout << "Woof Woof Woof" << std::endl;
}
