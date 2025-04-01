#include <iostream>
#include <fstream>
#include "functions.hpp"

int main()
{
	unsigned int val, sum_sq = 0, x = 0;
	std::ifstream fl1("data.txt");
	if(!fl1)
	{
		std::cerr << "Warning: data.txt couldn't be found\nExiting..." << std::endl;
		return 1;
	}
	std::cout << "Reading data.txt ..." << std::endl;
	std::string tmp;
	std::getline(fl1, tmp);
	std::cout << tmp << std::endl;
	while(fl1 >> val)
	{
		sum_sq += val * val;
		x++;
	}
	unsigned int F = sum_values(x);
	std::cout << "Sum of Squares: " << sum_sq << std::endl;
	std::cout << "Sum through functions.cpp = " << F << std::endl;
	std::cout << "---End of Program---" << std::endl;
	return 0;
}
