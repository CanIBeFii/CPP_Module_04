#include "Animal.hpp"

// Constructors
Animal::Animal( void ) : _type( "Animal" ) {
	std::cout << BOLDCYAN << "Animal: " << RESET;
	std::cout << BOLDYELLOW << "Default " << BOLDGREEN << "Constructor " << RESET;
	std::cout << "called" << std::endl;
}

Animal::Animal( const std::string& type ) : _type( type ) {
	std::cout << BOLDCYAN << "Animal: " << RESET;
	std::cout << BOLDYELLOW << "Type " << BOLDGREEN << "Constructor" << RESET; 
	std::cout << " called" << std::endl;
}

Animal::Animal( const Animal& copy ) {
	std::cout << BOLDCYAN << "Animal: " << RESET;
	std::cout << BOLDYELLOW << "Copy " << BOLDGREEN << "Constructor " << RESET;
	std::cout << "called" << std::endl;

	*this = copy;
}

// Destructors
Animal::~Animal( void ) {
	std::cout << BOLDCYAN << "Animal: " << RESET;
	std::cout << BOLDRED << " Destructor " << RESET << "called" << std::endl;
}

// Operators
Animal&	Animal::operator=( const Animal& copy ) {
	std::cout << BOLDCYAN << "Animal: " << RESET;
	tsd::cout << BOLDYELLOW << "Assignation Operator" << RESET << " called" << std::endl;

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