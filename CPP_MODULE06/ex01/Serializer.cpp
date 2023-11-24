#include "Serializer.hpp"

uintptr_t   Serializer::serialize( Data *t )
{
    return reinterpret_cast<uintptr_t>(t);
}

Data *Serializer::deserialize( uintptr_t t )
{
    return reinterpret_cast<Data *>(t);
}
int main()
{
    Data *t = new Data();
    t->a = 9;
    std::cout << Serializer::deserialize(Serializer::serialize(t))->a << std::endl;
}