#include "Form.hpp"

const char* Form::GradeTooHighException::what() const throw(){
	return ("The Grade is too high!");
}

const char* Form::GradeTooLowException::what() const throw(){
	return ("The Grade is too low!");
}

Form::Form() : _name("null"), _indicator(false), _signGrade(0), _executeGrade(0){
}

Form::Form(const std::string name, const int signGrade, const int executeGrade) : _name(name), _signGrade(signGrade), _executeGrade(executeGrade){
	_indicator = false;
	if (signGrade < 1 || executeGrade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (signGrade > 150 || executeGrade > 150)
		throw Bureaucrat::GradeTooLowException();
}

// need to complet the canonical form;

Form::Form(const Form &form): _name(form._name), _signGrade(form._signGrade), _executeGrade(form._executeGrade) {
	(*this) = form;
}

Form	&Form::operator=(const Form &form){
	_indicator = form._indicator;
	return (*this);
}

Form::~Form(){
}

const std::string Form::getName() const{
	return(_name);
}

bool	Form::getIndicator() const{
	return(_indicator);
}

int	Form::getSignGrade() const{
	return(_signGrade);
}

int	Form::getExecuteGrade() const{
	return(_executeGrade);
}

std::ostream&	operator<<(std::ostream& os, const Form &form)
{
	os << form.getName() << ", form sign grade " << form.getSignGrade() << ", form execute grade " << form.getExecuteGrade();
	return(os);
}

void	Form::beSigned(Bureaucrat &bur){
	if (bur.getGrade() > _signGrade)
		throw Form::GradeTooLowException();
	else
		_indicator = true;
}

void	Form::signForm(Bureaucrat &bur){
	try{
		beSigned(bur);
		std::cout << bur.getName() << " signs " << this->getName() << std::endl;
	}
	catch (std::exception &e){
		std::cout << bur.getName() << " cannot sign " << this->getName() << " because " << e.what() << std::endl;
	}
}
