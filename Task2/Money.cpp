#include <iostream>
#include "Money.h"

Money::Money() : rouble(0), kopek(0)
{}

Money::Money(int rub, int kop) : rouble(rub), kopek(kop)
{}

std::istream& operator >> (std::istream& input, Money& m)
{
    input >> m.rouble;
    input >> m.kopek;
    return input;
}

std::ostream& operator << (std::ostream& output, const Money& m)
{
    output << m.rouble << " " << m.kopek;
    output << std::endl;
    return output;
}

Money operator+(const Money& left_money, const Money& right_money)
{
    Money tmp;
    tmp.rouble = left_money.rouble + right_money.rouble;
    tmp.kopek = left_money.kopek + right_money.kopek;
    if (tmp.kopek > 100)
    {
        tmp.rouble++;
        tmp.kopek -= 100;
    }
    return tmp;
}

Money operator-(const Money& left_money, const Money& right_money)
{
    Money tmp;
    if (left_money.rouble > right_money.rouble)
    {
        tmp.rouble = left_money.rouble - right_money.rouble;
        if (left_money.kopek >= right_money.kopek)
        {
            tmp.kopek = left_money.kopek - right_money.kopek;
        }
        else
        {
            tmp.rouble--;
            tmp.kopek = 100 + left_money.kopek - right_money.kopek;
        }
    }
    else if (left_money.rouble < right_money.rouble)
    {
        tmp.rouble = right_money.rouble - left_money.rouble;
        if (left_money.kopek >= right_money.kopek)
        {
            tmp.kopek = left_money.kopek - right_money.kopek;
        }
        else
        {
            tmp.rouble--;
            tmp.kopek = 100 + left_money.kopek - right_money.kopek;
        }
    }
    else
    {
        tmp.rouble = 0;
        if (left_money.kopek > right_money.kopek)
        {
            tmp.kopek = left_money.kopek - right_money.kopek;
        }
        else
            tmp.kopek = right_money.kopek - left_money.kopek;
    }
    return tmp;
}

float operator/(const Money& left_money, const Money& right_money)
{
    float tmp1 = float(left_money.rouble) + left_money.kopek / 100;
    float tmp2 = float(right_money.rouble) + right_money.kopek / 100;

    return tmp1 / tmp2;
}