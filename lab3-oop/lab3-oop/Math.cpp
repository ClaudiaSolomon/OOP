#include "Math.h"
#include "Math.h"
#include<iostream>
#include<cstring>
#include <cstdarg>
int Math::Add(int x, int y)
{
	return x + y;
}
int Math::Add(int x, int y,int z)
{
	return x + y + z;
}
int Math::Add(double x, double y)
{
	return x + y;
}
int Math::Add(double x, double y,double z)
{
	return x + y + z;
}
int Math::Mul(int x, int y)
{
	return x * y;
}
int Math::Mul(int x, int y, int z)
{
	return x * y * z;
}
int Math::Mul(double x, double y)
{
	return x * y;
}
int Math::Mul(double x, double y, double z)
{
	return x * y * z;
}
char* Math::Add(const char* s1, const char* s2)
{
	if (s1 == nullptr || s2 == nullptr) return nullptr;
	else
	{
		char* s =new char[256]{ "" };
		strcpy(s, s1);
		strcat(s, s2);
		return s;
	}
}
int Math::Add(int count, ...)
{
	int sum = 0;
	va_list ap;
	int i;
	va_start(ap, count);
	for (i = 0; i < count; i++) {
		sum += va_arg(ap, int);
	}
	va_end(ap);

	return sum;
}