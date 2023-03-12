#include "Sort.h"
#include<iostream>
#include <vector>
using namespace std;
int main()
{
	char s[100] = "1,4,21,2";
	Sort sort (1, 10, 4);
	Sort sort2({ 1,5,2,3,7 });
	Sort sort3({ 1,2,3,4 }, 3);
	Sort sort4(4, 7, 8, 5, 3);
	Sort sort5(s);
	bool ascendent;
	//cout<<sort.GetElementsCount()<<endl;
	sort5.InsertSort(ascendent = false);
	//sort.BubbleSort(ascendent = false);
	sort5.Print();
}


