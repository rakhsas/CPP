
#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap( std::string );
		~FragTrap();
		unsigned int getHit(void);
		void	highFivesGuys( void );
};


#endif