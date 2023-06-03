#include <iostream>
#include <fstream>
#include <string>

void replace_in_file(const std::string& filename, const std::string& s1, const std::string& s2)
{
    std::ifstream input_file(filename);
    std::string output_filename = filename + ".replace";
    std::ofstream output_file(output_filename);
    std::string line;
    
    while (std::getline(input_file, line)) {
        size_t pos = 0;
        while((pos = line.find(s1, pos)) != std::string::npos) {
            line.replace(pos, s1.length(), s2);
            pos += s2.length();
        }
        output_file << line << std::endl;
    }
    input_file.close();
    output_file.close();
}

int main(int ac, char *av[])
{
	std::ifstream	in;
	std::ofstream	out;

	std::string		input;
	std::string		needle;
	std::string		replace;
	std::string		filename;



	if (ac == 4)
	{
		filename = av[1];
		needle = av[2];
		replace = av[3];
		int idx;
		in.open(filename);
		if (in.is_open())
		{
            while (std::getline(input, line)) {
                size_t pos = 0;
                while((pos = line.find(needle, pos)) != std::string::npos) {
                    line.replace(pos, needle.length(), replace);
                    pos += replace.length();
                }
                filename << line << std::endl;
            }
            input.close();
            filename.close();
		}
		else
		{
			std::cerr << "Error: " << filename << " could not be opened" << std::endl;
		}
	}
	else
		std::cerr << "Provide us with 3 Args : [filename] [needle] [replace]" << std::endl;
}
