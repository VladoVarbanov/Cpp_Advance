#include <iostream>
#include <sstream>
#include <string>
#include <map>



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
	for (auto value : data)
	{
		std::cout << value.first << " -> " << value.second << std::endl;
	}

	return 0;
}