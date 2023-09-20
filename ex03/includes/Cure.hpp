#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria {
	public:
		// Constructors
		Cure( void );
		Cure( const Cure& copy );

		// Destructors
		~Cure( void );

		// Operators
		Cure&	operator=( const Cure& copy );

		// Functions
		AMateria*	clone( void ) const;
		void		use( ICharacter& target );
};

#endif