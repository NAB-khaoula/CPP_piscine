#include "Bureaucrat.hpp"

const char* Bureaucrat::GradeTooHighException::what() const throw(){
	return ("The Grade is too high!");
}

const char* Bureaucrat::GradeTooLowException::what() const throw(){
	return ("The Grade is too low!");
}

const std::string Bureaucrat::getName() const{
	return this->_name;
}

int Bureaucrat::getGrade() const{
	return this->_grade;
}

Bureaucrat::Bureaucrat() : _name("null"),  _grade(0)
{
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooLowException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooHighException();
	else
		_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &bur)
{
	(*this) = bur;
}

Bureaucrat	&Bureaucrat::operator= (const Bureaucrat &bur)
{
	// _name = bur._name;
	_grade = bur._grade;
	return (*this);	
}

std::ostream&	operator<<(std::ostream& os, const Bureaucrat &bur)
{
	os << bur.getName() << ", bureaucrat grade " << bur.getGrade();
	return(os);
}

Bureaucrat::~Bureaucrat()
{
}
