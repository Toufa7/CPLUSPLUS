#include <iostream>
#include <string>
#include <fstream>

int main(int ac, char *av[])
{
    std::ifstream   input;
	std::ofstream	output;

    std::string     needle;
    std::string     replace;
    std::string     data;


    needle = av[2];
	replace = av[3];

	if (ac == 3)
	{
		input.open(av[1]);
		if (input.is_open())
		{
			output.open(std::string(av[1]) + ".replace");
			while (std::getline(input, data))
			{
				size_t idx = 0;
				while ((idx = data.find(needle, idx)) != -1)
				{
					data.erase(idx, replace.length());
					data.insert(idx, replace);
					output << data << std::endl;
					idx += replace.length();
				}
			}
			input.close();
			output.close();
		}
		else
			std::cerr << "Error: " << av[1] << " could not be opened" << std::endl;
	}
	else
		std::cerr << "Provide us with 3 Args : [filename] [needle] [replace]" << std::endl;
}