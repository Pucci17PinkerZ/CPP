#pragma once
#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int _rawBits;
		static const int _fractionalBits = 8;
	public:
		Fixed();
		Fixed(const int value);
		Fixed(const float fValue);
		~Fixed();
		Fixed(const Fixed& src);
		Fixed& operator=(const Fixed& other);
		
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
};
	std::ostream& operator<<(std::ostream& strm, const Fixed& fix);
