//USMAN ARSHAD
//BSEF19M038
//INCLUDING LIBRARIES  AND HEADER FILES:
#include"Starship.h"
#include<Windows.h>
#include<iostream>
using namespace std;
//SET_CURSOR:
void set_cursor2(int x, int y)
{
	HANDLE handle;
	COORD coordinates;
	handle = GetStdHandle(STD_OUTPUT_HANDLE);
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(handle, coordinates);
}
//DRAWING STARSHIP SPACESHIPS:
void Starship::drawenemies(int a, int b, int c, int d)
{
	set_cursor2(c, d);
	char e = '*';
	for (int j = 0; j < a; j++)
	{
		cout << " ";
	}
	cout << " " << e << " " << e << " ";
	set_cursor2(c, d + 1);
	for (int j = 0; j < a; j++)
	{
		cout << " ";
	}
	cout << " " << " " << e << " ";
}