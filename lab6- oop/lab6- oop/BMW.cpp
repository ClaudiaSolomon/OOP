#include "BMW.h"
void BMW::SetFuelCapacity()
{
	this->fuelCapacity = 10;
}
void BMW::SetFuelConsumption()
{
	this->fuelConsumption = 11;
}
void BMW::PutAverageSpeed(Weather weather)
{
	switch (weather)
	{
	case Rain:this->avgSpeed = 100; break;
	case Snow:this->avgSpeed = 70; break;
	case Sun: this->avgSpeed = 130;  break;
	}
}
float BMW::GetFuelCapacity()
{
	return this->fuelCapacity;
}
float BMW::GetFuelConsumption()
{
	return this->fuelConsumption;
}
float BMW::GetAvgSpeed()
{
	return this->avgSpeed;
}
int BMW::GetId()
{
	return this->id;
}