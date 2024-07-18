#include "ATarget.hpp"

ATarget::ATarget( std::string type ) : _type(type) {};

ATarget::ATarget( ATarget const &src ) {
	*this = src;
} ;

ATarget::~ATarget( void ) {};

ATarget&	ATarget::operator=( ATarget const &rhs ) {
	this->_type = rhs.getType();
	return *this;
} ;

std::string const&	ATarget::getType( void ) const {
	return _type;
} ;

void	ATarget::getHitBySpell( ASpell const& spell ) const {
	std::cout << _type << " has been " << spell.getEffects() << "!" << std::endl;
} ;
