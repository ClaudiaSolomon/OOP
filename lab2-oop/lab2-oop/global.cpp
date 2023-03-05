#include"Student.h"
#include"global.h"
bool CompareName(Student s1, Student s2)
{
	if (s1.GetNume() > s2.GetNume()) return 1;
	else
	{
		if (s1.GetNume() < s2.GetNume()) return -1;
		else return 0;
	}
}
bool CompareGradeM(Student s1, Student s2)
{
	if (s1.GetGradeM() > s2.GetGradeM()) return 1;
	else
	{
		if (s1.GetGradeM() < s2.GetGradeM()) return -1;
		else return 0;
	}
}
bool CompareGradeE(Student s1, Student s2)
{
	if (s1.GetGradeE() > s2.GetGradeE()) return 1;
	else
	{
		if (s1.GetGradeE() < s2.GetGradeE()) return -1;
		else return 0;
	}
}
bool CompareGradeH(Student s1, Student s2)
{
	if (s1.GetGradeH() > s2.GetGradeH()) return 1;
	else
	{
		if (s1.GetGradeH() < s2.GetGradeH()) return -1;
		else return 0;
	}
}
bool CompareAverage(Student s1, Student s2)
{
	if (s1.Average(s1.GetGradeH(), s1.GetGradeM(), s1.GetGradeE()) > s1.Average(s2.GetGradeH(), s2.GetGradeM(), s2.GetGradeE())) return 1;
	else
	{
		if (s1.Average(s1.GetGradeH(), s1.GetGradeM(), s1.GetGradeE()) < s1.Average(s2.GetGradeH(), s2.GetGradeM(), s2.GetGradeE())) return -1;
		else return 0;
	}
}