#include "Form.hpp"
#include "Intern.cpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>
#include <fstream>
int main(){
	Intern someRandomIntern;
	Form* form = someRandomIntern.makeForm("robotomy request", "Bender");
	Bureaucrat bureaucrat("khaoula", 45);
	form->signForm(bureaucrat);
	bureaucrat.executeForm(*form);
	return (0);
}