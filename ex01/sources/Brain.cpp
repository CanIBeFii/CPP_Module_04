#include "Brain.hpp"

// Constructors
Brain::Brain( void ) {
	std::cout << "Default Constructor called of " << CYAN << "Brain" << RESET << std::endl;
}

Brain::Brain( const Brain& copy ) {
	std::cout << "Copy Constructor called of " << CYAN << "Brain" << RESET << std::endl;
}

// Destructors
Brain::~Brain( void ) {
	std::cout << "Destructor called of " << CYAN << "Brain" << RESET << std::endl;
}

// Operators
Brain&	Brain::operator=( const Brain& copy ) {
	std::cout << "Assignation Operator called of " << CYAN << "Brain" << RESET << std::endl;
	
	if ( this != &copy ) {
		for ( int i = 0; i < 100; i++ ) {
			setIdea( i , copy.getIdea( i ) );
		}
	}
	return ( *this );
}

// Functions
// Getters

std::string	Brain::getIdea( int index ) const {
	return ( _ideas[ index ] );
}

// Setters

void	Brain::setIdea( int index, const std::string idea ) {
	_ideas[ index ] = idea;
}
