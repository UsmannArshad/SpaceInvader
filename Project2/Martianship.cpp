//BSEF19M038
//USMAN ARSHAD
//INCLUDING LBRARIES AND HEADERFILES:
#include "Martianship.h"
#include<WindowS.h>
#include<iostream>
using namespace std;
//SETCURSOR FUNCTION:
void set_cursor1(int x, int y)
{
	HANDLE handle;
	COORD coordinates;
	handle = GetStdHandle(STD_OUTPUT_HANDLE);
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(handle, coordinates);
}
//DRAWING MARTIANSHIP:
void Martianship::drawenemies(int a, int b, int c, int d)
{
	set_cursor1(c, d);
	char e = '*';
	for (int i = 0; i < b; i++)
	{
		cout << endl;
	}
	for (int j = 0; j < a; j++)
	{
		cout << " ";
	}

	cout << e << " " << e << " " << e << " ";
	set_cursor1(c, d + 1);
	for (int j = 0; j < a; j++)
	{
		cout << " ";
	}
	cout << e << " " << e << " " << e << " ";
	set_cursor1(c, d + 2);

	for (int j = 0; j < a; j++)
	{
		cout << " ";
	}

	cout << " " << e << " " << e << " ";
	set_cursor1(c, d + 3);
	for (int j = 0; j < a; j++)
	{
		cout << " ";
	}
	cout << " " << e << " " << e << " ";
	set_cursor1(c, d + 4);

	for (int j = 0; j < a; j++)
	{
		cout << " ";
	}
	cout << " " << " " << e << " ";
}
