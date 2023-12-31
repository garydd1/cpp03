#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{

public:

	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap& toCopy);
	~ScavTrap();
	ScavTrap& operator=(const ScavTrap& original);
	void guardGate();


};

#endif