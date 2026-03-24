#pragma once

#include <string>

/*
	void setType(std::string type); <- this makes a copy of the
	entire string and is inefficient!

	void setType(std::string &type); <- this passes a memory address
	but is dangerous, because the contents are modifiable!
	
	void		setType(const std::string &type); //this passes a
	memory address and doesn't allow modifications: The C++ Way! 🇺🇸
	
	const std::string	&getType(void) const;
	the first const protects the output: the private variable pointed
	to by the returned reference is not modifiable from outside the object.
	the second const tells the compiler that the function only reads
	data from the object and doesn't modify anything.
	*/

class Weapon
{
private:
	std::string type;

public:
	Weapon();
	Weapon(std::string type);
	~Weapon();

	void				setType(const std::string &type);
	const std::string	&getType(void) const;
};
