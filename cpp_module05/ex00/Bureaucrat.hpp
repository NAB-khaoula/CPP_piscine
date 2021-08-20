#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>

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
		~Bureaucrat();

	
};

std::ostream&	operator<<(std::ostream& os, const Bureaucrat &bur);

#endif