#include "Fixed.hpp"

int main( void )
{
	// subject test
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	// extra tests
	std::cout << "--- extra ---" << std::endl;
	Fixed x( 10 );
	Fixed y( 3 );

	std::cout << "x = " << x << std::endl;
	std::cout << "y = " << y << std::endl;
	std::cout << "x + y = " << (x + y) << std::endl;
	std::cout << "x - y = " << (x - y) << std::endl;
	std::cout << "x * y = " << (x * y) << std::endl;
	std::cout << "x / y = " << (x / y) << std::endl;

	std::cout << "x > y  : " << (x > y) << std::endl;
	std::cout << "x < y  : " << (x < y) << std::endl;
	std::cout << "x >= y : " << (x >= y) << std::endl;
	std::cout << "x <= y : " << (x <= y) << std::endl;
	std::cout << "x == y : " << (x == y) << std::endl;
	std::cout << "x != y : " << (x != y) << std::endl;

	std::cout << "--x = " << --x << std::endl;
	std::cout << "x-- = " << x-- << std::endl;
	std::cout << "x   = " << x << std::endl;
	std::cout << "min(x, y) = " << Fixed::min( x, y ) << std::endl;

	return 0;
}
