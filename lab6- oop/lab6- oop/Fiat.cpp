#include "Fiat.h"
void Fiat::SetFuelCapacity()
{
	this->fuelCapacity = 75;
}
void Fiat::SetFuelConsumption()
{
	this->fuelConsumption = 7.0;
}
void Fiat::PutAverageSpeed(Weather weather)
{
	switch (weather)
	{
	case Rain:this->avgSpeed = 75; break;
	case Snow:this->avgSpeed = 50; break;
	case Sun: this->avgSpeed = 100;  break;
	}
}
float Fiat::GetFuelCapacity()
{
	return this->fuelCapacity;
}
float Fiat::GetFuelConsumption()
{
	return this->fuelConsumption;
}
float Fiat::GetAvgSpeed()
{
	return this->avgSpeed;
}
int Fiat::GetId()
{
	return this->id;
}