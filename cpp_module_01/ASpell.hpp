#ifndef ASPELL_HPP
# define ASPELL_HPP

#include <iostream>
#include "ATarget.hpp"

class ASpell {
protected:
	std::string _name;
	std::string _effects;
public:
	ASpell( std::string name, std::string effects );
	ASpell( ASpell const &src );
	ASpell& operator=( ASpell const &rhs );
	virtual ~ASpell( void );

	std::string getName( void ) const;
	std::string getEffects( void ) const;
	virtual ASpell*	clone() const = 0;
	void	launch( ATarget const& target ) const ;
} ;

#endif