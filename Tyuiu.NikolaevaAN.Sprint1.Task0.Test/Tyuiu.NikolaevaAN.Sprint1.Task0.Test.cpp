#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.NikolaevaAN.Sprint1.Task0.Lib/Tyuiu.NikolaevaAN.Sprint1.Task0.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TyuiuNikolaevaANSprint1Task0Test
{
	TEST_CLASS(TyuiuNikolaevaANSprint1Task0Test)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			// Init
			ISprint1Task0* date = new ISprint1Task0();
			int a = 2;
			int b = 4;
			int c = 6;
			int s;

			// run
			s = date->Calculate(a, b, c);

			// Valid
			Assert::AreEqual(4, s);
		}
	};
}
