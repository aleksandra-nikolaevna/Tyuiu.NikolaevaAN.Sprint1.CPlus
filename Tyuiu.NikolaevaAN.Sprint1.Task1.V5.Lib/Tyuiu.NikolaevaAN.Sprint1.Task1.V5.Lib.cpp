// Tyuiu.NikolaevaAN.Sprint1.Task1.V5.Lib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "../../Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"

// TODO: This is an example of a library function
class ISprint1Task1V5
{
public:
	virtual int Logic(int a)
	{
		int a1 = a / 100;
		int a2 = (a / 10) % 10;
		int a3 = a % 10;
		return a1 + a2 + a3;
	}
};