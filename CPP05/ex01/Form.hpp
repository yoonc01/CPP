#ifndef FORM_HPP
# define FORM_HPP

#include <exception>
#include <iostream>
#include <string>

#include "Bureaucrat.hpp"

//전방 선언
// 구 class가 서로 참조하는 경우 순환 참조가 발생하기 때문이다.
class Bureaucrat;

class Form {
    private:
        const std::string _name;
        bool              _signed;
        const int         _gradeToSign;
        const int         _gradeToExecute;

        class   GradeTooHighException : public std::exception {
            private:
                virtual const char* what() const throw();
        };

        class   GradeTooLowException : public std::exception {
            private:
                virtual const char* what() const throw();
        };

    public:
        Form();
        Form(std::string name, int gradeToSign, int gradeToExecute);
        Form(const Form& obj);
        ~Form();
        Form& operator=(const Form& obj);
        std::string getName() const;
        bool    getSigned() const;
        int     getGradeToSign() const;
        int     getGradeToExecute() const;
        void    beSigned(const Bureaucrat& obj);
};

std::ostream& operator<<(std::ostream& os, const Form& obj);

#endif