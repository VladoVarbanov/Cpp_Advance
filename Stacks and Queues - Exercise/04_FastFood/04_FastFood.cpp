#include <iostream>
#include <sstream>
#include <string>
#include <queue>
#include <climits>

using namespace std;

int findMaxOrder(queue<int> orders)
{
	int maxOrder = INT_MIN;
	while (!orders.empty())
	{
		if (orders.front() > maxOrder)
		{
			maxOrder = orders.front();
		}
		orders.pop();
	}
	return maxOrder;
}

int main()
{
	int total;
	string sTotal;
	getline(cin, sTotal);
	istringstream istr2(sTotal);
	istr2 >> total;

	/*cin >> total;
	cin.ignore();*/

	queue<int> orders;

	string buf;
	getline(cin, buf);
	istringstream istr(buf);

	int curOrder;

	while (istr >> curOrder)
	{
		orders.push(curOrder);
	}
	int maxOrder = findMaxOrder(orders);

	while (!orders.empty())
	{
		int curOrder = orders.front();
		if (total >= curOrder)
		{
			orders.pop();
			total -= curOrder;
		}
		else
		{
			break;
		}
	}
	cout << maxOrder << endl;
	if (orders.empty())
	{
		cout << "Orders complete" << endl;

	}
	else
	{
		cout << "Orders left: ";
		while (!orders.empty())
		{
			cout << orders.front() << " ";
			orders.pop();
		}
		cout << endl;
	}

	return 0;
}