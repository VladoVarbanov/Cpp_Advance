#include <iostream>
#include <stack>
#include <string>
#include <sstream>

using namespace std;

int main()
{
	string input;
	getline(cin, input);
	istringstream istr(input);
	int singlePrice;
	stack<int> box;
	while (istr >> singlePrice)
	{
		box.push(singlePrice);
	}

	int maxRackPrice;
	cin >> maxRackPrice;
	int racks{};
	int curPrice{};

	while (!box.empty())
	{
		int top = box.top();
		box.pop();
		if (curPrice + top <= maxRackPrice)
		{
			curPrice += top;
		}
		else
		{
			racks++;
			curPrice = top;
		}
	}
	racks++;
	cout << racks << endl;

	return 0;
}