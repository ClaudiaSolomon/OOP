#pragma once
#include"Weather.h"
class Car
{
protected:
	float fuelCapacity;
	float fuelConsumption;
	int id;
	Weather weather;
	float avgSpeed;
	virtual void PutAverageSpeed(Weather weather)=0;
	virtual void SetFuelCapacity()=0;
	virtual void SetFuelConsumption()=0;
public:
	virtual float GetFuelCapacity()=0;
	virtual float GetFuelConsumption()=0;
	virtual float GetAvgSpeed()=0;
	virtual int GetId()=0;
};