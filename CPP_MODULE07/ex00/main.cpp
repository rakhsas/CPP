#include "iostream"

class youness
{
	public:
		int a;
		int b;
		char c;
};

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
	return (r1.a < r2.a) ? r1 : r2;
}
int main( void ) {
	youness ff;
	ff.a = 2002;
	ff.b = 2003;
	ff.c = 'A';
	youness kk;
	kk.a = 1;
	kk.b = 2;
	kk.c = 'Z';
	::swap<>(ff, kk);
	std::cout << "ff :" << ff.a << " " << ff.b << " " << ff.c << std::endl;
	std::cout << "kk :"<< kk.a << " " << kk.b << " " << kk.c << std::endl;
	youness test = ::min(ff, kk);
	std::cout << "min( ff, kk ) = " << test.a << " " << test.b << " " << test.c << std::endl;
	// int a = 2;
	// int b = 3;
	// // std::cout << "ff = " << ff << ", kk = " << kk << std::endl;
	// // std::cout << "max( ff, kk ) = " << ::max( ff, kk ) << std::endl;
	// ::swap( a, b );
	// std::cout << "a = " << a << ", b = " << b << std::endl;
	// std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	// std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	// std::string c = "chaine0";
	// std::string d = "chaine2";
	// ::swap(c, d);
	// std::cout << "c = " << c << ", d = " << d << std::endl;
	// std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	// std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return 0;
}
