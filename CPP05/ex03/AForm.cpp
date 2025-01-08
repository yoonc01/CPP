#include "AForm.hpp"

AForm::AForm()
    : _name("default"), _target("unnamed"), _signed(false), _gradeToSign(150), _gradeToExecute(150)
{
    std::cout << "AForm constructor" <<std::endl;
}

AForm::AForm(std::string name, std::string target, int gradeToSign, int gradeToExecute)
    : _name(name), _target(target), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
    if (gradeToSign < 1 || gradeToExecute < 1)
		throw AForm::GradeTooHighException();
	if (gradeToSign > 150 || gradeToExecute > 150)
		throw AForm::GradeTooLowException();
    std::cout << "AForm parameterized constructor" << std::endl;
}

AForm::AForm(const AForm& obj)
    : _name(obj.getName()), _target(obj.getTarget()), _signed(obj.getSigned()), _gradeToSign(obj.getGradeToSign()), _gradeToExecute(obj.getGradeToExecute())
{
    std::cout << "AForm copy constructor" << std::endl;
}

AForm::~AForm()
{
    std::cout << "AForm destructor" << std::endl;
}

AForm& AForm::operator=(const AForm& obj)
{
    if (this != &obj)
    {
        _signed = obj.getSigned();
        _target = obj.getTarget();
    }
    std::cout << "AForm copy assignment operator" << std::endl;
    return (*this);
}

std::string AForm::getName() const
{
    return (_name);
}

std::string AForm::getTarget() const
{
    return (_target);
}

bool AForm::getSigned() const
{
    return (_signed);
}

int AForm::getGradeToSign() const
{
    return (_gradeToSign);
}

int AForm::getGradeToExecute() const
{
    return (_gradeToExecute);
}

void    AForm::beSigned(const Bureaucrat& obj)
{
    if (obj.getGrade() > _gradeToSign)
        throw AForm::GradeTooLowException();
    _signed = true;
}

void    AForm::checkExecutePermission(const Bureaucrat& executor) const {
    if (!_signed)
        throw AForm::FormNotSignedException();
    if (executor.getGrade() > _gradeToExecute)
        throw AForm::GradeTooLowException();
}

const char* AForm::GradeTooHighException::what() const throw() {
	return ("grade is too high");
}

const char* AForm::GradeTooLowException::what() const throw() {
	return ("grade is too low");
}

const char* AForm::FormNotSignedException::what() const throw() {
	return ("Form is not signed");
}

const char* AForm::FileNotOpenException::what() const throw() {
	return ("File is not open");
}

std::ostream& operator<<(std::ostream& os, const AForm& obj) {
	os << obj.getName();
	if (obj.getSigned())
		os << " is signed and the Grade required to sign is ";
	else
		os << " is not signed and the Grade required to sign is ";
	os << obj.getGradeToSign() << " and Grade required to execute is "
	   << obj.getGradeToExecute();
	return (os);
}