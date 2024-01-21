#include <algorithm>
#include <iostream>
#include <set>
#include <sstream>
#include <string>
#include <cctype>

using namespace std;

char to_lower(char input)
{
	return tolower(input);
}

int main()
{
	string buffer;
	getline(cin, buffer);
	transform(buffer.cbegin(), buffer.cend(), buffer.begin(), to_lower);
	stringstream ss(buffer);
	string word;
	set<string> orderList;
	while (ss >> word)
	{
		if (word.size() < 5)
		{
			orderList.insert(word);
		}
	}
	bool isFirst = true;
	for (auto value : orderList)
	{
		if (!isFirst)
		{
			cout << ", " << value;
		}
		else
		{
			isFirst = false;
			cout << value;
		}
	}
	cout << endl;

	return 0;
}