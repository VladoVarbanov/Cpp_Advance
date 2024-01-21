#include <iostream>
#include <set>
#include <sstream>
#include <string>

using namespace std;

int main()
{
	string buffer;
	getline(cin, buffer);
	istringstream istr(buffer);
	int num;
	set<int> list;
	while (istr >> num)
	{
		list.insert(num);
	}
	bool isFirst = true;
	for (int digit : list)
	{
		if (!isFirst)
		{
			cout << " <= " << digit;
		}
		else
		{
			isFirst = false;
			cout << digit;
		}
	}
	cout << endl;
	return 0;
}