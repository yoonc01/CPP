#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Default"), _grade(1)
{
    std::cout << "Bureaucrat constructor" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
    std::cout << "Bureaucrat parameterized constructor" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj) : _name(obj.getName()), _grade(obj.getGrade())
{
    std::cout << "Bureaucrat copy constructor" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat destructor" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& obj)
{
    if (this != &obj)
        // name은 const로 변경 x
        // 복사 생성자는 const는 건들지 않는 것이 일반적임
        _grade = obj.getGrade();
    std::cout << "Bureaucrat copy assignment operator" << std::endl;
    return (*this);
}

std::string Bureaucrat::getName() const
{
    return (_name);
}

int Bureaucrat::getGrade() const
{
    return (_grade);
}

void    Bureaucrat::incrementGrade()
{
    _setGrade(_grade - 1);
}

void    Bureaucrat::decrementGrade()
{
    _setGrade(_grade + 1);
}

void    Bureaucrat::_setGrade(int grade)
{
    if (grade < 1)
        throw(Bureaucrat::GradeTooHighException());
    if (grade > 150)
        throw(Bureaucrat::GradeTooLowException());
    _grade = grade;
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
    return ("grade is greater than the maximum value");
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
    return ("grade is less than the minimum value");
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &obj)
{
    os << obj.getName() << ", bureaucrat grade " << obj.getGrade();
    return (os);
}
