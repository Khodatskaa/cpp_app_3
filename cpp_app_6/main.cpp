#include <iostream>
using namespace std;

#define RED_TEXT "\033[1;31m"
#define GREEN_TEXT "\033[1;32m"
#define RESET_TEXT "\033[0m"

int main() 
{
    const int numMonth = 12;
    double profits[numMonth];
    string monthNames[numMonth] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };

    for (int i = 0; i < numMonth; ++i) 
    {
        cout << "Enter profit for " << monthNames[i] << ": ";
        cin >> profits[i];
    }

    double maxProfit = profits[0];
    double minProfit = profits[0];
    int maxMonth = 0;
    int minMonth = 0;

    for (int i = 0; i < numMonth; ++i) 
    {
        if (profits[i] > maxProfit) 
        {
            maxProfit = profits[i];
            maxMonth = i;
        }
        if (profits[i] < minProfit) 
        {
            minProfit = profits[i];
            minMonth = i;
        }
    }

    cout << "Month with maximum profit: " << monthNames[maxMonth] << " (" << RED_TEXT << maxProfit << RESET_TEXT << ")" << endl;
    cout << "Month with minimum profit: " << monthNames[minMonth] << " (" << GREEN_TEXT << minProfit << RESET_TEXT << ")" << endl;

    return 0;
}
