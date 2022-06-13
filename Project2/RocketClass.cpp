//BSEF19M038
//USMAN ARSHAD
//INCLUDING LIBRARIES AND HEADER FILES:
#include "RocketClass.h"
#include<iostream>
#include<conio.h>
#include<Windows.h>
#include"Fireball.h"
using namespace std;
RocketClass::RocketClass()
{
	xloc = 50;
	yloc = 50;
}
//DRAWING ROCKET:
void RocketClass::draw(int a, int c, int d)
{
	char e = '*';
	for (int i = 0; i < d; i++)
	{
		cout << endl;
	}
	for (int j = 0; j < c; j++)
	{
		cout << " ";
	}
	cout << " " << " " << e << " ";
	for (int i = d; i < d + 1; i++)
	{
		cout << endl;
	}
	for (int j = 0; j < c; j++)
	{
		cout << " ";
	}
	if (a == 1)
	{
		cout << " " << e << " " << e << " ";
	}
	else
	{
		cout << " " << e << " " << e << " " << endl;
		for (int j = 0; j < c; j++)
		{
			cout << " ";
		}
		cout << " " << e << " " << e << " ";
	}
	for (int i = d; i < d + 1; i++)
	{
		cout << endl;
	}
	for (int j = 0; j < c; j++)
	{
		cout << " ";
	}
	if (a == 1)
	{
		cout << e << " " << e << " " << e << " ";
	}
	else
	{
		cout << e << " " << e << " " << e << " " << endl;
		for (int j = 0; j < c; j++)
		{
			cout << " ";
		}

		cout << e << " " << e << " " << e << " " << endl;
	}

}
//SET_CURSOR FUNCTION:
void set_cursor(int x, int y)
{
	HANDLE handle;
	COORD coordinates;
	handle = GetStdHandle(STD_OUTPUT_HANDLE);
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(handle, coordinates);
}
//ROCKET FIRING:
int RocketClass::fire(int c, int d)
{
	static int g = 0;
	bool destruction = false;
	bool destruction1 = false;
	bool destruction2 = false;
	bool destruction3 = false;
	bool destruction4 = false;
	static int counter = 0;
	static int counter1 = 0;
	static int counter2 = 0;
	static int counter3 = 0;
	static int counter4 = 0;
	char e = '*';
	Fireball f[10000];
	if (g < 10000)
	{
		f[g].fire1(c, d, 1);
	}
	if (system("CLS")) system("clear");
	g++;
	//CHECK IF ROCKET IS DESTROYED OR NOT:
	if (c >= 7 && c <= 9)
	{
		counter++;
	}
	else if (c >= 17 && c <= 19)
	{
		counter1++;
	}
	else if (c >= 26 && c <= 30)
	{
		counter2++;
	}
	else if (c >= 37 && c <= 39)
	{
		counter3++;
	}
	else if (c >= 47 && c <= 49)
	{
		counter4++;
	}
	if (counter == 75)
	{
		destruction = true;
		counter = 0;
	}
	if (counter1 == 75)
	{
		destruction1 = true;
		counter1 = 0;
	}
	if (counter2 == 125)
	{
		destruction2 = true;
		counter2 = 0;
	}
	if (counter3 == 75)
	{
		destruction3 = true;
		counter3 = 0;
	}
	if (counter4 == 75)
	{
		destruction4 = true;
		counter4 = 0;

	}
	//ADD 20 TO SCORE EACH TIME SPACESHIP IS DESTROYED:
	if (destruction == true)
	{
		return 1;
	}
	if (destruction1 == true)
	{
		return 2;
	}
	if (destruction2 == true)
	{
		return 3;
	}
	if (destruction3 == true)
	{
		return 4;
	}
	if (destruction4 == true)
	{
		return 5;
	}
}
//MOVING OUR ROCKET:
int RocketClass::move(int c, int l, int m)
{
	Fireball f3;
	int z = 0;
	static int a = 0;
	int d = 0;
	static int b = 0;
	int counter1 = c;
	char ch;
	if (_kbhit())
	{
		//INPUTTING CHARACTER:
		ch = _getch();
		set_cursor(0, 0);
		//CHECK IF IT WILL GO UPWARD,DOWN,LEFT,OR RIGHT
		if (ch == 'w' || ch == 'W')
		{
			xloc;
			if (yloc >= 42)
				yloc = yloc - 1;
			if (system("CLS")) system("clear");
			//draw(1, xloc, yloc);
		}
		else if (ch == 'a' || ch == 'A')
		{
			if (xloc >= 1)
				xloc = xloc - 1;
			yloc;
			if (system("CLS")) system("clear");
			//draw(1, xloc, yloc);
		}
		else if (ch == 'd' || ch == 'D')
		{
			if (xloc <= 54)
				xloc = xloc + 1;
			yloc;
			if (system("CLS")) system("clear");


		}
		else if (ch == 's' || ch == 'S')
		{
			if (yloc <= 56)
				yloc = yloc + 1;
			xloc;
			if (system("CLS")) system("clear");
			//draw(1, xloc, yloc);

		}
		else
		{
			if (system("CLS")) system("clear");
			//draw(1, xloc, yloc);
		}
	}
	//UPDATE VALUE OF A AND B WHEN FIRE REACH AT TOP"
	if (counter1 % 25 == 0)
	{
		a = xloc + 2;
		b = yloc - 2;
	}
	//CALLING FIRE FUNCTION
	d = fire(a, b);
	b = b - 1;
	draw(1, xloc, yloc);
	//CALLING COMPARE FUNCTION TO CHECK IF LIFE=0:
	//IF LIFE=0 RETURN 9
	z = f3.compare(xloc, yloc, l, m);
	if (z == 9)
	{
		return z;
	}
	else
	{
		return d;
	}
}

