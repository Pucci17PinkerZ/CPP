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
	return (static_cast<float>(this->_rawBits) / 256);
}

int		Fixed::toInt(void) const
{
	return (this->_rawBits / 256);
}

// comparison operators

bool	Fixed::operator>(const Fixed& other) const
{
	return (this->_rawBits > other._rawBits);
}

bool	Fixed::operator<(const Fixed& other) const
{
	return (this->_rawBits < other._rawBits);
}

bool	Fixed::operator>=(const Fixed& other) const
{
	return (this->_rawBits >= other._rawBits);
}

bool	Fixed::operator<=(const Fixed& other) const
{
	return (this->_rawBits <= other._rawBits);
}

bool	Fixed::operator==(const Fixed& other) const
{
	return (this->_rawBits == other._rawBits);
}

bool	Fixed::operator!=(const Fixed& other) const
{
	return (this->_rawBits != other._rawBits);
}

// arithmetic operators

Fixed	Fixed::operator+(const Fixed& other) const
{
	return (Fixed(this->toFloat() + other.toFloat()));
}

Fixed	Fixed::operator-(const Fixed& other) const
{
	return (Fixed(this->toFloat() - other.toFloat()));
}

Fixed	Fixed::operator*(const Fixed& other) const
{
	return (Fixed(this->toFloat() * other.toFloat()));
}

Fixed	Fixed::operator/(const Fixed& other) const
{
	return (Fixed(this->toFloat() / other.toFloat()));
}

// increment / decrement

Fixed&	Fixed::operator++(void)
{
	this->_rawBits += 1;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	old(*this);
	this->_rawBits += 1;
	return (old);
}

Fixed&	Fixed::operator--(void)
{
	this->_rawBits -= 1;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	old(*this);
	this->_rawBits -= 1;
	return (old);
}

// min / max

Fixed&	Fixed::min(Fixed& a, Fixed& b)
{
	if (a < b)
		return a;
	else
		return b;
}

const Fixed&	Fixed::min(const Fixed& a, const Fixed& b)
{
	if (a < b)
		return a;
	else
		return b;
}

Fixed&	Fixed::max(Fixed& a, Fixed& b)
{
	if (a > b)
		return a;
	else
		return b;
}

const Fixed&	Fixed::max(const Fixed& a, const Fixed& b)
{
	if (a > b)
		return a;
	else
		return b;
}

std::ostream& operator<<(std::ostream& strm, const Fixed& fix)
{
	strm << fix.toFloat();
	return strm;
}
