#include "Canvas.h"
#include<iostream>
using namespace std;
Canvas::Canvas(int width, int height)
{
	this->width = width;
	this->height = height;
	//initial matricea are numai simbolul .
	for (int i = 0;i < this->height;i++)
	{
		for (int j = 0;j < this->width;j++)
		{
			this->canvasMatrix[i][j] = ' ';
		}
	}
}
void Canvas::DrawCircle(int x, int y, int ray, char ch)
{
	//up
	this->canvasMatrix[x - ray-1][y - ray] = ch;
	this->canvasMatrix[x - ray-1][y] = ch;
	this->canvasMatrix[x - ray - 1][y + ray ] = ch;
	//down
	this->canvasMatrix[x + ray+1][y - ray] = ch;
	this->canvasMatrix[x + ray+1][y] = ch;
	this->canvasMatrix[x + ray+1][y + ray] = ch;
	//left&right
	for (int i = x - ray ;i <= x + ray;i++)
	{
		this->canvasMatrix[i][y - ray-1] = ch;
		this->canvasMatrix[i][y + ray+1] = ch;
	}
}
void Canvas::FillCircle(int x, int y, int ray, char ch)
{
	for (int i = x-ray;i <= x+ray;i++)
	{
		for (int j = y-ray;j <=y+ray;j++)
		{
			this->canvasMatrix[i][j] = ch;
		}
	}
}
void Canvas::DrawRect(int left, int top, int right, int bottom, char ch)
{
	for (int i = top;i <= bottom;i++)
	{
			this->canvasMatrix[i][left] = ch;
			this->canvasMatrix[i][right] = ch;
	}
	for (int j = left;j<=right;j++)
	{
		this->canvasMatrix[top][j] = ch;
		this->canvasMatrix[bottom][j] = ch;
	}


}
void Canvas::FillRect(int left, int top, int right, int bottom, char ch)
{
	for (int i = top+1;i <=bottom-1;i++)
	{
		for (int j = left+1;j <= right-1;j++)
		{
			this->canvasMatrix[i][j] = ch;
		}
	}
}
void Canvas::DrawLine(int x1, int y1, int x2, int y2, char ch)
{
	int dx = x2 - x1;
	int dy = y2 - y1;
	int yi = 1;
	if (dy < 0)
	{
		yi = -1;
		dy = -dy;
	}
	int D = 2 * dy - dx;
	int y = y1;
	for (int x = x1;x <= x2;x++)
	{
		this->canvasMatrix[x][y] = ch;
		if (D > 0)
		{
			y = y + yi;
			D = D + (2 * (dy - dx));
		}
		else
			D = D + 2 * dy;
    }
}
void Canvas::SetPoint(int x, int y, char ch)
{
	this->canvasMatrix[x][y] = ch;
}
void Canvas::Print()
{
	for (int i = 0;i < this->height;i++)
	{
		for (int j = 0;j < this->width;j++)
		{
			cout << this->canvasMatrix[i][j] << " ";
		}
		cout << endl;
	}
}
void Canvas::Clear()
{
	for (int i = 0;i < this->height;i++)
	{
		for (int j = 0;j < this->width;j++)
		{
			this->canvasMatrix[i][j] = ' ';
		}
	}
}