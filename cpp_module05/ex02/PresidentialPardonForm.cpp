#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form()
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): Form("PresidentialForm", 25, 5)
{
    _target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &PresidentialForm)
{
    (*this) = PresidentialForm;
}

PresidentialPardonForm &PresidentialPardonForm::operator= (const PresidentialPardonForm &PresidentialForm)
{
    this->_target = PresidentialForm._target;
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

void    PresidentialPardonForm::action() const{
    std::cout << _target << "  has been pardoned by Zafod Beeblebrox." << std::endl; 
}
