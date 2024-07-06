#include "Warlock.hpp"

Warlock::Warlock( void ) {};

Warlock::Warlock( Warlock const& obj ) {
	*this = obj;
};

Warlock &Warlock::operator=( Warlock const& rhs ) {
	this->_name = rhs._name;
	this->_title = rhs._title;
	return *this;
} ;

Warlock::Warlock( std::string name, std::string title ) : _name(name), _title(name) {
	std::cout << _name << ": This looks like another boring day." << std::endl;
} ;

Warlock::~Warlock( void ) {
	std::cout << _name << ": My job here is done!" << std::endl;
} ;

std::string	const& Warlock::getName( void ) const {
	return ( _name );
} ;

std::string	const& Warlock::getTitle( void ) const {
	return ( _title );
} ;

void	Warlock::introduce( void ) const {
	std::cout << _name << ": I am " << _name << ", " << _title << "!" << std::endl;
} ;

void	Warlock::setTitle( std::string const& title ) {
	_title = title;
} ;