#ifndef WARLOCK_HPP
# define WARLOCK_HPP

#include <iostream>

class Warlock {
private:
	Warlock( void );
	Warlock( Warlock const& obj );
	Warlock &operator=( Warlock const& rhs );
	std::string _name;
	std::string _title;
public:
	Warlock( std::string, std::string );
	~Warlock( void );
	std::string const& getName( void ) const;
	std::string const& getTitle( void ) const;
	void	introduce( void ) const;
	void	setTitle( std::string const& title );
} ;

#endif