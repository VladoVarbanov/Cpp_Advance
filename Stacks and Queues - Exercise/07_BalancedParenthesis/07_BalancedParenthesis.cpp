#include <iostream>
#include <stack>

using namespace std;

int main()
{
	string input;
	cin >> input;
	stack<char> simbols;

	for (int i = 0; i < input.size(); ++i)
	{

		switch (input[i])
		{
		case '(':
		case '[':
		case '{':
			simbols.push(input[i]);
			break;
		case ')':
			if (simbols.empty() || simbols.top() != '(')
			{
				cout << "NO" << endl;
				return 0;
			}
			else
			{
				simbols.pop();
			}
			break;
		case ']':
			if (simbols.empty() || simbols.top() != '[')
			{
				cout << "NO" << endl;
				return 0;
			}
			else
			{
				simbols.pop();
			}
			break;
		case '}':
			if (simbols.empty() || simbols.top() != '{')
			{
				cout << "NO" << endl;
				return 0;
			}
			else
			{
				simbols.pop();
			}
			break;

		}
	}
	cout << "YES" << endl;
	return 0;
}