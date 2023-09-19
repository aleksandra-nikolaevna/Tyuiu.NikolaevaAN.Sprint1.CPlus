#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.NikolaevaAN.Sprint1.Task1.V5.Lib/Tyuiu.NikolaevaAN.Sprint1.Task1.V5.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TyuiuNikolaevaANSprint1Task1V5Test
{
	TEST_CLASS(TyuiuNikolaevaANSprint1Task1V5Test)
	{
	public:
		
		TEST_METHOD(TestMethod2)
		{
			// Init
			ISprint1Task1V5* date = new ISprint1Task1V5();
			int a = 109;
			int s;

			// run
			s = date->Logic(a);

			// Valid
			Assert::AreEqual(10, s);
		}
	};
}
