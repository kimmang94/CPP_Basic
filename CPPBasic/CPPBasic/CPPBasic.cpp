#include <iostream>
using namespace std;

void TestFunction(int a)
{
	cout << "Test" << endl;
}

int Add(int a, int b)
{
	cout << a + b << endl;
	return a + b;
}

int main()
{
	TestFunction(100);
	Add(2, 5);
}
