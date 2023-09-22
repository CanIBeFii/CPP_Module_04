#include "Character.hpp"

// Constructors
Character::Character( void ) : _name( "Default" ) {
	std::cout << BOLDCYAN << "Character: " << RESET;
	std::cout << BOLDYELLOW << "Default " << BOLDGREEN << "Constructor " << RESET;
	std::cout << "called" << std::endl;

	for ( int i = 0; i < 4; i++ ) {
		this->_inventory[i] = NULL;
	}
}

Character::Character( const std::string& name ) : _name( name ) {
	std::cout << BOLDCYAN << "Character: " << RESET;
	std::cout << BOLDYELLOW << "Type " << BOLDGREEN << "Constructor" << RESET; 
	std::cout << " called" << std::endl;

	for ( int i = 0; i < 4; i++ ) {
		this->_inventory[i] = NULL;
	}
}

Character::Character( const Character& copy ) {
	std::cout << BOLDCYAN << "Character: " << RESET;
	std::cout << BOLDYELLOW << "Copy " << BOLDGREEN << "Constructor " << RESET;
	std::cout << "called" << std::endl;

	*this = copy;
}

// Detructors
Character::~Character( void ) {
	std::cout << BOLDCYAN << "Character: " << RESET;
	std::cout << BOLDRED << " Destructor " << RESET << "called" << std::endl;

	for ( int i = 0; i < 4; i++ ) {
		if ( _inventory[i] != NULL ) {
			delete _inventory[i];
		}
	}
}

// Operators
Character&	Character::operator=( const Character& copy ) {
	std::cout << BOLDCYAN << "Character: " << RESET;
	std::cout << BOLDYELLOW << "Assignation Operator" << RESET << " called" << std::endl;

	if ( this != &copy ) {
		setName( copy.getName() );

		for ( int i = 0; i < 4; i++ ) {
			if ( _inventory[i] != NULL ) {
				delete _inventory[i];
			}
			_inventory[i] = copy._inventory[i]->clone();
		}
	}
	return ( *this );
}

// Getters
const std::string&	Character::getName( void ) const {
	return ( _name );
}

// Setters
void	Character::setName( const std::string& name ) {
	_name = name;
}

// Functions
void	Character::equip( AMateria* m ) {
	for ( int i = 0; i < 4; i++ ) {
		if ( _inventory[i] == NULL ) {
			std::cout << m->getType() << " being equiped on slot " << i << std::endl;
			_inventory[i] = m;
			return ;
		}
	}
	std::cout << "Inventory is full" << std::endl;
}

void	Character::unequip( int idx ) {
	if ( _inventory[idx] == NULL ) {
		std::cout << "No Materia on this slot" << std::endl;
		return ;
	}
	std::cout << getName() << " is droping the Materia ";
	std::cout << _inventory[idx]->getType() << " on the floor!" << std::endl; 

	_inventory[idx] = NULL;
}

void	Character::use( int idx, ICharacter& target ) {
	if ( _inventory[idx] == NULL ) {
		std::cout << "Slot is empty can't use Materia" << std::endl;
		return ;
	}
	_inventory[idx]->use( target );
}