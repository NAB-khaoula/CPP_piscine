#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"
#include <string>

class Form;

class Bureaucrat
{
	private:
		const std::string		_name;
		int						_grade;
	public:
		class	GradeTooHighException : public std::exception
		{
			public:
				const char* what() const throw();
		};
		class	GradeTooLowException : public std::exception
		{
			public:
				const char* what() const throw();
		};
		Bureaucrat();
		Bureaucrat(const std::string, int);
		Bureaucrat(const Bureaucrat &);
		Bureaucrat 			&operator=(const Bureaucrat &);
		const std::string	getName() const;
		int					getGrade() const;
		void				inc();
		void				dec();
		void				executeForm(Form const & form);
		~Bureaucrat();

	
};

std::ostream&	operator<<(std::ostream& os, const Bureaucrat &bur);

#endif