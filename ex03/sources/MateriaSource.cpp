#include "MateriaSource.hpp"

// Constructor
MateriaSource::MateriaSource( void ) {
	std::cout << BOLDCYAN << "MateriaSource: " << RESET;
	std::cout << BOLDYELLOW << "Default " << BOLDGREEN << "Constructor " << RESET;
	std::cout << "called" << std::endl;

	for ( int i = 0; i < 4; i++ ) {
		_inventory[i] = NULL;
	}
}

MateriaSource::MateriaSource( const MateriaSource& copy ) {
	std::cout << BOLDCYAN << "MateriaSource: " << RESET;
	std::cout << BOLDYELLOW << "Copy " << BOLDGREEN << "Constructor " << RESET;
	std::cout << "called" << std::endl;

	*this = copy;
}

// Destructor
MateriaSource::~MateriaSource( void ) {
	std::cout << BOLDCYAN << "MateriaSource: " << RESET;
	std::cout << BOLDRED << " Destructor " << RESET << "called" << std::endl;

	for ( int i = 0; i < 4; i++ ) {
		if ( _inventory[i] != NULL ) {
			delete _inventory[i];
		}
	}
}

// Operators
MateriaSource&	MateriaSource::operator=( const MateriaSource& copy ) {
	std::cout << BOLDCYAN << "Character: " << RESET;
	std::cout << BOLDYELLOW << "Assignation Operator" << RESET << " called" << std::endl;

	if ( this != &copy ) {
		for ( int i = 0; i < 4; i++ ) {
			if ( _inventory[i] != NULL ) {
				delete _inventory[i];
			}
			_inventory[i] = copy._inventory[i]->clone();
		}
	}
	return ( *this );
}

// Functions
void	MateriaSource::learnMateria( AMateria* materia ) {
	for ( int i = 0; i < 4; i++ ) {
		if ( _inventory[i] == NULL ) {
			_inventory[i] = materia;
			return ;
		}
	}
	std::cout << "Inventory full can't learn more Materia" << std::endl;
}

AMateria*	MateriaSource::createMateria( const std::string& type ) {
	for ( int i = 0; i < 4; i++ ) {
		if ( _inventory[i] != NULL && _inventory[i]->getType().compare(type) == 0) {
			return ( _inventory[i]->clone() );
		}
	}
	std::cout << "No Materia of that type learned" << std::endl;
	return ( NULL );
}