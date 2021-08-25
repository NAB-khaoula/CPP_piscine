#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>
#include <fstream>
int main(){
	Form *form = new ShrubberyCreationForm("home");
	Bureaucrat bureaucrat("khaoula", 137);
	form->beSigned(bureaucrat);
	form->signForm(bureaucrat);
	bureaucrat.executeForm(*form);

	Form *form1 = new RobotomyRequestForm("robotomyrequest");
	Bureaucrat bureaucrat1("Nawfal", 45);
	form1->beSigned(bureaucrat1);
	form1->signForm(bureaucrat1);
	bureaucrat1.executeForm(*form1);

	Form *form2 = new PresidentialPardonForm("PresidentialPardon");
	Bureaucrat bureaucrat2("prPardon", 5);
	form2->beSigned(bureaucrat2);
	form2->signForm(bureaucrat2);
	bureaucrat2.executeForm(*form2);
	return (0);
}