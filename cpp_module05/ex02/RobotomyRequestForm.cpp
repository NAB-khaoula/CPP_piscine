#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form()
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): Form("Robotomy", 72, 45)
{
	_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &robotomyForm)
{
 (*this) = robotomyForm;
}

RobotomyRequestForm &RobotomyRequestForm::operator= (const RobotomyRequestForm &robotomyForm)
{
	this->_target = robotomyForm._target;
	return(*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

void    RobotomyRequestForm::action() const{
	srand(time(0));
	if (rand() % 2 == 0)
	{
		std::cout << '\a';
		std::cout << _target << " has  been robotomized successfully" << std::endl;
	}
	else
		std::cout << "it's a failure" << std::endl;
}
