#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.NikolaevaAN.Sprint1.Task3.Lib/Tyuiu.NikolaevaAN.Sprint1.Task3.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TyuiuNikolaevaANSprint1Task3Test
{
	TEST_CLASS(TyuiuNikolaevaANSprint1Task3Test)
	{
	public:
		
		TEST_METHOD(TestMethod4)
		{
			// Init
			ISprint1Task3* date = new ISprint1Task3();
			int a = 4000;
			int c;

			// run
			c = date->Uslovie(a);

			// Valid
			Assert::AreEqual(4000, c);
		}
	};
}
