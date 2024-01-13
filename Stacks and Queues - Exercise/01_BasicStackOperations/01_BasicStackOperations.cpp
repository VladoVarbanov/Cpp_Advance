#include <iostream>
#include <sstream>
#include <stack>
#include <climits>
using namespace std;

int main()
{
	int toAdd, toRemove, toSearch;
	cin >> toAdd >> toRemove >> toSearch;
	stack<int> numbers;
	while (toAdd--)
	{
		int num;
		cin >> num;
		numbers.push(num);
	}
	while (toRemove--)
	{
		numbers.pop();
	}
	if (numbers.size() == 0)
	{
		cout << 0 << endl;
	}
	else
	{
		int minElement = INT_MAX;

		while (numbers.size())
		{
			int top = numbers.top();
			numbers.pop();
			if (top == toSearch)
			{
				cout << "true" << endl;
				return 0;
			}
			else if (top < minElement)
			{
				minElement = top;

			}
		}
		cout << minElement << endl;
	}



	return 0;
}
