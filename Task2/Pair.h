#pragma once
#include <iostream>

/**
* \brief Класс, описывающий пару чисел
*/
class Pair
{
public:
    /**
    * \brief Число №1
    */
    int number1;
    /**
    * \brief Число №2
    */
    int number2;
public:
    /**
    * \brief Конструктор
    */
    Pair();
    /**
    * \brief Конструктор параметризированный
    */
    Pair(int num1, int num2);
    /**
    * \brief Оператор ввода
    */
    friend std::istream& operator >> (std::istream& input, const Pair& p);
    /**
    * \brief Оператор вывода
    */
    friend std::ostream& operator << (std::ostream& output, const Pair& p);
    /**
    * \brief Оператор сложения
    */
    friend Pair operator+(const Pair& left_add, const Pair& right_add);
    /**
    * \brief Оператор умножения на число
    */
    friend Pair operator * (int multiplier, Pair& p);
    /**
    * \brief Оператор сравнивания
    */
    friend bool operator ==(Pair& left_pair, Pair& right_pair);

};

