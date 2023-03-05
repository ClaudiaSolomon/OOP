#include "Student.h"
#include<cstring>
void Student::SetNume(const char nume[20])
{
	strcpy_s(this->nume,nume);
}
char* Student::GetNume()
{
	return this->nume;
}
void Student::SetGradeM(float gradeM)
{
	this->gradeM = gradeM;
}
float Student::GetGradeM()
{
	return this->gradeM;
}
void Student::SetGradeE(float gradeE)
{
	this->gradeE = gradeE;
}
float Student::GetGradeE()
{
	return this->gradeE;
}
void Student::SetGradeH(float gradeH)
{
	this->gradeH = gradeH;
}
float Student::GetGradeH()
{
	return this->gradeH;
}
float Student::Average(float gradeM, float  gradeE, float gradeH)
{
	return (gradeE + gradeH + gradeM) / 3.;
}
