#include "Fixed.hpp"

Fixed::Fixed(): _rawBits(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value): _rawBits(value * 256)
{
	std::cout << "Overload constructor called" << std::endl;
}

Fixed::Fixed(const float fValue)
{
	std::cout << "Float constructor called" << std::endl;
	_rawBits = static_cast<int>(roundf(fValue * 256));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->_rawBits = other.getRawBits();
	return (*this);
}

Fixed::Fixed(const Fixed& src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_rawBits);
}

void	Fixed::setRawBits(int const raw)
{
	this->_rawBits = raw;
}

float	Fixed::toFloat(void) const 
{
	return (static_cast<float>(this->getRawBits()) / 256);
}

int		Fixed::toInt(void) const 
{
	return (this->getRawBits() / 256);
}

std::ostream& operator<<(std::ostream& strm, const Fixed& fix)
{
	strm << fix.toFloat();
	return strm;
}
