#include "Circuit.h"
#include<iostream>
#include<vector>
using namespace std;
void Circuit::SetLength(int length)
{
	this->length = length;
}
void Circuit::SetWeather(Weather weather)
{
	this->weather = weather;
}
void Circuit::AddCar(Volvo* c)
{
	c->SetFuelCapacity();
	c->SetFuelConsumption();
	c->PutAverageSpeed(this->weather);
	this->listOfCars.push_back(c);
}
void Circuit::AddCar(BMW* c)
{
	c->SetFuelCapacity();
	c->SetFuelConsumption();
	c->PutAverageSpeed(this->weather);
	this->listOfCars.push_back(c);
}
void Circuit::AddCar(Fiat* c)
{
	c->SetFuelCapacity();
	c->SetFuelConsumption();
	c->PutAverageSpeed(this->weather);
	this->listOfCars.push_back(c);
}
void Circuit::AddCar(RangeRover* c)
{
	c->SetFuelCapacity();
	c->SetFuelConsumption();
	c->PutAverageSpeed(this->weather);
	this->listOfCars.push_back(c);
}
void Circuit::AddCar(Seat* c)
{
	c->SetFuelCapacity();
	c->SetFuelConsumption();
	c->PutAverageSpeed(this->weather);
	this->listOfCars.push_back(c);
}
void Circuit::Race()
{
	for (Car* c: listOfCars)
	{
		if ((c->GetFuelConsumption() * this->length) / 100 > c->GetFuelCapacity())
		{
			this->noFinish.push_back(c);
		}
		else
		{
			float time = (this->length * 1) / c->GetAvgSpeed();
			this->topCar.push_back(c);
			this->topTime.push_back(time);
		}
	}
}
void Circuit::ShowWhoDidNotFinish()
{
	cout << "Cars that didn't finish: " << endl;
	for (Car* c : this->noFinish)
	{
		cout <<"Car with id: "<< c->GetId() << endl;
	}
}
void Circuit::ShowFinalRanks()
{
	float aux;
	Car* c;
	cout << "Top: " << endl;
	for (int i = 0;i < this->topTime.size();i++)
	{
		for (int j = 0;j < this->topTime.size();j++)
		{
			if (this->topTime.at(i) > this->topTime.at(j))
			{
				aux = this->topTime.at(i);
				this->topTime.at(i) = this->topTime.at(j);
				this->topTime.at(j) = aux;

				c = this->topCar.at(i);
				this->topCar.at(i) = this->topCar.at(j);
				this->topCar.at(j) = c;

			}
		}
	}

	for (int i = 0;i < this->topTime.size();i++)
	{
		cout << i + 1 << ". Car with id: " << this->topCar.at(i)->GetId() << ' ' << "time: " << this->topTime.at(i)<<" h" << endl;
	}
	
}