#include "Seat.h"
void Seat::SetFuelCapacity()
{
	this->fuelCapacity = 47;
}
void Seat::SetFuelConsumption()
{
	this->fuelConsumption = 4;
}
void Seat::PutAverageSpeed(Weather weather)
{
	switch (weather)
	{
	case Rain:this->avgSpeed = 80; break;
	case Snow:this->avgSpeed = 60; break;
	case Sun: this->avgSpeed = 100;  break;
	}
}
float Seat::GetFuelCapacity()
{
	return this->fuelCapacity;
}
float Seat::GetFuelConsumption()
{
	return this->fuelConsumption;
}
float Seat::GetAvgSpeed()
{
	return this->avgSpeed;
}
int Seat::GetId()
{
	return this->id;
}