#include "iostream"

template <typename R>
void swap( R &r1, R &r2)
{
	R	r3 = r1;
	r1 = r2;
	r2 = r3;
}

template <typename R>
R max( R &r1, R &r2)
{
	return (r1 > r2) ? r1 : r2;
}

template <typename R>
R min( R &r1, R &r2)
{
	return (r1 < r2) ? r1 : r2;
}

int main( void ) {
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return 0;
}