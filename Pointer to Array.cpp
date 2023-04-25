// C++ program to demonstrate
// pointer to an array.

#include <iostream>
using namespace std;

int main()
{

	// Pointer to an array of five numbers
	int(*a)[5];

	int b[5] = { 1, 2, 3, 4, 5 };

	int i = 0;

	// Points to the whole array b

	a = &b;

	for (i = 0; i < 5; i++)
		cout << *(*a + i) << endl;

	return 0;
}

