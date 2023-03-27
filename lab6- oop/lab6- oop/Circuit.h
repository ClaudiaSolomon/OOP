#pragma once
#include"Weather.h"
#include"Car.h"
#include<vector>
#include "Volvo.h"
#include "BMW.h"
#include "Fiat.h"
#include "RangeRover.h"
#include "Seat.h"
#include<map>
using namespace std;
class Circuit
{
private:
	int length;
	Weather weather;
	vector<Car*> listOfCars;
	vector<Car*> noFinish;
	vector<Car*> topCar;
	vector<float> topTime;
public:
	void SetLength(int length);
	void SetWeather(Weather weather);
	void AddCar(Volvo* c);
	void AddCar(BMW* c);
	void AddCar(Fiat* c);
	void AddCar(RangeRover* c);
	void AddCar(Seat* c);
	void Race();
	void ShowFinalRanks();
	void ShowWhoDidNotFinish();
};

