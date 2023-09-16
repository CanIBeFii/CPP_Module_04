#include "Cat.hpp"

// Constructors
Cat::Cat( void ) : Animal( "Cat" ) {
	std::cout << "Default Constructor called of " << CYAN << "Cat" << RESET << std::endl;
}

Cat::Cat( const Cat& copy ) : Animal( copy ) {
	std::cout << "Copy Constructor called of " << CYAN << "Cat" << RESET << std::endl;
	*this = copy;
}

// Destructor
Cat::~Cat( void ) {
	std::cout << "Destructor called of " << CYAN << "Cat" << RESET << std::endl;
}

// Operators
Cat&	Cat::operator=( const Cat& copy ) {
	if ( this != &copy ) {
		Animal::operator=( copy );
	}
	return ( *this );
}

// Functions
void	Cat::makeSound( void ) const {
	std::cout << "Meow Meow Meow" << std::endl;
}