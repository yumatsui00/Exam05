#include "ASpell.hpp"

ASpell::ASpell( std::string name, std::string effects ) : _name(name), _effects(effects) {};

ASpell::ASpell( ASpell const &src ) {
	*this = src;
} ;

ASpell::~ASpell( void ) {};

ASpell&	ASpell::operator=( ASpell const &rhs ) {
	this->_name = rhs.getName();
	this->_effects = rhs.getEffects();
	return *this;
} ;

std::string	ASpell::getName( void ) const {
	return _name;
} ;

std::string ASpell::getEffects( void ) const {
	return _effects;
} ;

void	ASpell::launch( ATarget const& target ) const {
	target.getHitBySpell(*this);
};