#include "Intern.hpp"

Intern::Intern(){}

Intern::Intern(const Intern &){}

Intern &Intern::operator=(const Intern &){
	return(*this);
}

Form    *CreatShruberry(std::string target){
	Form *shrubberyForm = new ShrubberyCreationForm(target);
	return (shrubberyForm);
}

Form    *CreatRobotomy(std::string target){
	Form *robotomyForm = new RobotomyRequestForm(target);
	return (robotomyForm);
}

Form    *CreatPresidential(std::string target){
	Form    *presidentialForm = new PresidentialPardonForm(target);
	return (presidentialForm);
}

Intern::~Intern(){}

Form* Intern::makeForm(std::string nameForm, std::string targetForm){
	pointerToFunction pointerToForm[] = {&CreatShruberry, &CreatRobotomy, &CreatPresidential};
	std::string name[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	for(int i = 0; i < 4; i++)
		if (name[i] == nameForm)
			return (pointerToForm[i](targetForm));
	std::cout << "ERROR! The name doesn't represent any form!" << std::endl;
	return (NULL);
}
