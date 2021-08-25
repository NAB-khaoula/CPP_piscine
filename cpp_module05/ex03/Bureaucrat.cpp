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
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &bur)
{
	(*this) = bur;
}

Bureaucrat	&Bureaucrat::operator= (const Bureaucrat &bur)
{
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

void	Bureaucrat::inc()
{
	_grade--;
	if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

void	Bureaucrat::dec(){
	_grade++;
	if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

void	Bureaucrat::executeForm(Form const & form){
	try{
		std::cout << this->_name << " executes " << form.getName() << std::endl;
		form.execute(*this);
	}
	catch (std::exception & e){
		std::cout << e.what();
	}
}
