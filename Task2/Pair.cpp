#include <iostream>
#include "Pair.h"

Pair::Pair() : number1(0), number2(0)
{}

Pair::Pair(int num1, int num2) : number1(num1), number2(num2)
{}

std::istream& operator >> (std::istream& input, Pair& p)
{
    input >> p.number1;
    input >> p.number2;
    return input;
}

std::ostream& operator << (std::ostream& output, const Pair& p)
{
    output << p.number1 << " " << p.number2;
    output << std::endl;
    return output;
}

Pair operator+(const Pair& left_add, const Pair& right_add)
{
    Pair tmp;
    tmp.number1 = left_add.number1 + left_add.number2;
    tmp.number2 = right_add.number1 + right_add.number2;
    return tmp;
}

Pair operator * (int multiplier, Pair& p)
{
    Pair tmp;
    tmp.number1 = p.number1 * multiplier;
    tmp.number2 = p.number2 * multiplier;
    return tmp;
}

bool operator ==(Pair& left_pair, Pair& right_pair)
{
    return left_pair.number1 == right_pair.number1 && left_pair.number2 == right_pair.number2;
}