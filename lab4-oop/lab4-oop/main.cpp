#include "Sort.h"
#include<iostream>
#include <vector>
using namespace std;
int main()
{
	char s[100] = "1,4,21,2";
	Sort sort1 (1, 10, 4);
	Sort sort2({ 1,5,2,3,7 });
	Sort sort3({ 1,2,3,4 }, 3);
	Sort sort4(4, 7, 8, 5, 3);
	Sort sort5(s);
	bool ascendent;
	//cout<<sort.GetElementsCount()<<endl;

	sort1.BubbleSort(ascendent = false);
	cout << "sort1:"<<' ';
	sort1.Print();
	cout << endl;

	sort2.InsertSort(ascendent = false);
	cout << "sort2:" << ' ';
	sort2.Print();
	cout << endl;

	sort3.BubbleSort(ascendent = false);
	cout << "sort3:" << ' ';
	sort3.Print();
	cout << endl;

	sort4.InsertSort(ascendent = false);
	cout << "sort4:" << ' ';
	sort4.Print();
	cout << endl;

	sort5.QuickSort(0,sort5.GetElementsCount()-1,ascendent = false);
	cout << "sort5:" << ' ';
	sort5.Print();
	cout << endl;
}


