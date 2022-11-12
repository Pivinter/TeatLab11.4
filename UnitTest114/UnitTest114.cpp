#include "pch.h"
#include "CppUnitTest.h"
#include "../TeatLab11.4/main.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest114
{
	TEST_CLASS(UnitTest114)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			t = main();
			Assert::AreEqual(t, 0);
		}
	};
}
