#include "Form.hpp"

int main(){
	Form form("form", 120, 120);
	Bureaucrat bureaucrat("khaoula", 120);

	form.signForm(bureaucrat);
	Form form1("form1", 119, 120);
	Bureaucrat bureaucrat1("latifa", 120);

	form1.signForm(bureaucrat1);
}