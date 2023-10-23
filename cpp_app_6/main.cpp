#include <iostream>
#include <string>
using namespace std;

int main() 
{
    const int numMonths = 12;
    double profits[numMonths];
    string monthNames[numMonths] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };

    for (int i = 0; i < numMonths; ++i) 
    {
        cout << "Enter profit for " << monthNames[i] << ": ";
        cin >> profits[i];
    }

    int startMonth, endMonth;
    cout << "Enter the range (start month and end month): ";
    cin >> startMonth >> endMonth;

    if (startMonth < 1 || startMonth > numMonths || endMonth < startMonth || endMonth > numMonths) 
    {
        cout << "Invalid range. Please enter a valid range." << endl;
        return 1;
    }

    double maxProfit = profits[startMonth - 1];
    double minProfit = profits[startMonth - 1];
    int maxMonth = startMonth;
    int minMonth = startMonth;

    for (int i = startMonth; i <= endMonth; ++i) 
    {
        if (profits[i - 1] > maxProfit) 
        {
            maxProfit = profits[i - 1];
            maxMonth = i;
        }
        if (profits[i - 1] < minProfit) 
        {
            minProfit = profits[i - 1];
            minMonth = i;
        }
    }

    cout << "Month with maximum profit in the range: " << monthNames[maxMonth - 1] << " (" << maxProfit << ")" << endl;
    cout << "Month with minimum profit in the range: " << monthNames[minMonth - 1] << " (" << minProfit << ")" << endl;

    return 0;
}
