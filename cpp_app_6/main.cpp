#include <iostream>
#include <ctime>
using namespace std;

int main() {
    const int arraySize = 10;
    int numbers[arraySize];

    srand(static_cast<unsigned>(time(0))); 

    for (int i = 0; i < arraySize; ++i) 
    {
        numbers[i] = rand() % 100;
    }

    int minElement = numbers[0];
    int maxElement = numbers[0];

    for (int i = 1; i < arraySize; ++i) 
    {
        if (numbers[i] < minElement) 
        {
            minElement = numbers[i];
        }
        if (numbers[i] > maxElement) 
        {
            maxElement = numbers[i];
        }
    }

    cout << "Array of random numbers: ";
    for (int i = 0; i < arraySize; ++i) 
    {
        cout << numbers[i] << " ";
    }
    cout << endl;

    cout << "Minimum element: " << minElement << endl;
    cout << "Maximum element: " << maxElement << endl;

    return 0;
}
