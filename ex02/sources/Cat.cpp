#include "Cat.hpp"

// Constructors
Cat::Cat( void ) : AAnimal( "Cat" ) {
	std::cout << BOLDCYAN << "Cat: " << RESET;
	std::cout << BOLDYELLOW << "Default " << BOLDGREEN << " Constructor " << RESET;
	std::cout << "called" << std::endl;

	_brain = new Brain();
}

Cat::Cat( const Cat& copy ) : AAnimal( copy ) {
	std::cout << BOLDCYAN << "Cat: " << RESET;
	std::cout << BOLDYELLOW << "Copy " << BOLDGREEN << "Constructor " << RESET;
	std::cout << "called" << std::endl;

	_brain = NULL;
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
	std::cout << BOLDYELLOW << "Assignation Operator" << RESET << " called" << std::endl;

	if ( this != &copy ) {
		AAnimal::operator=( copy );
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
	if ( _brain == NULL ) {
		return ( NULL );
	}
	return ( _brain );
}

// Setters
void	Cat::setBrain( Brain *brain ) {
	_brain = brain;
}


void	Cat::makeSound( void ) const {
	std::cout << "Meow Meow Meow" << std::endl;
}