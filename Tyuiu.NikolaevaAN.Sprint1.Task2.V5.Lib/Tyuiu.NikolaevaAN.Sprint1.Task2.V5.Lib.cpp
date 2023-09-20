// Tyuiu.NikolaevaAN.Sprint1.Task2.V5.Lib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "../../Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"

// TODO: This is an example of a library function
class ISprint1Task2V5
{
public:
	virtual int LogicLong(int c)
	{
		int c1 = c / 100;
		int c2 = (c / 10) % 10;
		int c3 = c % 10;
		return c1 * c2 * c3;
	}
};
