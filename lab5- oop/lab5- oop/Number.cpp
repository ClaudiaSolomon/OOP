#include "Number.h"
#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;

Number::Number(const char* value, int base)
{
	this->base = base;
	this->value = (char*)value;
}
Number::Number(int val)
{
	char* n = (char*)malloc(100);
	_itoa(val, n, 10);
	this->value = n;
	this->base = 10;
}
Number::~Number()
{
	this->value = nullptr;
	this->base = 0;
}
Number::Number(const Number& objToCopyFrom)
{
	this->value = objToCopyFrom.value;
	this->base = objToCopyFrom.base;
}
/*Number::Number(Number&& objToMoveFrom) noexcept :value{objToMoveFrom.value}
{
		objToMoveFrom.value = nullptr;
}*/
int Number::GetBase()
{
	return this->base;
}
void Number::Print()
{
	cout << "number is: " << this->value << " and base is: " << this->base << endl;
}
int  Number::GetDigitsCount()
{
	int digits = 0;
	for (int i = 0;i < strlen(this->value);i++)
	{
		digits++;
	}
	return digits;
}
void Number::SwitchBase(int newBase)
{
	long numberDecimal = 0;
	int contor = 0,contor2=1;
	long numberInit;
	char* res= (char*)malloc(100);
	long nr=0;
	if (this->base <= 10&& this->base>=2)
	{
		numberInit = atoi(this->value);
		while (numberInit > 0)
		{
			numberDecimal += pow(this->base, contor) * (numberInit % 10);
			numberInit = numberInit / 10;
			contor++;
		}
	}
	if(this->base>10&&this->base<=16)
	{
		numberInit = strtol(this->value, NULL, this->base);
		numberDecimal = numberInit;
	}
	if (newBase != 10)
	{
		while (numberDecimal > 0)
		{
			nr += contor2 * (numberDecimal % newBase);
			contor2 *= 10;
			numberDecimal /= newBase;
		}
		if (res != 0)
		{
			_itoa(nr, res, 10);
		}
		this->value = res;
		this->base = newBase;
	}
	else
	{
		if (res != 0)
		{
			_itoa(numberDecimal, res, 10);
		}
		this->value = res;
		this->base = newBase;
	}
}
const char* Number::GetValue()
{
	return this->value;
}
//operatori
Number operator+(const Number& n1, const Number& n2) 
{
	Number N1 = n1;
	Number N2 = n2;
	char* newNr = (char*)malloc(100);
	int b,n1_base,n2_base;
	n1_base = N1.GetBase();
	n2_base = N2.GetBase();
	if (N1.GetBase() > N2.GetBase())
	{
		b = N1.GetBase();
	}
	else
	{
		b = N2.GetBase();
	}
	N2.SwitchBase(10);
	N1.SwitchBase(10);
	long x = atoi(N1.GetValue()) + atoi(N2.GetValue());
	if (newNr != 0)
	{
		_itoa(x, newNr, b);
	}
    Number n3(newNr, b);
	N1.SwitchBase(n1_base);
	N2.SwitchBase(n2_base);
	return n3;
}
Number operator-(const Number& n1, const Number& n2)
{
	Number N1 = n1;
	Number N2 = n2;
	char* newNr = (char*)malloc(100);
	int b, n1_base, n2_base;
	n1_base = N1.GetBase();
	n2_base = N2.GetBase();
	if (N1.GetBase() > N2.GetBase())
	{
		b = N1.GetBase();
	}
	else
	{
		b = N2.GetBase();
	}
	N2.SwitchBase(10);
	N1.SwitchBase(10);
	long x = atoi(N1.GetValue()) - atoi(N2.GetValue());
	if (newNr != 0)
	{
		_itoa(x, newNr, b);
	}
	Number n3(newNr, b);
	N1.SwitchBase(n1_base);
	N2.SwitchBase(n2_base);
	return n3;
}
