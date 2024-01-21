#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <map>

using namespace std;

int main()
{
	string input;
	cin >> input;
	map<string, size_t> minerList;
	vector<string> orderList;

	while (input != "stop")
	{
		string ore = input;
		size_t amount;
		cin >> amount;
		if (minerList.find(ore) == minerList.end())
		{
			orderList.push_back(ore);
			minerList[ore] = amount;
		}
		else
		{
			minerList[ore] += amount;
		}
		cin >> input;
	}

	for (auto value : orderList)
	{
		cout << value << " -> " << minerList.find(value)->second << endl;
	}

	return 0;
}