#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
    :AForm("PresidentialPardonForm", "", 25, 5)
{
    std::cout << "PresidentialPardonForm constructor" <<std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target)
    :AForm("PresidentialPardonForm", target, 25, 5)
{
    std::cout << "PresidentialPardonForm parameterized constructor" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& obj)
    :AForm(obj)
{
    std::cout << "PresidentialPardonForm copy constructor" << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& obj)
{
    if (this != &obj)
        AForm::operator=(obj) ;
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "PresidentialPardonForm destructor" << std::endl;
}

void PresidentialPardonForm::execute(Bureaucrat const& executor) const {
	if (!getSigned())
		throw AForm::FormNotSignedException();
	else if (getGradeToExecute() < executor.getGrade())
		throw AForm::GradeTooLowException();
	std::cout << getTarget() << " has been pardoned by Zaphod Beeblebrox"
			  << std::endl;
}