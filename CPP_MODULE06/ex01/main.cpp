#include "iostream"
#include "string.h"
#include <stdint.h>
typedef struct s_data {
    int a;
	const	char *x;
} Data;

static	uintptr_t	serialize(Data* ptr)
{
	return(reinterpret_cast<uintptr_t>(ptr));
}

static Data*	deserialize( uintptr_t t )
{
    return reinterpret_cast<Data *>(t);
}
int main()
{
    Data *t = new Data;
    t->a = 9;
	t->x = "hello world";
	Data *c = deserialize(serialize(t));
	std::cout << c->x << "\n";
	std::cout << c->a << "\n";
}