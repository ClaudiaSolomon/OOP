#pragma once
#include <vector>
#include<initializer_list>
using namespace std;
class Sort
{
private:
    vector<int> vect;
    int partition(int li, int ls, int pivot, bool ascendent = false);
public:
    Sort(int min, int max, int count);
    Sort(initializer_list<int> v) :vect(v) {}
    Sort(vector<int> v, int number);
    Sort(int count, ...);
    Sort(char s[100]);

    void InsertSort(bool ascendent = false);
    void QuickSort(int li, int ls,bool ascendent = false);
    void BubbleSort(bool ascendent = false);
    void Print();
    int  GetElementsCount();
    int  GetElementFromIndex(int index);
   
};
