#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.NikolaevaAN.Sprint1.Task4.Lib/Tyuiu.NikolaevaAN.Sprint1.Task4.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TyuiuNikolaevaANSprint1Task4Test
{
	TEST_CLASS(TyuiuNikolaevaANSprint1Task4Test)
	{
	public:
		
		TEST_METHOD(TestMethod5)
		{
			// Init
			ISprint1Task4V1* date = new ISprint1Task4V1();
			int x = 2;
			int y;

			// run
			y = date->Vibor(x);

			// Valid
			Assert::AreEqual(2, y);
		}
	};
}
