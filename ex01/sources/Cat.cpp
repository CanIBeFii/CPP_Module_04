#include "Cat.hpp"

// Constructors
Cat::Cat( void ) : Animal( "Cat" ) {
	std::cout << BOLDCYAN << "Cat: " << RESET;
	std::cout << BOLDYEALLOW << "Default " << BOLDGREEN << " Constructor " << RESET;
	std::cout << "called" << std::endl;

	_brain = new Brain();
}

Cat::Cat( const Cat& copy ) : Animal( copy ) {
	std::cout << BOLDCYAN << "Cat: " << RESET;
	std::cout << BOLDYEALLOW << "Copy " << BOLDGREEN << "Constructor " << RESET;
	std::cout << "called" << std::endl;

	*this = copy;
}

// Destructor
Cat::~Cat( void ) {
	std::cout << BOLDCYAN << "Cat: " << RESET;
	std::cout << BOLDRED << "Destrutor " << RESET << "called" << std::endl;

	if ( _brain != NULL ) {
		delete _brain;
	}
}

// Operators
Cat&	Cat::operator=( const Cat& copy ) {
	std::cout << BOLDCYAN << "Cat: " << RESET;
	std::cout << BOLDYEALLOW << "Assignation Operator" << RESET << " called" << std::endl;

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