#include "Fundcalc.h"



Fundcalc::Fundcalc():m_number1(0),m_number2(0)
{
}


Fundcalc::~Fundcalc()
{
}

void Fundcalc::setNumber1(double number)
{
	m_number1 = number;
}

void Fundcalc::setNumber2(double number)
{
	m_number2 = number;
}

double Fundcalc::getNumber1()
{
	return m_number1;
}

double Fundcalc::getNumber2()
{
	return m_number2;
}

double Fundcalc::add()
{
	return m_number1+m_number2;
}

double Fundcalc::sub()
{
	return m_number1-m_number2;
}
