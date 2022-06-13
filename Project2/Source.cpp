//BSEF19M038
//USMAN ARSHAD
//INCLUDING LIBRARIES AND CLASSES HEADERS:
#include<iostream>
#include"RocketClass.h"
#include<conio.h>
#include<Windows.h>
#include"Martianship.h"
#include"Starship.h"
using namespace std;
//SETCURSOR FUNCTION:
void set_cursor5(int x, int y)
{
	HANDLE handle;
	COORD coordinates;
	handle = GetStdHandle(STD_OUTPUT_HANDLE);
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(handle, coordinates);
}
//MAIN FUNCTION:
int main()
{
	//VARIABLES REQUIRED:
	static int x;
	static int b;
	static int c;
	static int d;
	static int e;
	int a;
	int w;
	int X_location = 2;
	int y_location = 2;
	int y_location1 = 2;
	int counter = 0;
	char char1;
	static int score = 0;
	static int counter1 = 0;
	static int counter2 = 0;
	static int counter3 = 0;
	static int counter4 = 0;
	static int counter5 = 0;
	//STARTING PAGE:
	cout << "INSTRUCTIONS FOR GAME:" << endl;
	cout << "1)" << "USE W,A,S,D TO MOVE THE ROCKET." << endl;
	cout << "2)" << "YOU ONLY HAVE THREE LIVES." << endl;
	cout << "3)" << "YOU WILL WIN WHEN YOU DESTROY ALL SPACESHIPS." << endl;
	cout << "4)" << "PRESS S TO START:" << endl;
	char1 = _getch();
	//START OF THE GAME:
	//INITIALIZING:
	if (char1 == 's' || char1 == 'S')
	{
		//BOX OF GAME:
		for (int i = 0; i < 60; i++)
		{
			set_cursor5(i, 0);
			cout << "_";
		}
		for (int j = 0; j < 60; j++)
		{
			set_cursor5(0, j);
			cout << "|";
		}
		for (int i = 0; i < 60; i++)
		{
			set_cursor5(i, 60);
			cout << "_";
		}
		for (int j = 0; j < 60; j++)
		{
			set_cursor5(60, j);
			cout << "|";
		}
		//OBJECTS REQUIRED:
		RocketClass r;
		Martianship m;
		Starship s;
		//DRAWING MARTIAN AND STAR SHIPS:
		s.drawenemies(5, 0, 2, 2);
		s.drawenemies(5, 0, 12, 2);
		m.drawenemies(5, 0, 22, 2);
		s.drawenemies(5, 0, 32, 2);
		s.drawenemies(5, 0, 42, 2);
		set_cursor5(0, 0);
		r.draw(1, 30, 30);
		//MAIN LOOP FOR EXECUTING THR GAME UNTIL WON OR LOST:
		while (1)
		{
			w = r.move(counter, X_location, y_location1 + 7);
			//IF GAME OVER:
			if (w == 9)
			{
				break;
			}
			//UPDATED BOX AFTER CLEARING SCREEN:
			for (int i = 0; i < 60; i++)
			{
				set_cursor5(i, 0);
				cout << "_";
			}
			for (int j = 0; j < 60; j++)
			{
				set_cursor5(0, j);

				cout << "|";
			}
			for (int i = 0; i < 60; i++)
			{
				set_cursor5(i, 60);
				cout << "_";
			}
			for (int j = 0; j < 60; j++)
			{
				set_cursor5(60, j);

				cout << "|";
			}
			//LOGIC FOR DESTRUCTION OF SPACESHIPS:
			a = r.move(counter, X_location, y_location1 + 7);
			if (a == 1)
			{
				x = 1;
			}
			else if (a == 2)
			{
				b = 2;
			}
			else if (a == 3)
			{
				c = 3;
			}
			else if (a == 4)
			{
				d = 4;
			}
			else if (a == 5)
			{
				e = 5;
			}
			if (x != 1)
			{
				s.drawenemies(5, 0, X_location, y_location);
			}
			else if (x == 1)
			{
				cout << " ";
				counter1++;
				if (counter1 == 1)
				{
					score += 20;
				}
			}
			if (b != 2)
			{
				s.drawenemies(5, 0, X_location + 10, y_location);
			}
			else if (b == 2)
			{
				cout << " ";
				counter2++;
				if (counter2 == 1)
				{
					score += 20;
				}
			}
			if (c != 3)
			{
				m.drawenemies(5, 0, X_location + 20, y_location);
			}
			else if (c == 3)
			{
				cout << " ";
				counter3++;
				if (counter3 == 1)
				{
					score += 20;
				}
			}
			if (d != 4)
			{
				s.drawenemies(5, 0, X_location + 30, y_location);
			}
			else if (d == 4)
			{
				cout << " ";
				counter4++;
				if (counter4 == 1)
				{
					score += 20;
				}
			}
			if (e != 5)
			{
				s.drawenemies(5, 0, X_location + 40, y_location);
			}
			else if (e == 5)
			{
				cout << " ";
				counter5++;
				if (counter5 == 1)
				{
					score += 20;
				}
			}
			//OUTPUT WONGAME IF ALL SPACESHIPS ARE DESTROYED:
			if (x == 1 && b == 2 && c == 3 && d == 4 && e == 5)
			{
				w = 1;
				break;

			}
			//OUTPUTTING SCORE:
			set_cursor5(85, 60);
			cout << "SCORE IS:" << score;
			//FIRING OF SPACESHIPS:
			s.fire(5, 0, X_location, y_location1 + 7);
			s.fire(5, 0, X_location + 10, y_location1 + 7);
			m.fire(5, 0, X_location + 20, y_location1 + 7);
			s.fire(5, 0, X_location + 30, y_location1 + 7);
			s.fire(5, 0, X_location + 40, y_location1 + 7);
			counter += 1;
			//SPACESHIPS GOING DOWNWARD:
			if (y_location <= 12 && counter % 4 == 0)
			{
				y_location += 1;
			}
			//FIREBALL GOING DOWNWARD: 
			if (y_location1 <= 50)
			{
				y_location1 += 1;
			}
			else
			{
				y_location1 = y_location;
			}
		}
		//WHEN LOOP BREAKS:
		//OUTPUTTING GAMEOVER MESSAGE WHEN LIFE=0:
		if (w == 9)
		{
			if (system("CLS")) system("clear");
			for (int i = 0; i < 60; i++)
			{
				for (int j = 0; j < 60; j++)
				{
					cout << "GAMEOVER" << " ";
				}
			}
		}
		//OUTPUTTING YOU WON MESSAGE WHEN WE WIN:
		else if (w == 1)
		{
			if (system("CLS")) system("clear");
			for (int i = 0; i < 60; i++)
			{
				for (int j = 0; j < 60; j++)
				{
					cout << "YOUWON" << " ";
				}
			}
		}
	}

}