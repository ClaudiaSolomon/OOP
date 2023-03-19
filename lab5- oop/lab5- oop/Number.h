#pragma once
#include<iostream>
#include<string>
using namespace std;
class Number
{
private:
	int base;
    char* value;

public:
	Number(const char* value, int base); 
	Number(int val);
	~Number();
	//copy&move constructors
	Number(const Number& objToCopyFrom);
	//Number( Number&& objToMoveFrom) noexcept;

	//operators
	friend Number operator+(const Number& n1, const Number& n2);
	friend Number operator-(const Number& n1, const Number& n2);
	bool operator>(const Number& n)
	{
		Number N = n;
		N.SwitchBase(this->base);
		if (this->value > N.value)
		{
			return true;
		}
		else return false;
	}
	bool operator>=(const Number& n)
	{
		Number N = n;
		N.SwitchBase(this->base);
		if (this->value >= N.value)
		{
			return true;
		}
		else return false;
	}
	bool operator<(const Number& n)
	{
		Number N = n;
		N.SwitchBase(this->base);
		if (this->value < N.value)
		{
			return true;
		}
		else return false;
	}
	bool operator<=(const Number& n)
	{
		Number N = n;
		N.SwitchBase(this->base);
		if (this->value <= N.value)
		{
			return true;
		}
		else return false;
	}
	bool operator==(const Number& n)
	{
		Number N = n;
		N.SwitchBase(this->base);
		if (this->value == N.value)
		{
			return true;
		}
		else return false;
	}
	char operator[](int index)
	{
		return this->value[index];
	}
	Number& operator=(int val)
	{ 
		char* n = (char*)malloc(100);
		_itoa(val, n, this->base);
		this->value =n;
		return (*this);
	}
	Number operator+=(const Number& n1)
	{
		Number& N = (*this);
		N = N + n1;
		return N;
	}
	Number& operator=(const char* val)
	{
		this->value = (char*)val;
		return (*this);
	}
	Number& operator=(const Number& n)
	{
		this->value = n.value;
		this->base = n.base;
		return (*this);
	}
	Number operator--(int val)
	{
		Number Temp = (*this);
		char* s = (char*)malloc(100);;
		for (int i = 0;i < strlen(value);i++)
		{
			s[i] = value[i];
		}
		s[strlen(value) - 1] = '\0';
		value = s;
		return Temp;
	}
	Number& operator--()
	{
		char* s=(char*)malloc(100);;
		for (int i = 1;i < strlen(value);i++)
		{
			s[i - 1] = value[i];
		}
		s[strlen(value) - 1] = '\0';
		value = s;
		return (*this);
	}

	//methods
	void SwitchBase(int newBase);
	void Print();
	int  GetDigitsCount(); // returns the number of digits for the current number
	int  GetBase(); // returns the current base
	const char* GetValue();
};

