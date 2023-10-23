#include <iostream>
using namespace std;

int main()
{
	const int arraySize = 10; 
	int arr[arraySize];

	for (int i = 0; i < arraySize; ++i)
	{
		arr[i] = i * 10;
	}

	cout << "Original array: ";
	for (int i = 0; i < arraySize; ++i)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	cout << "Array in reverse order: ";
	for (int i = arraySize - 1; i >= 0; --i)
	{
		cout << arr[i] << " ";
	}

	return 0;
}