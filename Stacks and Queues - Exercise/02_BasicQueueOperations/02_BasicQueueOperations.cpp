#include <iostream>
#include <sstream>
#include <queue>
#include <climits>

using namespace std;

int main()
{
	int toAdd, toRemove, toSearch;
	cin >> toAdd >> toRemove >> toSearch;
	queue<int> numbers;
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
			int front = numbers.front();
			numbers.pop();
			if (front == toSearch)
			{
				cout << "true" << endl;
				return 0;
			}
			else if (front < minElement)
			{
				minElement = front;

			}
		}
		cout << minElement << endl;
	}



	return 0;
}

