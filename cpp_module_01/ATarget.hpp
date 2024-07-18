#ifndef ATARGET_HPP
# define ATARGET_HPP

#include <iostream>
#include "ASpell.hpp"

class ATarget {
protected:
	std::string _type;
public:
	ATarget( std::string type );
	ATarget( ATarget const &src );
	ATarget& operator=( ATarget const &rhs );
	virtual ~ATarget( void );

	std::string const &getType( void ) const;
	virtual 	ATarget* clone() const = 0;
	void		getHitBySpell( ASpell const& spell ) const;
} ;

#endif