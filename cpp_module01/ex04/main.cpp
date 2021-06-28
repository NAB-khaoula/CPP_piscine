#include <iostream>
#include <fstream>

std::string	_uppercaseAddingExtension(std::string name, std::string extension)
{
	for(size_t i = 0; i < name.size(); i++)
		name[i] = toupper(name[i]);
	name += extension;
	return name;
}

std::string	_replaceString(std::string line, std::string initial, std::string modified)
{
	size_t found;
	found = line.find(initial, 0);
	while (line[found] && initial != modified)
	{
		if (found == std::string::npos)
			break;
		line = line.substr(0, found) + modified + &line[found + initial.size()];
		found = line.find(initial, found + modified.length());
	}
	return line;
}

void	_writeInFile(std::ifstream inputFilename, std::ofstream outputFilename, char **arguments)
{
	std::string line;
	while (getline(inputFilename, line))
		outputFilename << _replaceString(line, arguments[2], arguments[3]) << std::endl;
}

int main(int ac, char **av)
{
	if (ac != 4)
		return 1;
	std::ifstream inputFilename(av[1]);
	if (!inputFilename.is_open())
	{
		std::cout << "ERROR, file doesn't exist!" << std::endl;
		return 1;
	}
	std::ofstream outputFilename;
	outputFilename.open(_uppercaseAddingExtension(av[1], ".replace"), std::ios::out);
	_writeInFile(inputFilename, outputFilename, av);
	return 0;
}
