#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>


class ClapTrap{

public:

	ClapTrap(); // default constructor
	ClapTrap(std::string name); // name constructor
	ClapTrap(const ClapTrap& toCopy); // copy constructor
	~ClapTrap(); // destructor
	ClapTrap& operator=(const ClapTrap& original); // assignation operator


	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	std::string getName( void ) const; // getter function
	void setStats(std::string name, unsigned int hitPoints, unsigned int energyPoints, unsigned int attackDamage);

private:

	std::string		_name;
	unsigned int	_hitPoints;
	unsigned int	_energyPoints;
	unsigned int	_attackDamage;

};

#endif


