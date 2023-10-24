#include <iostream>
using namespace std;

int main() 
{
    int N;
    cout << "Enter the number of elements in the array: ";
    cin >> N;

    if (N <= 0) 
    {
        cout << "Invalid array size." << endl;
        return 1;
    }

    double* array = new double[N];

    cout << "Enter " << N << " real numbers: ";
    for (int i = 0; i < N; ++i) 
    {
        cin >> array[i];
    }

    double sumNegatives = 0;
    double productMinMax = 1.0;
    double productEvenNumbers = 1.0;
    double sumBetweenNegatives = 0;
    bool hasNegative = false;
    int firstNegativeIndex = -1;
    int lastNegativeIndex = -1;

    for (int i = 0; i < N; ++i) 
    {
        if (array[i] < 0) 
        {
            sumNegatives += array[i];

            if (!hasNegative) 
            {
                firstNegativeIndex = i;
                hasNegative = true;
            }
            lastNegativeIndex = i;
        }

        if (i > 0 && i < N - 1) 
        {
            if (array[i] > array[i - 1] && array[i] > array[i + 1]) 
            {
                productMinMax *= array[i];
            }
        }

        if (i % 2 == 0)
        { 
            productEvenNumbers *= array[i];
        }
    }

    if (firstNegativeIndex != -1 && lastNegativeIndex != -1) 
    {
        for (int i = firstNegativeIndex + 1; i < lastNegativeIndex; ++i) 
        {
            sumBetweenNegatives += array[i];
        }
    }

    cout << "Sum of negative elements: " << sumNegatives << endl;
    cout << "Product of elements between min and max elements: " << productMinMax << endl;
    cout << "Product of elements with even indices: " << productEvenNumbers << endl;
    cout << "Sum of elements between the first and last negative elements: " << sumBetweenNegatives << endl;

    delete[] array;  

    return 0;
}
