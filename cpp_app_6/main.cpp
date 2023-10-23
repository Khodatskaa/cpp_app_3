#include <iostream>
using namespace std;

int main()
{
	double profits[6];
	double totalProfit = 0;

	for (int i = 0; i < 6; ++i)
	{
		cout << "Enter profit for 1 month" << i + 1 << ": ";
		cin >> profits[i];
		totalProfit += profits[i];
	}
	cout << "Total profit for 6 months: " << totalProfit << endl;

	return 0;
}