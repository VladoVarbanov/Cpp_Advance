#include <iostream>
#include <cmath>
#include <vector>
#include <sstream>
#include <string>
#include <algorithm>

using namespace std;

bool desend(int i, int j)
{
	return i > j;
}

int main()
{
	string buff;
	getline(cin, buff);
	istringstream ss(buff);
	vector<int> list;
	int num;
	while (ss >> num)
	{
		double squieRoot = sqrt(num);
		if (fmod(squieRoot, 1) == 0)
		{
			list.push_back(num);
		}
	}
	sort(list.begin(), list.end(), desend);

	for (int value : list)
	{
		cout << value << ' ';
	}
	cout << endl;

	return 0;
}