#include "WrongAnimal.hpp"

// Constructors
WrongAnimal::WrongAnimal( void ) : _type( "WrongAnimal" ) {
	std::cout << "Default Constructor called of " << CYAN << "WrongAnimal" << RESET << std::endl;
}

WrongAnimal::WrongAnimal( const std::string& type ) : _type( type ) {
	std::cout << "Type Constructor called of " << CYAN << "WrongAnimal" << RESET << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal& copy ) {
	std::cout << "Copy Constructor called of " << CYAN << "WrongAnimal" << RESET << std::endl;
	*this = copy;
}

// Destructors
WrongAnimal::~WrongAnimal( void ) {
	std::cout << "Destructor called of " << CYAN << "WrongAnimal" << RESET << std::endl;
}

// Operators
WrongAnimal&	WrongAnimal::operator=( const WrongAnimal& copy ) {
	std::cout << "Assignation Operator called of " << CYAN << "WrongAnimal" << RESET << std::endl;
	if ( this != &copy ) {
		_type = copy._type;
	}
	return ( *this );
}

// Functions
// Setters
void	WrongAnimal::setType( const std::string& type ) {
	_type = type;
}

// Getters
std::string	WrongAnimal::getType( void ) const {
	return ( _type );
}

void	WrongAnimal::makeSound( void ) const {
	std::cout << "Ughdsnf sj sf s dfjksndfkjnsaf eiubfeennjen " << std::endl;
}