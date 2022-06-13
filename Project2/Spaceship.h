//BSEF19M038
//USMAN ARSHAD
#pragma once
class Spaceship
{
protected:
	int x_loce;
	int y_loce;
public:
	//PURE VIRTUAL VOID FUNCTION:
	virtual void  drawenemies(int, int, int, int) = 0;
	//VIRTUAL FUCTION OF FIRE:
	virtual void  fire(int, int, int, int);
};