#include "Dog.hpp"

// Constructors
Dog::Dog( void ) : AAnimal( "Dog" ) {
	std::cout << BOLDCYAN << "Dog: " << RESET;
	std::cout << BOLDYELLOW << "Default " << BOLDGREEN << "Constructor " << RESET;
	std::cout << "called" << std::endl;

	_brain = new Brain();
}

Dog::Dog( const Dog& copy ) : AAnimal( copy ) {
	std::cout << BOLDCYAN << "Dog: " << RESET;
	std::cout << BOLDYELLOW << "Copy " << BOLDGREEN << "Constructor " << RESET; 
	std::cout << "called" << std::endl;

	_brain = NULL;
	*this = copy;
}

// Destructor
Dog::~Dog( void ) {
	std::cout << BOLDCYAN << "Dog: " << RESET;
	std::cout << BOLDRED << "Destructor " << RESET << "called" << std::endl; 
	
	if ( _brain != NULL ) {
		delete _brain;
	}
}

// Operators
Dog&	Dog::operator=( const Dog& copy ) {
	std::cout << BOLDCYAN << "Dog: " << RESET;
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
Brain	*Dog::getBrain( void ) const {
	if ( _brain == NULL ) {
		return ( NULL );
	}
	return ( _brain );
}

// Setters
void	Dog::setBrain( Brain *brain ) {
	_brain = brain;
}

void	Dog::makeSound( void ) const {
	std::cout << "Woof Woof Woof" << std::endl;
}
