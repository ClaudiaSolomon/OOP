#include "Volvo.h"
void Volvo::SetFuelCapacity()
{
	this->fuelCapacity = 38;
}
void Volvo::SetFuelConsumption()
{
	this->fuelConsumption = 2.3;
}
void Volvo::PutAverageSpeed(Weather weather)
{
	switch (weather)
	{
	case Rain:this->avgSpeed = 90; break;
	case Snow:this->avgSpeed = 75; break;
	case Sun: this->avgSpeed = 125;  break;
	}
}
float Volvo::GetFuelCapacity()
{
	return this->fuelCapacity;
}
float Volvo::GetFuelConsumption()
{
	return this->fuelConsumption;
}
float Volvo::GetAvgSpeed()
{
	return this->avgSpeed;
}
int Volvo::GetId()
{
	return this->id;
}