#include "Animal.hpp"

// Constructors
Animal::Animal( void ) : _type( "Animal" ) {
	std::cout << "Default Constructor called of " << CYAN << "Animal" << RESET << std::endl;
}

Animal::Animal( const std::string& type ) : _type( type ) {
	std::cout << "Type Constructor called of " << CYAN << "Animal" << RESET << std::endl;
}

Animal::Animal( const Animal& copy ) {
	std::cout << "Copy Constructor called of " << CYAN << "Animal" << RESET << std::endl;
	*this = copy;
}

// Destructors
Animal::~Animal( void ) {
	std::cout << "Destructor called of " << CYAN << "Animal" << RESET << std::endl;
}

// Operators
Animal&	Animal::operator=( const Animal& copy ) {
	std::cout << "Assignation Operator called of " << CYAN << "Animal" << RESET << std::endl;
	if ( this != &copy ) {
		_type = copy._type;
	}
	return ( *this );
}

// Functions
// Setters
void	Animal::setType( const std::string& type ) {
	_type = type;
}

// Getters
std::string	Animal::getType( void ) const {
	return ( _type );
}

void	Animal::makeSound( void ) const {
	std::cout << "Sounds of Animals Idk...." << std::endl;
}