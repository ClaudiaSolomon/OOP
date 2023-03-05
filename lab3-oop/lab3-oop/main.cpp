#include "Canvas.h"
#include "Math.h"
#include<iostream>
using namespace std;
int main()
{
	//pb2
	/*Canvas canvas(11, 11);
	canvas.DrawCircle(2, 2, 1, '*');
	canvas.FillCircle(2, 2, 1, '#');
	canvas.DrawRect(5, 5, 9, 8, '&');
	canvas.SetPoint(6, 1, '$');
	canvas.FillRect(5, 5, 9, 8, '@');
	canvas.DrawLine(0, 6, 4, 7, '!');
	canvas.Print();
	*/
	Math math;
	cout << math.Add(3, 4)<<endl;
	cout << math.Mul(3, 4,6) << endl;
	cout << math.Add(3.7, 4.1) << endl;
	cout << math.Mul(3.4, 4.5, 7.8) << endl;
	cout << math.Add("ana ", "mere")<< endl;
	cout << math.Add(3, 4,5,6) << endl;
}