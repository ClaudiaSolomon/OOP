#pragma once
#include"Car.h"
class BMW: public Car
{
public:
	BMW(int id)
	{
		this->id = id;
	}
	void SetFuelCapacity();
	void SetFuelConsumption();
	void PutAverageSpeed(Weather weather);
	float GetFuelCapacity();
	float GetFuelConsumption();
	float GetAvgSpeed();
	int GetId();
};

