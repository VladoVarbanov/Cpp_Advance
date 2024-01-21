#include <iostream>
#include <sstream>
#include <set>
#include <string>

int main()
{
	std::string input;
	std::getline(std::cin, input);
	std::stringstream istr(input);
	std::set<double, std::greater<double>> list;
	double num;
	while (istr >> num)
	{
		list.insert(num);
	}
	int i{};
	std::set<double>::iterator itr = list.begin();
	for (; itr != list.end(); ++itr, ++i)
	{
		if (i > 2)
		{
			break;
		}
		std::cout << *itr << ' ';
	}
	std::cout << std::endl;

	return 0;
}