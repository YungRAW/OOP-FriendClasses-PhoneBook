#pragma once
#include <iostream>
#include <string>

class adress
{
private:
	friend class phoneBook;
	std::string city;
	std::string street;

	void display() const
	{
		std::cout << "Oras:" << city << std::endl;
		std::cout << "Strada:" << street << std::endl;
	}
public:
	adress();
	~adress();
};

