#ifndef AFORM_HPP
# define AFORM_HPP

#include <exception>
#include <iostream>
#include <string>

#include "Bureaucrat.hpp"

//전방 선언
// 두 class가 서로 참조하는 경우 순환 참조가 발생하기 때문이다.
class Bureaucrat;

class AForm {
    private:
        const std::string      _name;
        std::string            _target;
        bool                   _signed;
        const int              _gradeToSign;
        const int              _gradeToExecute;

    protected:
        class   GradeTooHighException : public std::exception {
            private:
                virtual const char* what() const throw();
        };

        class   GradeTooLowException : public std::exception {
            private:
                virtual const char* what() const throw();
        };

        class FormNotSignedException : public std::exception {
            private:
                virtual const char* what() const throw();
        };

        class FileNotOpenedException : public std::exception {
            private:
                virtual const char* what() const throw();
        };

        class FileNotClosedException : public std::exception {
            private:
                virtual const char* what() const throw();
        };
        
        AForm();
        AForm(std::string name, std::string target, int gradeToSign, int gradeToExecute);
        AForm(const AForm& obj);
        AForm& operator=(const AForm& obj);
        void    checkExecutePermission(const Bureaucrat& executor) const;
        
    public:
        virtual ~AForm();
        std::string getName() const;
        std::string getTarget() const;
        bool    getSigned() const;
        int     getGradeToSign() const;
        int     getGradeToExecute() const;
        void    beSigned(const Bureaucrat& obj);
        virtual void execute(Bureaucrat const& executor) const = 0;
};

std::ostream& operator<<(std::ostream& os, const AForm& obj);

#endif