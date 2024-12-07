#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>

class ClapTrap
{
    protected:
        std::string     _name;
        unsigned int    _hitPoints;
        unsigned int    _energyPoints;
        unsigned int    _attackDamage;

    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap& obj);
        ClapTrap&   operator=(const ClapTrap& obj);
        virtual ~ClapTrap();

        virtual void    attack(const std::string& target);
        void            takeDamage(unsigned int amount);
        void            beRepaired(unsigned int amount);
        virtual void    printInfo() const;
        std::string     getName() const;
        unsigned int    getAttackDamage() const;
};

#endif