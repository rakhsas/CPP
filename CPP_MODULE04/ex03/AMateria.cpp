
#include "AMateria.hpp"

AMateria::AMateria( void ) : type(""){}

AMateria::AMateria( std::string const & type ) : type(type){}

AMateria::AMateria( AMateria const & src ){ *this = src; }

AMateria::~AMateria( void ){}

std::string const & AMateria::getType() const{ return this->type; }

AMateria* AMateria::clone() const { return (AMateria*)this; }

void    AMateria::use( ICharacter& target ){
    std::cout << target.getName() << std::endl;
}

