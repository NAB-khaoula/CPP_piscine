#ifndef INTERN_HPP
#define INTERN_HPP

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
public:
	Intern();
	Intern(const Intern &);
	Intern &operator=(const Intern &);
	~Intern();
	Form*    makeForm(std::string nameForm, std::string targetForm);
};

typedef	Form* (*pointerToFunction)(std::string target);

#endif