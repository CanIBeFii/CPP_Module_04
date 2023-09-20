#include "AAnimal.hpp"

// Constructors
AAnimal::AAnimal( void ) : _type( "AAnimal" ) {
	std::cout << BOLDCYAN << "AAnimal: " << RESET;
	std::cout << BOLDYELLOW << "Default " << BOLDGREEN << "Constructor " << RESET;
	std::cout << "called" << std::endl;
}

AAnimal::AAnimal( const std::string& type ) : _type( type ) {
	std::cout << BOLDCYAN << "AAnimal: " << RESET;
	std::cout << BOLDYELLOW << "Type " << BOLDGREEN << "Constructor" << RESET; 
	std::cout << " called" << std::endl;
}

AAnimal::AAnimal( const AAnimal& copy ) {
	std::cout << BOLDCYAN << "AAnimal: " << RESET;
	std::cout << BOLDYELLOW << "Copy " << BOLDGREEN << "Constructor " << RESET;
	std::cout << "called" << std::endl;

	*this = copy;
}

// Destructors
AAnimal::~AAnimal( void ) {
	std::cout << BOLDCYAN << "AAnimal: " << RESET;
	std::cout << BOLDRED << " Destructor " << RESET << "called" << std::endl;
}

// Operators
AAnimal&	AAnimal::operator=( const AAnimal& copy ) {
	std::cout << BOLDCYAN << "AAnimal: " << RESET;
	std::cout << BOLDYELLOW << "Assignation Operator" << RESET << " called" << std::endl;

	if ( this != &copy ) {
		_type = copy._type;
	}
	return ( *this );
}

// Functions
// Setters
void	AAnimal::setType( const std::string& type ) {
	_type = type;
}

// Getters
std::string	AAnimal::getType( void ) const {
	return ( _type );
}

void	AAnimal::makeSound( void ) const {
	std::cout << "Sounds of AAnimals Idk...." << std::endl;
}