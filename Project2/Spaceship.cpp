//BSEF19M038
//USMAN ARSHAD
//INCLUDING LIBRARIES AND HEADER FILES:
#include "Spaceship.h"
#include<iostream>
#include<conio.h>
#include<Windows.h>
#include"Fireball.h"
using namespace std;
//SET CURSOR FUNCTION:
void set_cursor3(int x, int y)
{
	HANDLE handle;
	COORD coordinates;
	handle = GetStdHandle(STD_OUTPUT_HANDLE);
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(handle, coordinates);
}
//FIRE FUNCTION OF SPACESHIP:
void Spaceship::fire(int x, int y, int a, int b)
{
	static int g = 0;
	//OBJECT ARRAY:
	Fireball f1[1000];
	set_cursor3(a, b);
	//FIRE:
	if (g < 1000)
		f1[g].draw(2);
}
