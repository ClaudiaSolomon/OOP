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
	int j,key;
	for (int i = 1;i < this->vect.size();i++)
	{
		key = this->vect.at(i);
		j = i - 1;
		while(j>=0 && this->vect.at(j)<key)
		{
			this->vect.at(j + 1) = this->vect.at(j);
			j--;
		}
		this->vect.at(j+1) = key;
	}
}
void Sort::BubbleSort(bool ascendent)
{
	int aux;
	for (int i = 0;i < this->vect.size()-1;i++)
	{
		for (int j = 0;j < this->vect.size()-i-1;j++)
		{
			if (this->vect.at(j) < this->vect.at(j+1))
			{
				aux = this->vect.at(j);
				this->vect.at(j) = this->vect.at(j+1);
				this->vect.at(j+1) = aux;
			}
		}
	}
}
int k;
void poz(int li, int ls, int& k, vector<int> a)
{
	int i = li, j = ls, c, i1 = 0, j1 = -1;
	while (i < j)
	{
		if (a[i] > a[j])
		{
			c = a[j];
			a[j] = a[i];
			a[i] = c;
			c = i1;
			i1 = -j1;
			j1 = -c;
		}
		i = i + i1;
		j = j + j1;
	}
	k = i;
}
void quick(int li, int ls)
{
	if (li < ls)
	{
		poz(li, ls, k, this->vect);
		quick(li, k - 1);
		quick(k + 1, ls);
	}
}
void Sort::QuickSort(bool ascendent)
{
	quick(1, this->vect.size());
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