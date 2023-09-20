#include "Ice.hpp"

// Constructors
Ice::Ice( void ) : AMateria( "ice" ) {
	std::cout << BOLDCYAN << "Ice: " << RESET;
	std::cout << BOLDYELLOW << "Default " << BOLDGREEN << "Constructor " << RESET;
	std::cout << "called" << std::endl;
}

Ice::Ice( const Ice& copy ) : AMateria( copy ) {
	std::cout << BOLDCYAN << "Ice: " << RESET;
	std::cout << BOLDYELLOW << "Copy " << BOLDGREEN << "Constructor " << RESET;
	std::cout << "called" << std::endl;
}

// Destructors
Ice::~Ice( void ) {
	std::cout << BOLDCYAN << "Ice: " << RESET;
	std::cout << BOLDRED << " Destructor " << RESET << "called" << std::endl;
}

// Operators
Ice&	Ice::operator=( const Ice& copy ) {
	std::cout << BOLDCYAN << "Ice: " << RESET;
	std::cout << BOLDYELLOW << "Assignation Operator" << RESET << " called" << std::endl;

	if ( this != &copy ) {
		AMateria::operator=( copy );
	}
	return ( *this );
}

// Functions
AMateria*	Ice::clone( void ) const {
	return ( new Ice( *this ) );
}

void		Ice::use( ICharacter& target ) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}