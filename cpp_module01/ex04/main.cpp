#include <iostream>
#include <fstream>
#define	ERROR_ARG -1
#define	ERROR_WRONG_FILE -2
#define	ERROR_EMPTY_STRING -3

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
	while (line[found])
	{
		if (found == std::string::npos)
			break;
		line.erase(found, initial.length());
		line.insert(found, modified);
		found = line.find(initial, found + modified.length());
	}
	return line;
}

bool	_checkEmptyString(std::string initial, std::string modified)
{
	return initial.empty() || modified.empty();
}

void	_printError(int error)
{
	if (error == ERROR_ARG)
		std::cout << "ARGUMENT ERROR, the program needs four arguments!" << std::endl;
	else if (error == ERROR_WRONG_FILE)
		std::cout << "ERROR, file cannot be opened!" << std::endl;
	else if (error == ERROR_EMPTY_STRING)
		std::cout << "ERROR, strings must not be empty!" << std::endl;
	exit(0);
}

void	_checkArguments(int ac, char **av)
{
	if (ac != 4)
		_printError(ERROR_ARG);
	else if (_checkEmptyString(av[2], av[3]))
		_printError(ERROR_EMPTY_STRING);
}

int main(int ac, char **av)
{
	std::string line;
	std::ofstream outputFilename;
	std::ifstream inputFilename(av[1]);
	_checkArguments(ac, av);
	if (!inputFilename.is_open())
		_printError(ERROR_WRONG_FILE);
	outputFilename.open(_uppercaseAddingExtension(av[1], ".replace"), std::ios::out);
	while (getline(inputFilename, line))
	{
		outputFilename << _replaceString(line, av[2], av[3]);
		if (!inputFilename.eof())
			outputFilename << std::endl;
	}
	return 0;
}
