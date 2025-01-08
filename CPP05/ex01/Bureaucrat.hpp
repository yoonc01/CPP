#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include "Form.hpp"
#include <exception>
#include <iostream>
#include <string>

class Form;

class Bureaucrat {
    private:
        void                _setGrade(int amount);
        const std::string   _name;
        int                 _grade;

        class GradeTooHighException : public std::exception {
            private:
                virtual const char *what() const throw();
        };
        class GradeTooLowException : public std::exception {
            private:
                virtual const char *what() const throw();
        };

    public:
        Bureaucrat();
        Bureaucrat(std::string name, int grade);
        Bureaucrat(const Bureaucrat &obj);
        ~Bureaucrat();
        Bureaucrat &operator=(const Bureaucrat &obj);
        std::string getName() const;
        int getGrade() const;
        void incrementGrade();
        void decrementGrade();
        void signForm(Form& obj) const;
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &obj);

#endif