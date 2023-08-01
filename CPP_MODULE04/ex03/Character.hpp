
#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{

private:
    std::string name;
    AMateria    *inventory[4];

public:
    Character(std::string const &);
    Character(Character const &);
    ~Character();

    Character&          operator=(Character const &);

    std::string const&  getName() const;
    void                equip(AMateria* );
    void                unequip(int );
    void                use(int , ICharacter& );
};

#endif // CHARACTER_HPP