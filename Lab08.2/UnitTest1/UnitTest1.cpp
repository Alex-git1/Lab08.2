#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab08.2/Lab08.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			string testStr = "Hello , world !";
			string expectedStr = "Hello, world!";
			RemoveSpacesBeforePunctuation(testStr);
			Assert::AreEqual(expectedStr, testStr);
		}
	};
}
