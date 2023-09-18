#include "Dog.hpp"

// Constructors
Dog::Dog( void ) : Animal( "Dog" ) {
	std::cout << "Default Constructor called of " << CYAN << "Dog" << RESET << std::endl;
	_brain = new Brain();
}

Dog::Dog( const Dog& copy ) : Animal( copy ) {
	std::cout << "Copy Constructor called of " << CYAN << "Dog" << RESET << std::endl;
	*this = copy;
}

// Destructor
Dog::~Dog( void ) {
	std::cout << "Destructor called of " << CYAN << "Dog" << RESET << std::endl;
	delete _brain;
}

// Operators
Dog&	Dog::operator=( const Dog& copy ) {
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
Brain	*Dog::getBrain( void ) const {
	return ( _brain );
}

// Setters
void	Dog::setBrain( Brain *brain ) {
	_brain = brain;
}

void	Dog::makeSound( void ) const {
	std::cout << "Woof Woof Woof" << std::endl;
}
