#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"
#include <iostream>

class MateriaSource : public IMateriaSource {
	public:
		// Constructor
		MateriaSource( void );
		MateriaSource( const MateriaSource& copy );

		// Destructor
		~MateriaSource( void );

		// Operators
		MateriaSource&	operator=( const MateriaSource& copy );

		// Functions
		void		learnMateria( AMateria* materia );
		AMateria*	createMateria( const std::string& type );

	private:
		AMateria	*_inventory[4];
};

#endif