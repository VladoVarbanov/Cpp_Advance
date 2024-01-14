#include <iostream>
#include <queue>

using namespace std;

bool checkIndex(queue<int> pumpAmount, queue<int> pumpDist, int index)
{
	int truck{};
	int a = pumpAmount.front();
	int d = pumpDist.front();
	for (int i = 0; i < index; ++i)
	{
		pumpAmount.pop();
		pumpDist.pop();
		pumpAmount.push(a);
		pumpDist.push(d);
		a = pumpAmount.front();
		d = pumpDist.front();
	}

	while (!pumpAmount.empty())
	{
		truck += a;
		if (truck > d)
		{
			truck -= d;
			pumpAmount.pop();
			pumpDist.pop();
			if (!pumpAmount.empty())
			{
				a = pumpAmount.front();
				d = pumpDist.front();
			}
		}
		else
		{
			return false;
		}
	}
	return true;
}

int main()
{
	int pumpCount;
	cin >> pumpCount;
	int count = pumpCount;
	queue<int> pumpAmount;
	queue<int> pumpDist;
	while (pumpCount--)
	{
		int i1;
		int i2;
		cin >> i1 >> i2;
		pumpAmount.push(i1);
		pumpDist.push(i2);
	}
	int index{};

	while (!checkIndex(pumpAmount, pumpDist, index))
	{
		index++;
	}

	cout << index << endl;

	return 0;
}