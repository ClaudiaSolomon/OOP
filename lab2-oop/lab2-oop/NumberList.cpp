#include "NumberList.h"
#include<iostream>
using namespace std;
void NumberList::Init()
{
	this->count = 0;
}
bool NumberList::Add(int x)
{
	if (count >= 10) return false;
	else
	{
		this->numbers[count] = x;
		count++;
		return true;
	}
}
void NumberList::Print()
{
	for (int i = 0;i <this-> count;i++)
	{
		cout << this->numbers[i] << " ";
	}
	cout << endl;
}
void NumberList::Sort()
{
	int temp;
	for (int i = 0;i < this->count;i++)
	{
		for (int j = 0;j < this->count;j++)
		{
			if (this->numbers[i] < this->numbers[j])
			{
				temp = this->numbers[i];
				this->numbers[i] = this->numbers[j];
				this->numbers[j] = temp;

			}
		}
	}
}