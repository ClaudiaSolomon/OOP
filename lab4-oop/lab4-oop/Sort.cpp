#include "Sort.h"
#include<iostream>
#include <vector>
#include <cstdarg>
#include<cstring>
using namespace std;
int Sort::GetElementFromIndex(int index)
{
	return this->vect.at(index);
}
int  Sort::GetElementsCount()
{
	return this->vect.size();
}
void Sort::InsertSort(bool ascendent)
{
	if (ascendent == false)
	{
		int j, key;
		for (int i = 1;i < this->vect.size();i++)
		{
			key = this->vect.at(i);
			j = i - 1;
			while (j >= 0 && this->vect.at(j) < key)
			{
				this->vect.at(j + 1) = this->vect.at(j);
				j--;
			}
			this->vect.at(j + 1) = key;
		}
	}
	else
	{
		int j, key;
		for (int i = 1;i < this->vect.size();i++)
		{
			key = this->vect.at(i);
			j = i - 1;
			while (j >= 0 && this->vect.at(j) > key)
			{
				this->vect.at(j + 1) = this->vect.at(j);
				j--;
			}
			this->vect.at(j + 1) = key;
		}
	}
}
void Sort::BubbleSort(bool ascendent)
{
	if (ascendent == false)
	{
		int aux;
		for (int i = 0;i < this->vect.size() - 1;i++)
		{
			for (int j = 0;j < this->vect.size() - i - 1;j++)
			{
				if (this->vect.at(j) < this->vect.at(j + 1))
				{
					aux = this->vect.at(j);
					this->vect.at(j) = this->vect.at(j + 1);
					this->vect.at(j + 1) = aux;
				}
			}
		}
	}
	else
	{
		int aux;
		for (int i = 0;i < this->vect.size() - 1;i++)
		{
			for (int j = 0;j < this->vect.size() - i - 1;j++)
			{
				if (this->vect.at(j) > this->vect.at(j + 1))
				{
					aux = this->vect.at(j);
					this->vect.at(j) = this->vect.at(j + 1);
					this->vect.at(j + 1) = aux;
				}
			}
		}
	}
}
int Sort::partition( int li, int ls, int pivot,bool ascendent) {
	if (ascendent == true)
	{
		int PIndex = li;
		int aux;
		for (int i = li;i <= ls;i++)
		{
			if (this->vect.at(i) <= pivot) {
				aux = this->vect.at(PIndex);
				this->vect.at(PIndex) = this->vect.at(i);
				this->vect.at(i) = aux;
				PIndex++;
			}
		}
		PIndex--;
		return PIndex;
	}
	else
	{
		int PIndex = li;
		int aux;
		for (int i = li;i <= ls;i++)
		{
			if (this->vect.at(i) >= pivot) {
				aux = this->vect.at(PIndex);
				this->vect.at(PIndex) = this->vect.at(i);
				this->vect.at(i) = aux;
				PIndex++;
			}
		}
		PIndex--;
		return PIndex;
	}
}
void Sort::QuickSort(int li, int ls,bool ascendent)
{
	if (li < ls)
	{
		int pivot = this->vect.at(ls);
		int PIndex = partition( li, ls, pivot,ascendent=false);
		QuickSort(li, PIndex - 1,ascendent=false);
		QuickSort(PIndex + 1, ls, ascendent = false);
	}
}
void Sort::Print()
{
	for (int i = 0;i < this->vect.size();i++)
	{
		cout << this->vect.at(i) << ' ';
	}
}

//constructori
Sort::Sort(int min, int max, int count)
{
	int i = 0;
	srand(time(NULL));
	while (count > 0)
	{
		this->vect.push_back(min + (rand() % max));
		i++;
		count--;
	}
}
Sort::Sort(vector<int> v, int number)
{
	for (int i = 0;i < number;i++)
	{
		this->vect.push_back(v.at(i));
	}
}
Sort::Sort(int count, ...)
{
	va_list ap;
	va_start(ap, count);
	for (int i = 0;i < count;i++)
	{
		this->vect.push_back(va_arg(ap, int));
	}
}
Sort::Sort(char s[100])
{
	char* tok;
	tok = strtok(s, ",");
	while (tok)
	{
		this->vect.push_back(atoi(tok));
		tok = strtok(NULL, ",");
	}
}