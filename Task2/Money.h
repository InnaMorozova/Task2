#pragma once
#include "Pair.h"

/**
* \brief Класс, описывающий денежные единицы
*/
class Money : public Pair
{
public:
    /**
    * \brief Рубли
    */
    int rouble;
    /**
    * \brief Копейки
    */
    int kopek;
public:
    /**
    * \brief Конструктор
    */
    Money();
    /**
    * \brief Конструктор параметризированный
    */
    Money(int rub, int kop);
    /**
    * \brief Оператор ввода
    */
    friend std::istream& operator >> (std::istream& input, const Money& m);
    /**
    * \brief Оператор вывода
    */
    friend std::ostream& operator << (std::ostream& output, const Money& m);
    /**
    * \brief Оператор сложения
    */
    friend Money operator+(const Money& left_money, const Money& right_money);
    /**
    * \brief Оператор вычитания
    */
    friend Money operator-(const Money& left_money, const Money& right_money);
    /**
    * \brief Оператор деления
    */
    friend float operator/(const Money& left_money, const Money& right_money);
};

