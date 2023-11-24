#pragma once

#include "iostream"

typedef struct s_data
{
    int a;
} Data;

class Serializer
{
    private:
    public:
        Serializer();
        static  uintptr_t serialize(Data* ptr);
        static  Data* deserialize(uintptr_t raw);
};
