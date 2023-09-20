#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

#include <iostream>
#include "AMateria.hpp"

class ICharacter {
	public:
		// Destructors
		virtual ~ICharacter( void );

		//	Getters
		virtual const std::string&	getName( void ) const = 0;

		// Functions
		virtual void				equip( AMateria* m ) = 0;
		virtual void				unequip( int idx ) = 0;
		virtual void				use( int idx, ICharacter& target ) = 0;
};

#endif