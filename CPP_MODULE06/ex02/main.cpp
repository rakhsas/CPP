#include "iostream"
#include "stdlib.h"
class Base
{
	public:
		virtual ~Base(){}
};

class A: public Base{};
class B: public Base{};
class C: public Base{};

Base * generate(void)
{
	if (std::rand() % 3 == 0)
		return new A;
	else if(std::rand() % 3 == 1)
		return new B;
	else
		return new C;
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A\n";
	else if (dynamic_cast<B*>(p))
		std::cout << "B\n";
	else if (dynamic_cast<C*>(p))
		std::cout << "C\n";
	else
		std::cout << "NOT FOUND\n";
}

void identify(Base& p)
{
	try
	{
		A &a = dynamic_cast<A&>(p);
		std::cout << "A\n";
		(void) a;
	}catch(const std::exception& e){}
	try
	{
		B &b = dynamic_cast<B&>(p);
		std::cout << "B\n";
		(void) b;
	}catch(const std::exception& e){}
	try
	{
		C &c = dynamic_cast<C&>(p);
		std::cout << "C\n";
		(void) c;
	}catch(const std::exception& e){}

}

int     main( void )
{
    Base*   a = generate();
    Base*   b = generate();

    std::cout << "* --------------- *" << std::endl;

    std::cout << "a* = "; identify( a );
    std::cout << "a& = "; identify( *a ); std::cout << std::endl;

    std::cout << "b* = "; identify( b );
    std::cout << "b& = "; identify( *b ); std::cout << std::endl;


    delete a;
    delete b;

    return (0);
}