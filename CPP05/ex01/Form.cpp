#include "Form.hpp"

Form::Form()
    : _name("default"), _signed(false), _gradeToSign(150), _gradeToExecute(150)
{
    std::cout << "Form constructor" <<std::endl;
}

Form::Form(std::string name, int gradeToSign, int gradeToExecute)
    : _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
    if (gradeToSign < 1 || gradeToExecute < 1)
		throw Form::GradeTooHighException();
	if (gradeToSign > 150 || gradeToExecute > 150)
		throw Form::GradeTooLowException();
    std::cout << "Form parameterized constructor" << std::endl;
}

Form::Form(const Form& obj)
    : _name(obj.getName()), _signed(obj.getSigned()), _gradeToSign(obj.getGradeToSign()), _gradeToExecute(obj.getGradeToExecute())
{
    std::cout << "Form copy constructor" << std::endl;
}

Form::~Form()
{
    std::cout << "Form destructor" << std::endl;
}

Form& Form::operator=(const Form& obj)
{
    if (this != &obj)
        _signed = obj.getSigned();
    std::cout << "Form copy assignment operator" << std::endl;
    return (*this);
}

std::string Form::getName() const
{
    return (_name);
}

bool Form::getSigned() const
{
    return (_signed);
}

int Form::getGradeToSign() const
{
    return (_gradeToSign);
}

int Form::getGradeToExecute() const
{
    return (_gradeToExecute);
}

void    Form::beSigned(const Bureaucrat& obj)
{
    if (obj.getGrade() > _gradeToSign)
        throw Form::GradeTooLowException();
    _signed = true;
}

const char* Form::GradeTooHighException::what() const throw() {
	return ("grade is too high");
}

const char* Form::GradeTooLowException::what() const throw() {
	return ("grade is too low");
}

std::ostream& operator<<(std::ostream& os, const Form& obj)
{
    os << obj.getName() << " is ";
    if (!obj.getSigned())
        os << "not ";
    os << "signed and the Grade required to sign is ";
    os << obj.getGradeToSign();
    os << " and Grade required to execute is " << obj.getGradeToExecute();
    return (os);
}