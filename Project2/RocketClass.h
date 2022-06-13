//USMAN ARSHAD
//BSEF19M038
#pragma once
class RocketClass
{
	//DATA MEMBERS:
private:
	int xloc;
	int yloc;
public:
	//FUNCTIONS:
	RocketClass();
	void draw(int, int, int);
	int  move(int, int, int);
	int fire(int, int);
};

