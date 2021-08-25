#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
	private:
		const std::string	_name;
		bool				_indicator;
		const int			_signGrade;
		const int			_executeGrade;
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
		Form();
		Form(const std::string, const int, const int);
		Form(const Form &);
		Form	&operator=(const Form &);
		const std::string getName() const;
		bool			getIndicator() const;
		int				getSignGrade() const;
		int				getExecuteGrade() const;
		void			beSigned(Bureaucrat &);
		void			signForm(Bureaucrat &);
		void			execute(Bureaucrat const & executor) const;
		virtual void	action() const = 0;
		virtual ~Form();
};

std::ostream&	operator<<(std::ostream& os, const Form &form);

#endif