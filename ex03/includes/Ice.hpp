#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria {
	public:
		// Constructors
		Ice( void );
		Ice( const Ice& copy );

		// Destructors
		~Ice( void );

		// Operators
		Ice&	operator=( const Ice& copy );

		// Functions
		AMateria*	clone( void ) const;
		void		use( ICharacter& target );
};

#endif