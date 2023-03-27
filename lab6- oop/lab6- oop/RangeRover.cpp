#include "RangeRover.h"
void RangeRover::SetFuelCapacity()
{
	this->fuelCapacity = 12.9;
}
void RangeRover::SetFuelConsumption()
{
	this->fuelConsumption = 5;
}
void RangeRover::PutAverageSpeed(Weather weather)
{
	switch (weather)
	{
	case Rain:this->avgSpeed = 110; break;
	case Snow:this->avgSpeed = 80; break;
	case Sun: this->avgSpeed = 120;  break;
	}
}
float RangeRover::GetFuelCapacity()
{
	return this->fuelCapacity;
}
float RangeRover::GetFuelConsumption()
{
	return this->fuelConsumption;
}
float RangeRover::GetAvgSpeed()
{
	return this->avgSpeed;
}
int RangeRover::GetId()
{
	return this->id;
}