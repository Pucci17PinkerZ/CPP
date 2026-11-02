#include "Fixed.hpp"

Fixed::Fixed(): _rawBits(0)
{
	std::cout << "Fixed build" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Fixed destroy" << std::endl;
}

Fixed::Fixed(const Fixed& src)
{
	std::cout << "Copy constructor called" << std::endl;
}


Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout << "Copy assign operation call" << std::endl;

}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits call" << std::endl;
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "set RawBits call" << std::endl;
}