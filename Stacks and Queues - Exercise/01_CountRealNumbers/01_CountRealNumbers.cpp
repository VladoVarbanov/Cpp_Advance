#include <iostream>
#include <sstream>
#include <string>
#include <map>
#include <xlocmon>


int main()
{
	std::string input;
	std::getline(std::cin, input);
	std::stringstream ss(input);
	double i;
	std::map<double, int> data;
	while (ss >> i)
	{
		data[i]++;
	}

	for (const std::pair<const double, const int> value : data)
	{
		std::cout << value.first << " -> " << value.second << std::endl;
	}

	return 0;
}
