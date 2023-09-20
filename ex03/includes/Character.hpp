#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include "ICharacter.hpp"

class Character : public ICharacter {
	public:
		// Constructors
		Character( void );
		Character( const std::string& name );
		Character( const Character& copy );

		// Destructors
		~Character( void );

		// Operators
		Character&	operator=( const Character& copy );

		// Getters
		const std::string&	getName( void ) const;

		// Setters
		void				setName( const std::string& name );

		void				equip( AMateria* m );
		void				unequip( int idx );
		void				use( int idx, ICharacter& target );

	protected:
		std::string	_name;
		AMateria*	_inventory[4];
};

#endif