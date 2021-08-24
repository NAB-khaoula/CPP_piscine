#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form("Shrubbery", 145, 137)
{
    _target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &shrubberyForm)
{
    (*this) = shrubberyForm;
}

ShrubberyCreationForm &operator= (const ShrubberyCreationForm &shrubberyForm)
{
    this->_target = shrubberyForm._target;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

void    ShrubberyCreationForm::action(){
    std::ostream    outputFile;
    outputFile.open("Shrubbery");
    outputFile << "       ****\n     ********\n    **  ******\n     *   ******     ******\n         ******   *********\n          ****  *****   ***\n          ***  ***     **\n    *************       *\n  ******************\n *****   H*****H*******\n ***     H-___-H  *********\n  ***    H     H      *******\n   **    H-___-H        *****\n     *   H     H         ****\n         H     H         ***\n         H-___-H         **\n         H     H         *\n         H-___-H\n\n         ALOHA!!\n" << std::endl;
    outputFile.close();
}
