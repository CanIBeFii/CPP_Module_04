#include "Animal.hpp"

Animal::Animal( void ) : _type( "Animal" ) {
	std::cout << "Animal Default Constructor called" << std::endl;
}

Animal::Animal( const std::string& type ) : _type( type ) {
	std::cout << "Animal Type Constructor called" << std::endl;
}

Animal::Animal( const Animal& copy ) {
	std::cout << "Animal Copy Constructor called" << std::endl;
	*this = copy;
}

Animal&	Animal::operator=( const Animal& copy ) {
	std::cout << "Animal Assignation Operator called" << std::endl;
	if ( this != &copy ) {
		_type = copy._type;
	}
	return ( *this );
}

Animal::~Animal( void ) {
	std::cout << "Animal Destructor called" << std::endl;
}

void	Animal::makeSound( void ) const {
	std::cout << "Sounds of Animals Idk...." << std::endl;
}