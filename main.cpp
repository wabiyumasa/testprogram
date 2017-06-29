#pragma once
#include"Header.h"
#include"Fundcalc.h"
#include"NewCalc.h"

int main() 
{
	NewCalc n;
	n.setNumber1(10);
	n.setNumber2(2);
	cout << n.getNumber1() << "+" << n.getNumber2() << "=" << n.add() << endl;
	cout << n.getNumber1() << "-" << n.getNumber2() << "=" << n.sub() << endl;
	cout << n.getNumber1() << "*" << n.getNumber2() << "=" << n.mul() << endl;
	cout << n.getNumber1() << "/" << n.getNumber2() << "=" << n.div() << endl;

	cout << "commit test" << endl;

	return 0;

}