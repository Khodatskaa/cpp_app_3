#include <iostream>
using namespace std;

int main() 
{
    const int numSides = 5;
    double sides[numSides];
    double perimeter = 0;

    for (int i = 0; i < numSides; ++i) 
    {
        cout << "Enter the length of side " << (i + 1) << ": ";
        cin >> sides[i];
        perimeter += sides[i];
    }

    cout << "Perimeter of the pentagon: " << perimeter << endl;

    return 0;
}
