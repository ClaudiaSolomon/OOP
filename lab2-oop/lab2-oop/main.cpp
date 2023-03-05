#include "NumberList.h"
#include "Student.h"
#include"global.h"
#include<iostream>
using namespace std;
int main()
{
	NumberList nrlist;
	nrlist.Init();
	nrlist.Add(3);
	nrlist.Add(8);
	nrlist.Add(1);
	nrlist.Print();
	nrlist.Sort();
	nrlist.Print();

	Student student;
	student.SetNume("claudia");
	cout<<student.GetNume() << endl;
	student.SetGradeH(5.8);
	cout << student.GetGradeH() << endl;;
	student.SetGradeM(10);
	cout << student.GetGradeM() << endl;
	student.SetGradeE(7);
	cout << student.GetGradeE() << endl;
	cout << student.Average(student.GetGradeE(), student.GetGradeM(), student.GetGradeH()) << endl;

	Student student2;
	student2.SetNume("claudiu");
	student2.SetGradeH(6.7);
	student2.SetGradeE(7);
	student2.SetGradeM(3.6);
	cout << CompareGradeE(student, student2)<<endl;
	cout << CompareGradeM(student, student2) << endl;
	cout << CompareGradeH(student, student2) << endl;
	cout << CompareName(student, student2) << endl;
	cout << CompareAverage(student, student2) << endl;

}