#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.NikolaevaAN.Sprint1.Task2.V5.Lib/Tyuiu.NikolaevaAN.Sprint1.Task2.V5.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TyuiuNikolaevaANSprint1Task2V5Test
{
	TEST_CLASS(TyuiuNikolaevaANSprint1Task2V5Test)
	{
	public:
		
		TEST_METHOD(TestMethod3)
		{
			// Init
			ISprint1Task2V5* date = new ISprint1Task2V5();
			int c = 234;
			int a = 5;
			int s;

			// run
			s = date->LogicLong(c);

			// Valid
			Assert::AreEqual(24, s);
		}
	};
}
