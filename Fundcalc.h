#pragma once
class Fundcalc
{
public:
	Fundcalc();
	~Fundcalc();

protected:
	double m_number1;
	double m_number2;

public:
	void setNumber1(double number);
	void setNumber2(double number);
	double getNumber1();
	double getNumber2();
	double add();
	double sub();

};

