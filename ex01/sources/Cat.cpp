#include "Cat.hpp"

// Constructors
Cat::Cat( void ) : Animal( "Cat" ) {
	std::cout << "Default Constructor called of " << CYAN << "Cat" << RESET << std::endl;
	_brain = new Brain();
}

Cat::Cat( const Cat& copy ) : Animal( copy ) {
	std::cout << "Copy Constructor called of " << CYAN << "Cat" << RESET << std::endl;
	*this = copy;
}

// Destructor
Cat::~Cat( void ) {
	std::cout << "Destructor called of " << CYAN << "Cat" << RESET << std::endl;
	delete _brain;
}

// Operators
Cat&	Cat::operator=( const Cat& copy ) {
	if ( this != &copy ) {
		Animal::operator=( copy );
		if ( getBrain() != NULL ) {
			delete _brain;
		}
		if ( copy.getBrain() != NULL ) {
			_brain = new Brain( *copy.getBrain() );
		}
		else {
			_brain = NULL;
		}
	}
	return ( *this );
}

// Functions
// Getters
Brain	*Cat::getBrain( void ) const {
	return ( _brain );
}

// Setters
void	Cat::setBrain( Brain *brain ) {
	_brain = brain;
}


void	Cat::makeSound( void ) const {
	std::cout << "Meow Meow Meow" << std::endl;
}