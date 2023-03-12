#pragma once
#include <vector>
#include<initializer_list>
using namespace std;
class Sort
{
private:
    vector<int> vect;
public:
    Sort(int min, int max, int count);
    Sort(initializer_list<int> v) :vect(v) {}
    Sort(vector<int> v, int number);
    Sort(int count, ...);
    Sort(char s[100]);
    void InsertSort(bool ascendent = false);
    void QuickSort(bool ascendent = false);
    void BubbleSort(bool ascendent = false);
    void Print();
    int  GetElementsCount();
    int  GetElementFromIndex(int index);
    friend void quick(int li, int ls);

};
