#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <map>

int main()
{
	std::string input;
	std::getline(std::cin, input);
	std::stringstream ss(input);
	std::vector<std::string> order;
	std::string word;
	std::map<const std::string, int> output;
	while (ss >> word)
	{
		std::string tempS;

		for (int i = 0; i < word.size(); ++i)
		{
			const char ch = static_cast<char>(tolower(word[i]));
			tempS.push_back(ch);
		}
		if (output.find(tempS) == output.end())
		{
			order.push_back(tempS);
		}
		output[tempS]++;
	}
	std::vector<std::string>::iterator vWord = order.begin();
	bool isFirst = true;
	for (; vWord < order.end(); ++vWord)
	{
		if (output.find(*vWord)->second % 2 != 0)
		{
			if (!isFirst)
			{
				std::cout << ", ";
			}
			isFirst = false;
			std::cout << *vWord;
		}
	}
	std::cout << std::endl;

	return 0;
}