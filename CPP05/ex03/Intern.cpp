#include "Intern.hpp"

Intern::Intern()
{
    std::cout << "Intern constructor" <<std::endl;
}

Intern::Intern(const Intern& obj)
{
    (void) obj;
    std::cout << "Intern copy constructor" << std::endl;
}

Intern& Intern::operator=(const Intern& obj)
{
	(void) obj;
    return (*this);
}

Intern::~Intern()
{
    std::cout << "Intern destructor" << std::endl;
}

AForm* Intern::makeShrubberyCreationForm(std::string target) const {
	return (new ShrubberyCreationForm(target));
}

AForm* Intern::makeRobotomyRequestForm(std::string target) const {
	return (new RobotomyRequestForm(target));
}

AForm* Intern::makePresidentialPardonForm(std::string target) const {
	return (new PresidentialPardonForm(target));
}

AForm* Intern::makeForm(std::string formName, std::string target) const {
	static AForm* (Intern::*functions[3])(std::string) const = {
		&Intern::makeShrubberyCreationForm, &Intern::makeRobotomyRequestForm, &Intern::makePresidentialPardonForm};
	static std::string arr[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	AForm* form = 0;

	for (int i = 0; i < 3; i++)
		if (formName == arr[i])
			form = (this->*functions[i])(target);

	if (!form)
		throw Intern::FormNotFoundException();
	std::cout << "Intern creates " << formName << std::endl;
	return (form);
}

const char* Intern::FormNotFoundException::what() const throw() {
	return ("Form name not found");
}