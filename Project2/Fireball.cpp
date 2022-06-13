//BSEF19M038
//USMAN ARSHAD
//INCLUDING HEADER FILES AND LIBRARIES:
#include "Fireball.h"
#include<windows.h>
#include<iostream>
using namespace std;
//SET_CURSOR FUNCTION:
void set_cursor6(int x, int y)
{
	HANDLE handle;
	COORD coordinates;
	handle = GetStdHandle(STD_OUTPUT_HANDLE);
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(handle, coordinates);
}
//DRAWING FIRE BALL:
void Fireball::draw(int a)
{
	if (a == 1)
	{
		char ch = '*';
		cout << " " << ch << " ";
	}
	else
	{
		char e = '*';
		for (int i = 0; i < 5; i++)
		{
			cout << " ";
		}
		cout << " " << " " << e;
	}
}
//FIRE FUNCTION FOR MOVING OF FIREBALL
void Fireball::fire1(int a, int b, int c)
{
	set_cursor6(a, b);
	draw(c);
}
//CHECK IF ROCKET HITS BY A SPACESHIP FIRE BALL:
int Fireball::compare(int a, int b, int c, int d)
{
	static int life = 2;
	static int counter = 0;
	if (counter % 2 == 0)
	{
		if ((a == 8 || a == 7 || a == 6 || a == 5 || a == 4) && b == d)
		{
			life--;
		}
		if ((a == 18 || a == 17 || a == 16 || a == 15 || a == 14) && b == d)
		{
			life--;
		}
		if ((a == 28 || a == 27 || a == 26 || a == 25 || a == 24) && b == d)
		{
			life--;
		}
		if ((a == 38 || a == 37 || a == 36 || a == 35 || a == 34) && b == d)
		{
			life--;
		}
		if ((a == 48 || a == 47 || a == 46 || a == 45 || a == 44) && b == d)
		{
			life--;
		}
	}
	//OUTPUTTING LIFE:
	counter++;
	set_cursor6(63, 60);
	cout << "LIVES REMAINING:" << life + 1;
	//IF 0 CHANCES LEFT RETURN 9:
	if (life == -1)
	{
		life = 2;
		return 9;
	}
	else
	{
		return 0;
	}
}

