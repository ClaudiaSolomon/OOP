#include<iostream>
#include "Circuit.h"
using namespace std;
int main()

{
	Circuit c;
	c.SetLength(100);
	c.SetWeather(Weather::Rain);
	c.AddCar(new Volvo(1));
	c.AddCar(new BMW(2));
	c.AddCar(new Seat(3));
	c.AddCar(new Fiat(4));
	c.AddCar(new RangeRover(5));

	c.Race();
	c.ShowFinalRanks(); // it will print the time each car needed to finish the circuit sorted from the fastest car to the   slowest.
	c.ShowWhoDidNotFinish(); // it is possible that some cars don't have enough fuel to finish the circuit

	return 0;

}