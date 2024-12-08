#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class   ScavTrap : public ClapTrap
{
    private:
        int    _isGateKeeperMode;

    public:
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap& obj);
        ~ScavTrap();
        ScavTrap&   operator=(const ScavTrap& obj);

        void    guardGate();
        void    attack(const std::string& target);
        void    printInfo() const;
};

#endif