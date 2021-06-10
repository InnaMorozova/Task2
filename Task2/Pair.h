#pragma once
#include <iostream>

/**
* \brief �����, ����������� ���� �����
*/
class Pair
{
public:
    /**
    * \brief ����� �1
    */
    int number1;
    /**
    * \brief ����� �2
    */
    int number2;
public:
    /**
    * \brief �����������
    */
    Pair();
    /**
    * \brief ����������� �������������������
    */
    Pair(int num1, int num2);
    /**
    * \brief �������� �����
    */
    friend std::istream& operator >> (std::istream& input, const Pair& p);
    /**
    * \brief �������� ������
    */
    friend std::ostream& operator << (std::ostream& output, const Pair& p);
    /**
    * \brief �������� ��������
    */
    friend Pair operator+(const Pair& left_add, const Pair& right_add);
    /**
    * \brief �������� ��������� �� �����
    */
    friend Pair operator * (int multiplier, Pair& p);
    /**
    * \brief �������� �����������
    */
    friend bool operator ==(Pair& left_pair, Pair& right_pair);

};

