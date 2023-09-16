#include "WrongCat.hpp"

// Constructors
WrongCat::WrongCat( void ) : WrongAnimal( "WrongCat" ) {
	std::cout << "Default Constructor called of " << CYAN << "WrongCat" << RESET << std::endl;
}

WrongCat::WrongCat( const WrongCat& copy ) : WrongAnimal( copy ){
	std::cout << "Copy Constructor called of " << CYAN << "WrongCat" << RESET << std::endl;
	*this = copy;
}

// Destructor
WrongCat::~WrongCat( void ) {
	std::cout << "Destructor called of " << CYAN << "WrongCat" << RESET << std::endl;
}

// Operators
WrongCat&	WrongCat::operator=( const WrongCat& copy ) {
	if ( this != &copy ) {
		WrongAnimal::operator=( copy );
	}
	return ( *this );
}

// Functions
void	WrongCat::makeSound( void ) const {
	std::cout << "Wrong Meow, Wrong Meow, Wrong Meow..." << std::endl;
}