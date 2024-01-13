#include <iostream>
#include <stack>
#include <climits>

using namespace std;

int main()
{
	int count;
	stack<int> theStack;
	cin >> count;
	int top;
	stack<int> temp;

	while (count--)
	{
		int command;
		cin >> command;
		int maxNum = INT_MIN;
		int minNum = INT_MAX;


		switch (command)
		{
		case 1:
			int num;
			cin >> num;
			theStack.push(num);
			break;
		case 2:
			if (!theStack.empty()) theStack.pop();
			break;
		case 3:
			if (theStack.empty())
			{
				break;
			}
			while (!theStack.empty())
			{
				top = theStack.top();
				theStack.pop();
				temp.push(top);
				if (maxNum < top)
				{
					maxNum = top;
				}
			}
			while (!temp.empty())
			{
				top = temp.top();
				temp.pop();
				theStack.push(top);
			}
			cout << maxNum << endl;
			break;
		case 4:
			if (theStack.empty())
			{
				break;
			}
			while (!theStack.empty())
			{
				top = theStack.top();
				theStack.pop();
				temp.push(top);
				if (minNum > top)
				{
					minNum = top;
				}
			}
			while (!temp.empty())
			{
				top = temp.top();
				temp.pop();
				theStack.push(top);
			}
			cout << minNum << endl;
			break;
		}
	}
	while (!theStack.empty())
	{
		if (theStack.size() != 1)
		{
			cout << theStack.top() << ", ";
			theStack.pop();
		}
		else
		{
			cout << theStack.top();
			theStack.pop();
		}
	}
	cout << endl;
	return 0;
}