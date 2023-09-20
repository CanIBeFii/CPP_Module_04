#include "AMateria.hpp"

// Constructors
AMateria::AMateria( void ) : _type( "default" ) {
	std::cout << BOLDCYAN << "AMateria: " << RESET;
	std::cout << BOLDYELLOW << "Default " << BOLDGREEN << "Constructor " << RESET;
	std::cout << "called" << std::endl;
}

AMateria::AMateria( const std::string& type ) : _type( type ) {
	std::cout << BOLDCYAN << "AMateria: " << RESET;
	std::cout << BOLDYELLOW << "Type " << BOLDGREEN << "Constructor" << RESET; 
	std::cout << " called" << std::endl;
}

AMateria::AMateria( const AMateria& copy ) {
	std::cout << BOLDCYAN << "AMateria: " << RESET;
	std::cout << BOLDYELLOW << "Copy " << BOLDGREEN << "Constructor " << RESET;
	std::cout << "called" << std::endl;

	*this = copy;
}

// Destructors
AMateria::~AMateria( void ) {
	std::cout << BOLDCYAN << "AMateria: " << RESET;
	std::cout << BOLDRED << " Destructor " << RESET << "called" << std::endl;
}

// Operators
AMateria&	AMateria::operator=( const AMateria& copy ) {
	std::cout << BOLDCYAN << "AMateria: " << RESET;
	std::cout << BOLDYELLOW << "Assignation Operator" << RESET << " called" << std::endl;

	if ( this != &copy ) {
		_type = copy._type;
	}
	return ( *this );
}

// Setters
void	AMateria::setType( std::string& type ) {
	_type = type;
}

// Getters
const std::string&	AMateria::getType( void ) const {
	return ( _type );
}

// Functions
void	AMateria::use( ICharacter& target ) {
	std::cout << "* random stuff happen *" << std::endl;
}