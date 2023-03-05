#pragma once
class Student
{
private:
	char nume[20];
	double gradeE;
	double gradeH;
	double gradeM;
public:
	void SetNume(const char nume[20]);
	char* GetNume();
	void SetGradeM(float gradeM);
	float GetGradeM();
	void SetGradeE(float gradeE);
	float GetGradeE();
	void SetGradeH(float gradeH);
	float GetGradeH();
	float Average(float gradeM, float  gradeE, float gradeH);
};

