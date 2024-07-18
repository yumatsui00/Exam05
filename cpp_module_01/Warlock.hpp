#ifndef WARLOCK_HPP
# define WARLOCK_HPP

#include <iostream>
#include <map>

#include "Dummy.hpp"
#include "Fwoosh.hpp"

class Warlock {
private:
	Warlock( void );
	Warlock( Warlock const& obj );
	Warlock &operator=( Warlock const& rhs );
	std::string _name;
	std::string _title;
	std::map<std::string, ASpell*> _SpellBook;
public:
	Warlock( std::string, std::string );
	~Warlock( void );
	std::string const& getName( void ) const;
	std::string const& getTitle( void ) const;
	void	introduce( void ) const;
	void	setTitle( std::string const& title );
	void	learnSpell( ASpell* spell );
	void	forgetSpell( std::string SpellName );
	void	launchSpell( std::string spellName, ATarget const& target );
} ;

#endif