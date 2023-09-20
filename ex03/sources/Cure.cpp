#include "Cure.hpp"

// Constructors
Cure::Cure( void ) : AMateria( "cure" ) {
	std::cout << BOLDCYAN << "Cure: " << RESET;
	std::cout << BOLDYELLOW << "Default " << BOLDGREEN << "Constructor " << RESET;
	std::cout << "called" << std::endl;
}

Cure::Cure( const Cure& copy ) : AMateria( copy ) {
	std::cout << BOLDCYAN << "Cure: " << RESET;
	std::cout << BOLDYELLOW << "Copy " << BOLDGREEN << "Constructor " << RESET;
	std::cout << "called" << std::endl;
}

// Destructors
Cure::~Cure( void ) {
	std::cout << BOLDCYAN << "Cure: " << RESET;
	std::cout << BOLDRED << " Destructor " << RESET << "called" << std::endl;
}

// Operators
Cure&	Cure::operator=( const Cure& copy ) {
	std::cout << BOLDCYAN << "Cure: " << RESET;
	std::cout << BOLDYELLOW << "Assignation Operator" << RESET << " called" << std::endl;

	if ( this != &copy ) {
		AMateria::operator=( copy );
	}
	return ( *this );
}

// Functions
AMateria*	Cure::clone( void ) const {
	return ( new Cure( *this ) );
}

void		Cure::use( ICharacter& target ) {
	std::cout << "* heals " << target.getNAme() << "'s wounds *" << std::endl;
}