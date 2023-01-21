#include <iostream>
#include <string>
#include <fstream>

int main (int ac, char *av[])
{
	std::ifstream	in;
	std::ofstream	out;

	std::string		input;
	std::string		needle;
	std::string		replace;
	std::string		input_file;
	std::string		output_filename = input_file + ".replace";

	input_file = av[1];
	needle = av[2];
	replace = av[3];

	if (ac == 4)
	{
		in.open(input_file);
		if (in.is_open())
		{
			while (std::getline(in, input))
			{
				size_t idx = 0;
				while((idx = input.find(needle, idx)) != std::string::npos)
				{
					input.replace(idx, needle.length(), replace);
					idx += replace.length();
				}
				output_filename << input_file << std::endl;
			}
			in.close();
			out.close();
		}	
		else
		{
			std::cerr << "Error: " << input_file << " could not be opened" << std::endl;
		}
	}
	else
		std::cerr << "Provide us with 3 Args : [filename] [needle] [replace]" << std::endl;
}


// #include <iostream>
// #include <string>
// #include <fstream>


// int main (int ac, char *av[])
// {
// 	std::ifstream	in;
// 	std::ofstream	out;

// 	std::string		input_file;
// 	std::string		needle;
// 	std::string		replace;
// 	std::string		filename;
// 	std::string		output_file = filename + "replace";

// 	filename = av[1];
// 	needle = av[2];
// 	replace = av[3];
// 	if (ac == 4)
// 	{
// 			while (std::getline(input_file, line))
// 			{
// 				size_t idx = 0;
// 				while((idx = line.find(needle, idx)) != std::string::npos)
// 				{
// 					line.replace(idx, needle.length(), replace);
// 					idx += replace.length();
// 				}
// 				output_file << line << std::endl;
// 			}
// 			input_file.close();
// 			output_file.close();
// 		}
// 		else
// 		{
// 			std::cerr << "Error: " << filename << " could not be opened" << std::endl;
// 		}
// 	}
// 	else
// 		std::cerr << "Provide us with 3 Args : [filename] [needle] [replace]" << std::endl;
// }