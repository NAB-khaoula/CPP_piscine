#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>
#include <fstream>
int main(){
	Form *form = new ShrubberyCreationForm("home");
	Form *form1 = new RobotomyRequestForm("robotomyrequest");
	Bureaucrat bureaucrat("khaoula", 137);

	form->signForm(bureaucrat);
	bureaucrat.executeForm(*form);
	form->signForm(bureaucrat);
	bureaucrat.executeForm(*form1);

	return (0);
}