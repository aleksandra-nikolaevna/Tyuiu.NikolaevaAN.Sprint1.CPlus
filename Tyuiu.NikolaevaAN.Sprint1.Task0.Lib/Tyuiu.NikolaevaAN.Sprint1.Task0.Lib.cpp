// Tyuiu.NikolaevaAN.Sprint1.Task0.Lib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "../../Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"

// TODO: This is an example of a library function
class ISprint1Task0
{
public:
	virtual int Calculate(int a, int b, int c)
	{
		return (a + b + c) / 3;
	}
};
