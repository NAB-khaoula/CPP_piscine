#include <iostream>
#include <fstream>

void    _replaceString(std::string str, std::string s1, std::string s2)
{
	size_t found;
	std::ifstream input_filename;
	std::ofstream output_filename;
	input_filename.open(str);
	for(size_t i = 0; i < str.size(); i++)
	{
		str[i] = toupper(str[i]);
	}
	str += ".replace";
	output_filename.open(str, std::ios::out);
	std::cout << "---------------------------------------" << std::endl;
	while (getline(input_filename, str))
	{
		found = str.find(s1);
		std::cout << found << std::endl;
		std::cout << "BEFORE|" << str << "|" << std::endl;
			str = str.substr(0, found) + s2 + &str[found + s1.size()];
		std::cout << "AFTER|" << str << "|" << std::endl;
		// output_filename << str << std::endl;
	}
	
}

int main(int ac, char **av)
{
	std::string filename;
	if (ac != 3)
		return 1;
	_replaceString(av[0], av[1], av[2]);
	return 0;
}

