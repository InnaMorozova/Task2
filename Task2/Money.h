#pragma once
#include "Pair.h"

/**
* \brief �����, ����������� �������� �������
*/
class Money : public Pair
{
public:
    /**
    * \brief �����
    */
    int rouble;
    /**
    * \brief �������
    */
    int kopek;
public:
    /**
    * \brief �����������
    */
    Money();
    /**
    * \brief ����������� �������������������
    */
    Money(int rub, int kop);
    /**
    * \brief �������� �����
    */
    friend std::istream& operator >> (std::istream& input, const Money& m);
    /**
    * \brief �������� ������
    */
    friend std::ostream& operator << (std::ostream& output, const Money& m);
    /**
    * \brief �������� ��������
    */
    friend Money operator+(const Money& left_money, const Money& right_money);
    /**
    * \brief �������� ���������
    */
    friend Money operator-(const Money& left_money, const Money& right_money);
    /**
    * \brief �������� �������
    */
    friend float operator/(const Money& left_money, const Money& right_money);
};

